int inPin = A0;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(inPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(inPin);
  Serial.println(val);
  delay(250);
  if (val <= 512){
    Serial.println("on");
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else{
    Serial.println("off");
    digitalWrite(LED_BUILTIN, LOW);
  }
}
