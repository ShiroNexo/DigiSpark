#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}
void loop() {
  DigiMouse.moveY(-50);
  DigiMouse.moveX(50);
  DigiMouse.delay(1);

}
