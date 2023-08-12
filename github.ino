#include <Keyboard.h>

void setup() {
  // 키보드 초기화
  Keyboard.begin();
  delay(1000); // 초기화에 시간이 조금 걸릴 수 있으므로 대기

  // 윈도우 실행창 열기 (Win + R)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(1000); // 실행 창이 열리는 시간 대기

  // "youtube" 입력 후 엔터
  Keyboard.println("https://www.github.com/201580ag/");
  delay(1000); // 브라우저 실행에 시간이 걸릴 수 있으므로 대기
}

void loop() {
  // 반복 작업 필요 없음
}