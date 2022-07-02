const int A1A = 3;  // define pin 3 for A-1A (speed)
const int A1B = 4;  // define pin 4 for A-1B (direction)

void setup() {
  pinMode(A1A, OUTPUT);     // specify these pins as outputs
  pinMode(A1B, OUTPUT);
  digitalWrite(A1A, LOW);   // start with the motors off 
  digitalWrite(A1B, LOW);
}

void loop() {
  // start the motor 
  digitalWrite(A1A, HIGH);   
  digitalWrite(A1B, LOW);
  delay(3000);              // allow the motor to run for 3 seconds

  // stop the motor
  digitalWrite(A1A, LOW);   // setting both pins LOW stops the motor
  digitalWrite(A1B, LOW);
  delay(2000);              // keep the motor off for 2 seconds

  // start the motor in opposite direction
  digitalWrite(A1A, LOW);  // A1A needs to be LOW to switch direction
  digitalWrite(A1B, HIGH);  
  delay(3000);              // allow the motor to run for 3 seconds
  
 // stop the motor
  digitalWrite(A1A, LOW);   // setting both pins LOW stops the motor
  digitalWrite(A1B, LOW);
  delay(2000);              // keep the motor off for 2 seconds

// start the motor 
  digitalWrite(A1A, HIGH);   
  digitalWrite(A1B, LOW);
  delay(1000);              // allow the motor to run for 1 second

  // stop the motor
  digitalWrite(A1A, LOW);   // setting both pins LOW stops the motor
  digitalWrite(A1B, LOW);
  delay(2000);              // keep the motor off for 2 seconds

 // start the motor in opposite direction
  digitalWrite(A1A, LOW);  // A1A needs to be LOW to switch direction
  digitalWrite(A1B, HIGH);  
  delay(1000);              // allow the motor to run for 1 second
  
  // stop the motor
  digitalWrite(A1A, LOW);   // setting both pins LOW stops the motor
  digitalWrite(A1B, LOW);
  delay(2000);   

}
