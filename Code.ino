int sig=2;
int LED=13,sr,c;
float d,Di;
void setup() {
  Serial.begin(9600);
  pinMode(sig,OUTPUT);
  pinMode(sig,INPUT);
  pinMode(LED,OUTPUT);

}

void loop() {
  digitalWrite(sig,HIGH);
  d=pulseIn(sig,HIGH);
  Di=(d*.034)/2;a
  if(Di>1)
  {
    c = analogRead(A0);
    if(c>500)
    {
      digitalWrite(LED,HIGH);
      delay(1000);
      digitalWrite(LED,LOW);
      delay(1000);
    }
    else
    {
      digitalWrite(LED,HIGH);
      delay(2000);
      digitalWrite(LED,LOW);
      delay(2000);
    }
  }
}
