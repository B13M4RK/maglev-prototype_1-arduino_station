#include <Arduino.h>

int signal;

// put function declarations here:
int check_light() {
    signal = analogRead(A15);
    Serial.println(signal);
    return signal;
}

void setup() {
    // put your setup code here, to run once:
    pinMode(2, OUTPUT);
    pinMode(A15, INPUT);
    Serial.begin(9600);
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(2, HIGH);
    delay(100);
    check_light();
    delay(1000);
    digitalWrite(2, LOW);
    delay(100);
    check_light();
    delay(1000);
}