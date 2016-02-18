// Adam Sinclair, written Feb 12 2016
// Information from: http://garagelab.com/profiles/blogs/tutorial-flex-sensor-with-arduino

// The purpose of this program is to test out a single flex sensor.
// I want to see what values are computed during different angles of the sensor.

int sensor, degrees;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // read voltage from voltage divider (sensor + resistor)
  sensor = analogRead(0);
  
  // convert voltage-reading to inches
  // 1st two numbers are values for straight(768) and bent (853)
  // 2nd two numbers are degree readings we'll map to (0, 90)
  degrees = map(sensor, 768, 853, 0, 90);
  
  
  // print out results in degrees
  Serial.print("Degrees: ");
  Serial.println(degrees, DEC);

  delay(100);  
}

