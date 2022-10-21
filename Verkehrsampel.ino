  int tasterstatus=0;
  int ampelrot=2;
  int ampelgelb=3;
  int ampelgrun=4;
  int fusrot=5;
  int fusgrun=6;
  int taster=10;

void setup()

{
  pinMode(ampelrot, OUTPUT);
  pinMode(ampelgelb, OUTPUT);
  pinMode(ampelgrun, OUTPUT);
  pinMode(fusrot,OUTPUT);
  pinMode(fusgrun, OUTPUT);
  pinMode(taster, INPUT);
}
void loop (){

 

digitalWrite(ampelgrun, HIGH);
digitalWrite(fusrot, HIGH);

tasterstatus=digitalRead(taster);
  if (tasterstatus == HIGH)

{
  digitalWrite(ampelgrun, LOW);
  digitalWrite(ampelgelb, HIGH);
  delay(2000);
  digitalWrite(ampelgelb, LOW);
  digitalWrite(ampelrot, HIGH);
  digitalWrite(fusgrun, HIGH);
  digitalWrite(fusrot, LOW);
  delay(3000);
  digitalWrite(fusgrun, LOW);
}

else

{
digitalWrite(ampelgrun, HIGH);
digitalWrite(ampelrot, LOW);
digitalWrite(fusrot, HIGH);
}
}
