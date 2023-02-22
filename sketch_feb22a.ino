int GreenLed=10;
int YellowLed=11;
int RedLed=12;

void setup() {
  // put your setup code here, to run once:
pinMode(GreenLed, OUTPUT);
pinMode(YellowLed, OUTPUT);
pinMode(RedLed, OUTPUT);
}

digitalWrite(GreenLed,LOW);
digitalWrite(YellowLed,LOW);
digitalWrite(RedLed,LOW);
 
Serial.begin(9600);
void loop() {
  // put your main code here, to run repeatedly:
  //yeild mode
digitalWrite(GreenLed,LOW);
digitalWrite(YellowLed,HIGH);
digitalWrite(RedLed,LOW);

Serial.println("Light mode: Yeild");
delay(1000);

//go mode

digitalWrite(GreenLed,HIGH);
digitalWrite(YellowLed,LOW);
digitalWrite(RedLed,LOW);

Serial.println("Light mode: Go");
delay(3000);

//stop mode

digitalWrite(GreenLed,LOW);
digitalWrite(YellowLed,LOW);
digitalWrite(RedLed,HIGH);

Serial.println("Light mode: Stop");
delay(4000);

}
