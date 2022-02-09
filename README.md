# Shell Script that automates GatherTown movements using xdotool

[auto.sh](./shellscript_gathertown/auto.sh) inside [shellscript_gathertown](./shellscript_gathertown) contains the shell script that allows for randomised movements on GatherTown by using xdotool.

On Ubuntu, install xdotool using the following,


`sudo apt install xdotool`


Give execution permission to the script,


`chmod +x auto.sh`

Execute the script,


`./auto.sh`

The details can be found on my [first blog post](https://dev.to/lambdamamba/using-xdotool-to-randomise-gathertown-avatar-movements-2p51).

# BadUSB that injects keystrokes and automates GatherTown movements

The [BadUSB_gathertown](./BadUSB_gathertown) folder contains the .ino Arduino files used for the project to automate GatherTown movements using BadUSB. The [4_autogathertown.ino](./BadUSB_gathertown/4_autogathertown.ino) is the .ino file that automates the GatherTown movements. The details on how to setup the Arduino circuitry and the program can be found on my [second blog post](https://dev.to/lambdamamba/a-badusb-that-isnt-so-bad-making-a-keystroke-injector-in-arduino-that-automates-gathertown-movements-41jm).
