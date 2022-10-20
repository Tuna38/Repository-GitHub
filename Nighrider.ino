int tasterstatus1 = 0;
int tasterstatus2 = 0;
int tasterstatus3 = 0;
int tasterstatus4 = 0;

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;

int taster1 = 10;
int taster2 = 11;
int taster3 = 12;
int taster4 = 13;




void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);

pinMode(taster1, INPUT);
pinMode(taster2, INPUT);
pinMode(taster3, INPUT);
pinMode(taster4, INPUT);
Serial.begin(9600);
}

void loop() {

  tasterstatus1=digitalRead(taster1);
  if (tasterstatus1 == HIGH)
  //EINMALDRÜCKEN UND ALLE GEHEN AN FÜR EINE SEKUNDE
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);  
  digitalWrite(led5, HIGH);  
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);  
  digitalWrite(led8, HIGH);  
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);  
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);  
  digitalWrite(led8, LOW);   
  
}

  tasterstatus2=digitalRead(taster2);
  if (tasterstatus2 == HIGH)
  //WENN DER TASTER GEDRÜCKT IST WERDEN SIE IN 20MS TAKT GANZ EIN UND AUS GEHEN
{
  digitalWrite(led1, HIGH);
  delay(20);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(20);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(20);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(20);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(20);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(20);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH); 
  delay(20);
  digitalWrite(led7, LOW); 
  digitalWrite(led8, HIGH);
  delay(20);
  digitalWrite(led8, LOW); 

}

  tasterstatus3=digitalRead(taster3);
  if (tasterstatus3 == HIGH)
  //ALLE GEHEN AN UND AUS NACH DER REIENFOLGE
{
  digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(300);
  digitalWrite(led2, HIGH);
  delay(300);
  digitalWrite(led2, LOW);
  delay(300);
  digitalWrite(led3, HIGH);
  delay(300);
  digitalWrite(led3, LOW);
  delay(300);
  digitalWrite(led4, HIGH);
  delay(300);
  digitalWrite(led4, LOW);
  delay(300);
  digitalWrite(led5, HIGH);
  delay(300);
  digitalWrite(led5, LOW);
  delay(300);
  digitalWrite(led6, HIGH);
  delay(300);
  digitalWrite(led6, LOW);
  delay(300);
  digitalWrite(led7, HIGH); 
  delay(300);
  digitalWrite(led7, LOW); 
  delay(300);
  digitalWrite(led8, HIGH);
  delay(300);
  digitalWrite(led8, LOW); 
}

    tasterstatus4=digitalRead(taster4);
  if (tasterstatus4 == HIGH)
  //ERST GEHEN ALLE GRÜNEN LEDS AN DANN AUS, DANN GEHEN ALLE GELBEN LEDS AN, DANN AUS UND AM ENDE GEHEN ALLE ROTEN LEDS AN, DANN AUS 
{
digitalWrite(led1, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led8, HIGH);
delay(1000);
digitalWrite(led1, LOW);
digitalWrite(led4, LOW);
digitalWrite(led8, LOW);
delay(1000);
digitalWrite(led2, HIGH);
digitalWrite(led5, HIGH);
digitalWrite(led7, HIGH);
delay(1000);
digitalWrite(led2, LOW);
digitalWrite(led5, LOW);
digitalWrite(led7, LOW);
delay(1000);
digitalWrite(led3, HIGH);
digitalWrite(led6, HIGH);
delay(1000);
digitalWrite(led3, LOW);
digitalWrite(led6, LOW);
}
Serial.println(tasterstatus1);
Serial.println(tasterstatus2);
Serial.println(tasterstatus3);
Serial.println(tasterstatus4);
Serial.println();
}
