void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    char command = Serial.read();

    if (command =='1') {
      digitalWrite(13, HIGH);
    } else if (command =='0') {
      digitalWrite(13, LOW);
    }
  }
}
