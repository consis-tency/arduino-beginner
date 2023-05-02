void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //baud rate of the serial communication between the board and pc
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

}
//Learning GitHub push
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  Serial.println("Pin13 ON  -- Pin12 OFF"); // Print the line to serial monitor of the pc
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  Serial.println("Pin13 OFF -- Pin12 ON"); // Print the line to serial monitor of the pc
  delay(500);
}
