const int buzzer = 10; 
const int sw = 2; 
const int x = A0; 
const int y = A1; 
void setup() { 
  Serial.begin(9600); 
  pinMode(y , INPUT); 
  pinMode(x , INPUT); 
} 
 
void loop() { 
  Serial.print("switch : "); 
  Serial.print(digitalRead(sw)); 
  Serial.print("\t\t"); 
  Serial.print("VRx : "); 
  Serial.print(analogRead(x)); 
  Serial.print("\t\t "); 
  Serial.print("VRy : "); 
  Serial.println(analogRead(y)); 
  Serial.print("____"); 
  delay(500); 
   
if (analogRead(y) > 1000) { 
    Serial.println("right"); 
    tone(buzzer , 1000); 
  } 
else if (analogRead(y) < 200) { 
    Serial.println("left"); 
     tone(buzzer , 800); 
  } 
else 
  { 
    noTone(buzzer); 
  } 
 
}
