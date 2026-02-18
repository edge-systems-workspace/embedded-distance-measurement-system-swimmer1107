/**
 * @file Ultrasonic_Distance_Measurement.ino
 * @brief Distance measurement using HC-SR04 Ultrasonic Sensor.
 *
 * This program measures the distance of an object using an
 * ultrasonic sensor. It sends a 10µs trigger pulse, receives
 * the echo signal, calculates the distance in centimeters,
 * and prints the result to the Serial Monitor.
 *
 * Formula Used:
 * Distance (cm) = (Time × Speed of Sound) / 2
 * Speed of Sound ≈ 0.034 cm/µs
 *
 * @author Pulkit Kulshreshtha
 * @date 18 Feb 2026
 */

// Pin Definitions
int trigPin = 9;   ///< Trigger pin connected to digital pin 9
int echoPin = 10;  ///< Echo pin connected to digital pin 10

long duration;     ///< Stores the time taken for echo to return (in microseconds)
float distance;    ///< Stores calculated distance in centimeters

/**
 * @brief Initializes serial communication and pin modes.
 *
 * Sets:
 * - Trigger pin as OUTPUT
 * - Echo pin as INPUT
 * - Serial communication at 9600 baud rate
 */
void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

/**
 * @brief Continuously measures distance and prints it.
 *
 * Steps:
 * 1. Clears trigger pin
 * 2. Sends 10µs HIGH pulse to trigger ultrasonic burst
 * 3. Measures echo return time using pulseIn()
 * 4. Calculates distance in centimeters
 * 5. Prints distance to Serial Monitor
 */
