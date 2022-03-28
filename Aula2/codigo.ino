const int led = 3;
const int pot = 0;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

int var;
int var2;

void loop()
{
var = analogRead(pot);
var2 = map(var, 0, 1023, 0, 255);
analogWrite(led, var2);
Serial.println("Pot: ");
Serial.println(var);
Serial.print("Map: ");
Serial.print(var2);
Serial.print("");
delay(100);

}
