#define led 13
#define solarModule A0
int sum = 0;

void setup() {
  pinMode(led,OUTPUT);
  for(int i=0; i<4; i++){
    digitalWrite(led,HIGH);
    delay(500);
    digitalWrite(led,LOW);
    delay(500);
  }
  for(int i=0; i<4; i++){
    digitalWrite(led,HIGH);
    delay(250);
    digitalWrite(led,LOW);
    delay(250);
  }
  digitalWrite(led,HIGH);
  for(int j=0; j<1000; j++){
    sum+=analogRead(A0);
    delay(1);
  }
  sum/=100;
  sum*=(5.0/1024.0);
  Serial.print("The voltage is ");
  Serial.print(sum);
  Serial.println(" volts");
  digitalWrite(led,LOW);
}

void loop() {
  // There is no loop!
}
