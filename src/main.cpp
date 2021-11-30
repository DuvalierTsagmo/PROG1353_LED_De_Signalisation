/*
  Titre      : feu rouge
  Auteur     : Duvalier Tsagmo
  Date       : 29/11/2021
  Description: un programme qui simule un feu rouge
  Version    : 0.0.1
*/

#include <Arduino.h>

//Declararion des variables
int ledRed = 13;
int ledYello = 12;
int ledGreen = 8;
int ledRed2 = 11;
int ledYello2 = 10;
int ledGreen2 = 9;

//
void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledYello, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed2, OUTPUT);
  pinMode(ledYello2, OUTPUT);
  pinMode(ledGreen2, OUTPUT);
}

void loop()
{
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYello, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed2, HIGH);
  digitalWrite(ledYello2, LOW);
  digitalWrite(ledGreen2, LOW);
  delay(3000); // Wait for 5000 millisecond(s)

  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYello, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed2, LOW);
  digitalWrite(ledYello2, LOW);
  digitalWrite(ledGreen2, HIGH);
  delay(2000); // Wait for 5000 millisecond(s)

  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYello, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed2, LOW);
  digitalWrite(ledYello2, HIGH);
  digitalWrite(ledGreen2, LOW);
  delay(2000); // Wait for 5000 millisecond(s)

  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYello, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed2, HIGH);
  digitalWrite(ledYello2, LOW);
  digitalWrite(ledGreen2, LOW);
  delay(3000); // Wait for 5000 millisecond(s)

  digitalWrite(ledRed, LOW);
  digitalWrite(ledYello, LOW);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledRed2, HIGH);
  digitalWrite(ledYello2, LOW);
  digitalWrite(ledGreen2, LOW);
  delay(2000); // Wait for 5000 millisecond(s)

  digitalWrite(ledRed, LOW);
  digitalWrite(ledYello, HIGH);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed2, HIGH);
  digitalWrite(ledYello2, LOW);
  digitalWrite(ledGreen2, LOW);
  delay(2000); // Wait for 5000 millisecond(s)

  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYello, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed2, HIGH);
  digitalWrite(ledYello2, LOW);
  digitalWrite(ledGreen2, LOW);
  delay(2000); // Wait for 5000 millisecond(s)
}