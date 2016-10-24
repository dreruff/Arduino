/*
  Assignment 4 
  Spelling my first name, Gregory, in ASCII code using the six least signifigent bits.
  By: Greg Ruffin & Cesar Martin
 */
 
int a = 13;
int b = 11;
int c = 9;
int d = 7;
int e = 5;
int f = 3;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(d, HIGH); // G
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  delay(1000); 
  digitalWrite(d, LOW);  // r
  digitalWrite(a, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  delay(1000); 
  digitalWrite(b, LOW);  // e
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  delay(1000);  
  digitalWrite(e, HIGH); // g
  delay(1000);  
  digitalWrite(c, HIGH); // o
  delay(1000);  
  digitalWrite(f, LOW);  // r
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  delay(1000);  
  digitalWrite(c, HIGH); // y
  digitalWrite(f, HIGH);
  digitalWrite(e, LOW);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
  delay(1000);
}
