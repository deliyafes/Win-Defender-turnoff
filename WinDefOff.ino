#define kbd_tr_tr
#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("Windows Güvenli");
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(500);         
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
}
