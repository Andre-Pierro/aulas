const int led = 3;
const int pot = 0;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

int var;

void loop()
{
var = analogRead(pot);
Serial.println(var);
delay(100);

}
