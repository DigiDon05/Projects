#include <LiquidCrystal.h>

// LCD pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define SENSOR A0
#define BUZZER 8

#define BLUE 6
#define YELLOW 7
#define RED 9

int gasValue;

void setup() {
  lcd.begin(16, 2);

  pinMode(BUZZER, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);

  Serial.begin(9600);

  lcd.print("Gas Detector");
  delay(2000);
  lcd.clear();
}

void loop() {

  gasValue = analogRead(SENSOR);
  Serial.println(gasValue);

  // turn everything OFF first
  digitalWrite(BLUE, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
  digitalWrite(BUZZER, LOW);

  lcd.clear();

  // Line 1 → Gas value
  lcd.setCursor(0, 0);
  lcd.print("Gas: ");
  lcd.print(gasValue);

  // Line 2 → Status
  lcd.setCursor(0, 1);

  if (gasValue < 300) {
    lcd.print("SAFE");
    digitalWrite(BLUE, HIGH);
  }

  else if (gasValue < 450) {
    lcd.print("MEDIUM");
    digitalWrite(YELLOW, HIGH);
  }

  else {
    lcd.print("DANGER!");
    digitalWrite(RED, HIGH);
    digitalWrite(BUZZER, HIGH);
  }

  delay(500);
}
