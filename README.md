# Reboot-PSV
A tiny tool to reboot and shutdown PSV.

This is my trial project, just only for reboot and shtudown your PSV.

not any powerful function you want.

# How to Build
Install Vita SDK at first. https://vitasdk.org

Download source code and run:

midkr build && cd build;

cmake .. && make

# Install
Copy Restart-Halt-vita.vpk to ux0:/data on your ways, then open Vitashell, find and install ux0:/data/Restart-Halt-vita.vpk

# How to Use
Press X or O to Reboot PSV.

Press R+O or R+X to Shutdown PSV.

# Reference
[https://github.com/vitasdk/samples/tree/master/common](https://github.com/vitasdk/samples/tree/master/common)

[https://github.com/devnoname120/vita-restart/](https://github.com/devnoname120/vita-restart/)

[https://github.com/TheOfficialFloW/VitaShell/blob/840c604b9d0be3fe205612206709845bf59e0db6/settings.c](https://github.com/TheOfficialFloW/VitaShell/blob/840c604b9d0be3fe205612206709845bf59e0db6/settings.c)
