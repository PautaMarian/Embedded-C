    /*  Arduino DC Motor Control - PWM | H-Bridge | L298N
             Example 02 - Arduino Robot Car Control
        by Dejan Nedelkovski, www.HowToMechatronics.com
    */
    #define enA 9
    #define in1 5
    #define in2 4
    #define enB 10
    #define in3 7
    #define in4 6
    int motorSpeedA = 0;
    int motorSpeedB = 0;
    const int trigpin=12;
    const int echopin=13;
    long duration;
    int distance;
    void setup() {
      pinMode(enA, OUTPUT);
      pinMode(enB, OUTPUT);
      pinMode(in1, OUTPUT);
      pinMode(in2, OUTPUT);
      pinMode(in3, OUTPUT);
      pinMode(in4, OUTPUT);
      pinMode(trigpin,OUTPUT);
      pinMode(echopin,INPUT);
      Serial.begin(9600);
    }
    void loop() {
      // Clears the trigPin
digitalWrite(trigpin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echopin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
if(distance>=10)
{
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
      motorSpeedA=200;
      motorSpeedB=200;
      analogWrite(enA, motorSpeedA); // Send PWM signal to motor A
      analogWrite(enB, motorSpeedB); // Send PWM signal to motor B
}
else
{
  digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
      motorSpeedA=200;
      motorSpeedB=0;
      analogWrite(enA, motorSpeedA); // Send PWM signal to motor A
      analogWrite(enB, motorSpeedB); // Send PWM signal to motor B
}
Serial.print("Distance: ");
Serial.println(distance);
      
    }
