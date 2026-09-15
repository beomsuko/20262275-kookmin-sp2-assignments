// 파일명: 05_practice_2.ino

const int LED_PIN = 7;

void setup() {
  // 7번 핀을 출력 모드로 설정
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // 1. 처음 1초 동안 LED 켜기 (Active LOW: LOW일 때 켜짐)
  digitalWrite(LED_PIN, LOW);
  delay(1000);

  // 2. 다음 1초 동안 LED 5회 깜빡이기
  // 1초(1000ms) 동안 5회 깜빡이려면 1회당 200ms (ON 100ms, OFF 100ms)
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, LOW);   // 켜짐
    delay(100);
    digitalWrite(LED_PIN, HIGH);  // 꺼짐
    delay(100);
  }

  // 3. LED를 끄고 무한루프 상태로 종료
  digitalWrite(LED_PIN, HIGH);    // LED 끄기
  while (1) {
    // 무한 루프로 정지
  }
}
