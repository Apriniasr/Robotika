#define LED 2

void setup() {
  //SET PIN MODE
  pinMode(LED,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  delay(500);
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
  // put your main code here, to run repeatedly:

}