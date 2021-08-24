#include "DigiKeyboard.h"
#include "DigiKeyboardDe.h"
#define KEY_Tab     43


//This Number defines how many Tabs the script should open!
float numberofTimes = 10;

void setup() {
  delay(100);

  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  delay(200);

    DigiKeyboardDe.print("powershell.exe");

  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

  delay(500);

  DigiKeyboardDe.print("Function Set-Speaker($Volume){$wshShell = new-object -com wscript.shell;1..50 | % {$wshShell.SendKeys([char]174)};1..$Volume | % {$wshShell.SendKeys([char]175)}}");

  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

  delay(10);

  DigiKeyboardDe.print("Set-Speaker -Volume 50");

  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

    delay(200);
  
  for(int i = 0; i < numberofTimes; i++)
  {   

    //Add your Link here!
    
    DigiKeyboardDe.print("start chrome.exe YOUR LINK HERE");

    DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

    delay(500);

      DigiKeyboardDe.sendKeyStroke(KEY_Tab, MOD_ALT_LEFT);

      delay(500);
  }
}


void loop() {



}
