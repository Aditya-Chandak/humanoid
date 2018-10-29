const int trigPin1 = 2;
const int echoPin1 = 3;


long duration1;
int distanceCm1;




void setup() { // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT);

Serial.begin(9600);



}
void loop() {
 
digitalWrite(trigPin1, LOW);
delayMicroseconds(2);
digitalWrite(trigPin1, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin1, LOW);
duration1 = pulseIn(echoPin1, HIGH);
distanceCm1= duration1*0.034/2;

  Serial.println(distanceCm1);

  delay(100);




}
