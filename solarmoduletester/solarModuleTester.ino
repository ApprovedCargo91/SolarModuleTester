#define led 13
#define solarModule A0
double sum = 0;
float voltage = 0.0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  for(int i=0; i<2; i++){
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
  for(int j=0; j<100; j++){
    sum+=analogRead(A0);
    Serial.println(sum);
    delay(10);
  }
  voltage = ((float)sum / 100.0 * 5.00) / 1024.0;
  Serial.print("The voltage is ");
  Serial.print(voltage);
  Serial.println(" volts");
  digitalWrite(led,LOW);
}

void loop() {
  // There is no loop!
}
