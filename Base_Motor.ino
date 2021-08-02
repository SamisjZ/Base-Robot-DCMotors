

int enA = 9;    // Motor (A) connections
int in1 = 8;
int in2 = 7;

int enB = 3;    // Motor (B) connections
int in3 = 6;
int in4 = 5;

void setup() {
  // Set all motor pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  // set Motor (A) and (B) Off,initial bosition
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  
  
}

void loop() {
  directionControl();
  delay(1000);
  speedControl();
  delay(1000);
}

// to control the direction of the motors
void directionControl() {  
   //set Motors Max Speed from values 0 to 255
  analogWrite(enA, 255);
  analogWrite(enB, 255);
 
  //move forward motor A & B
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(1500);
  
  
    // Turn off motors between changing direction
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay (2000);
  
  //move backward motor A & B
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(1500);
  

  
  
}

// to control the speed of the motors
void speedControl() {
  // Turn on motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
  // Turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  
  
  
}
