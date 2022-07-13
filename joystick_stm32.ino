int JoyStick_X = PA2; //x
int JoyStick_Y = PA3; //y
int JoyStick_SW = PA4; //key
void setup()
{
  //pinMode(JoyStick_SW, INPUT);
  pinMode(JoyStick_SW, INPUT_PULLUP);
  Serial.begin(9600); // 9600 bps
}
void loop()
{
  int x, y, sw;
  x = analogRead(JoyStick_X);
  y = analogRead(JoyStick_Y);
  sw = digitalRead(JoyStick_SW);
  Serial.print("X : ");
  Serial.println(x);
  Serial.print("Y : ");
  Serial.println(y);
  Serial.print("SWITCH : ");
  Serial.println(sw);
  delay(100);
}
