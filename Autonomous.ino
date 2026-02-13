// Smart Hybrid Autonomous Boat
// Bluetooth + Ultrasonic Obstacle Avoidance

#define trigPin 9
#define echoPin 10

#define m1 5
#define m2 6
#define m3 7
#define m4 8

char command;

long duration;
int distance;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);

  stopBoat();
}

void loop() {

  // Read Bluetooth / Voice command
  if (Serial.available()) {
    command = Serial.read();
    manualControl(command);
  }

  // Autonomous obstacle detection
  distance = getDistance();

  if (distance < 20 && distance > 0) {
    avoidObstacle();
  }
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  int dist = duration * 0.034 / 2;

  return dist;
}

void manualControl(char cmd) {
  switch (cmd) {

    case 'F': forward(); break;
    case 'B': backward(); break;
    case 'L': left(); break;
    case 'R': right(); break;
    case 'S': stopBoat(); break;
  }
}

void avoidObstacle() {
  stopBoat();
  delay(300);

  backward();
  delay(500);

  right();
  delay(500);

  stopBoat();
}

void forward() {
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
}

void backward() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
}

void left() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
}

void right() {
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
}

void stopBoat() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);
}
