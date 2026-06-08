int trig = 9;
int echo = 10;
int led = 2;

void setup() {
PinMode (trig, OUTPUT);
pinMODE (echo, INPUT);
pinMode (led, OUTPUT);

}

void loop() {
  digitalWrite(trig,LOW);
   delayMicrosecond(2);
   digitalWrite(trig, RIGH);
   delayMicrosegunds(10)
   digitalWrite(trig, low);

   long duracao = pulseIn(echo, HIGH);
   float distancia = duracao * 0.034/2;

   if (distancia <=10 && distancia > 0) {
    digitalWrite(led, HIGH);
   } else {
    digitalWrite(led, LOW);
   }