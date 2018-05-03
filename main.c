#include <stdio.h>
#include <psp2/ctrl.h>
#include <psp2/power.h>
#include "common/debugScreen.h"

int main(int argc, const char *argv[]){
    psvDebugScreenInit();
    psvDebugScreenPrintf("%s\n", "Press X or O to Reboot PSV.");
    psvDebugScreenPrintf("%s\n", "Press R+O or R+X to Shutdown PSV.");
    sceCtrlSetSamplingMode(SCE_CTRL_MODE_DIGITAL);
    SceCtrlData ctrl;
    
    while(1){
        sceCtrlPeekBufferPositive(0, &ctrl, 1);
        if (ctrl.buttons == SCE_CTRL_CIRCLE) {
            psvDebugScreenPrintf("%s\n", "Reboot PSV...");
            scePowerRequestColdReset();
            while(1);
        }
        if (ctrl.buttons == SCE_CTRL_CROSS ) {
            psvDebugScreenPrintf("%s\n", "Reboot PSV...");
            scePowerRequestColdReset();
            while(1);
        }
        if (ctrl.buttons == (SCE_CTRL_CIRCLE | SCE_CTRL_RTRIGGER ) ) {
            psvDebugScreenPrintf("%s\n", "ShtuDown PSV...");
            scePowerRequestStandby();
            while(1);
        }
        if (ctrl.buttons == (SCE_CTRL_CROSS  | SCE_CTRL_RTRIGGER ) ) {
            psvDebugScreenPrintf("%s\n", "ShtuDown PSV...");
            scePowerRequestStandby();
            while(1);
        }
    }
}
