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
