#define TRIG_PIN 9  // Trig pin of ultrasonic sensor
#define ECHO_PIN 10 // Echo pin of ultrasonic sensor
#define BUZZER_PIN 11 // Buzzer pin

void setup() {
    Serial.begin(9600);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    digitalWrite(BUZZER_PIN, LOW);
}

void loop() {
    float distance = getDistance(TRIG_PIN, ECHO_PIN); 
    Serial.println("\nDistance = " + String(distance) + " cm");

    if (distance > 0 && distance <= 30) { // If object detected within 30 cm
        digitalWrite(BUZZER_PIN, HIGH); // Turn on buzzer
    } else {
        digitalWrite(BUZZER_PIN, LOW); // Turn off buzzer
    }

    delay(500); // Small delay for stability
}

float getDistance(int trigPin, int echoPin) {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    long duration = pulseIn(echoPin, HIGH);
    float distance = (duration * 0.0343) / 2; 
    return distance;
}
