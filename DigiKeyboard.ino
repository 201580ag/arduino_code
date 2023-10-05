#include <DigiKeyboard.h>

void setup() {
  // 초기화 코드
  DigiKeyboard.delay(2000); // 시작 후 2초 대기
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Win + R 누르기
  DigiKeyboard.delay(100); // 잠시 대기
  DigiKeyboard.print("https://github.com/201580ag"); // 웹 주소 입력
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Enter 키 입력
}

void loop() {
  // 루프 코드
}
