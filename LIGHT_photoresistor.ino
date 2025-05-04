int led = 12;
int light = A0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(led,OUTPUT);
  pinMode(buzz,OUTPUT);
  pinMode(pir, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // light Sensor 
 float status =analogRead(light);
 
 Serial.print("light intensity");
 Serial.println(status);
 delay(2000);
 if (status < 700){
  digitalWrite(led, HIGH);
  delay(5000);
  //digitalWrite(led,LOW);

 }



}


