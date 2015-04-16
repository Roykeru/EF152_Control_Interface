int counter = 0;
int lastTime = 0;

void setup()
{
  Serial.begin(9600);
  counter = millis();
 }
    
void loop()
{
  photoResistor();
}

int photoResistor()
{
  counter = millis();
  if (counter >lastTime+10){
  int sensorVal = analogRead(A0);
  Serial.println(sensorVal);
  lastTime = counter;
  }
}
