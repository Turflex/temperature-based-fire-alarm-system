#include <DHT.h>

#define DHTPIN 10         // DHT22 data pin
#define DHTTYPE DHT22

#define BUZZER_PIN 12    // Buzzer pin

DHT dht(DHTPIN, DHTTYPE);

const float TEMP_LIMIT = 40.0;   // Alarm temperature (°C)

void setup() {
  Serial.begin(9600);

  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT22!");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C");

  Serial.print("   Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  if (temperature >= TEMP_LIMIT) {
    tone(BUZZER_PIN, 1000);   // Alarm ON
  } else {
    noTone(BUZZER_PIN);       // Alarm OFF
  }

  delay(2000);
}