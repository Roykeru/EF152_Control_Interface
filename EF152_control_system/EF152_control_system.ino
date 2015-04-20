int counter = 0;
int lastTime = 0;

void setup()
{
  Serial.begin(9600);
  counter = millis();
 }
    
void loop()
{
  counter = millis();
  if (counter >lastTime+10)
  {
    photoResistor();
    moistureSensor();
    
    lastTime = counter;
  }
}

int photoResistor()
{
  int sensorVal = analogRead(A0);
  Serial.println(sensorVal);
}

bool moistureSensor()
{
  moisture_val = analogRead(moistureSensor);
  Serial.println("Moisture sensor reads: ");
  Serial.println("moisture_val");
  
  if (moisture_val >= 950)
  {
    Serial.println("Moisture sensor disconnected)
  }
  else if (moisture_val >= 900)
  {
    Serial.printlin("Soil is above the correct moisture level")
  }
  else if (moisture_val >= 850)
  {
    Seral.println("Soil is at the correct moisture level");
  }
  else if (moisture_val >= 800)
  {
    Serial.println("Soil is below the correct moisture level");
  }
}

