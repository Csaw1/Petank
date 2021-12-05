#define in1 2
#define in2 3
#define in3 4
#define in4 5
#define in5 6
#define in6 7
#define in7 8
#define in8 9 
#define in11 11
#define in12 12
#define in13 13

void powerOffMotors()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(in5, LOW);
  digitalWrite(in6, LOW);
  digitalWrite(in7, LOW);
  digitalWrite(in8, LOW);
  digitalWrite(in11, LOW);
  digitalWrite(in12, LOW);
  digitalWrite(in13, LOW);
}

void setup()
{
  pinMode(in1, OUTPUT); //Declaring the pin modes, obviously they're outputs
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT); 
  pinMode(in4, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(in7, OUTPUT); 
  pinMode(in8, OUTPUT);
  pinMode(in11, OUTPUT);
  pinMode(in12, OUTPUT); 
  pinMode(in13, OUTPUT);

  powerOffMotors();
}

void loop()
{
  if (Serial.available() > 0)
  {
    int ledNumber = Serial.read() - '0';

    powerOffMotors();

    switch (ledNumber) {
      case 1:
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      digitalWrite(in5, HIGH);
      digitalWrite(in6, LOW);
      digitalWrite(in7, HIGH);
      digitalWrite(in8, LOW);
      break;
      case 2:
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      digitalWrite(in5, LOW);
      digitalWrite(in6, HIGH);
      digitalWrite(in7, LOW);
      digitalWrite(in8, HIGH);
      break;
      case 3:
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      digitalWrite(in5, LOW);
      digitalWrite(in6, HIGH);
      digitalWrite(in7, LOW);
      digitalWrite(in8, HIGH);
      break;
      case 4:
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      digitalWrite(in5, HIGH);
      digitalWrite(in6, LOW);
      digitalWrite(in7, HIGH);
      digitalWrite(in8, LOW);
      break;
      case 5:
      digitalWrite(in11, HIGH);
      digitalWrite(in12, HIGH);
      break;
      case 6:
      digitalWrite(in11, HIGH);
      digitalWrite(in12, LOW);
      break;
      case 7:
      digitalWrite(in13, HIGH);
      delay(200);
      digitalWrite(in13, LOW);
      default:
      break;
    }
  }
}
