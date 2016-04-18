int LDR = 2;
int LDRValue = 0;
int Light_s = 30;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 pinMode (8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  LDRValue=analogRead(LDR);
  Serial.println(LDRValue);
  delay(100);
  if(LDRValue <  Light_s )
  {
      digitalWrite (8, HIGH); // open the laser head
  }
   else
   {
      digitalWrite (8, LOW); // turn off the laser head
   }
}
