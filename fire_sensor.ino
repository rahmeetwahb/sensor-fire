void setup() {
  Serial.begin(9600);

}

void loop() {
  int mark = analogRead(A0);
  if(mark >= 350){
    Serial.println("No Fire");
    delay(500);
  }else{
    Serial.println("there's a Fire");
    delay(500);
  }

}
