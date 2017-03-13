float sensorValue;
float sensorVoltage;
void setup() 
{
 Serial.begin(9600);
}

void loop() {
  float Vin;
  float R1;
  int i;

 for (i=0;i<=5;i++)
 {
 sensorValue = 0.6* sensorValue + 0.4* analogRead(A1);
 }
 sensorVoltage = sensorValue * 5 / 1024;
 R1 = sensorVoltage * (1082000) / 5;
 Serial.println(sensorValue);
 Serial.println(sensorVoltage);
 Serial.println (R1);
 delay(500);
 
}
