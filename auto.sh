#!/bin/bash

while true
do
    i=0
    x=$(((RANDOM%7)+1))
    randdirec=$((RANDOM%4))
    dance=$((RANDOM%200))
    g=$((RANDOM%100))
    flag=0

    if [ $dance -gt 198 ]
    then
        xdotool key z
        sleep 2
    fi

    if [ $g -gt 95 ]
    then
        xdotool keydown g
        flag=1
    fi

    while [ $i -lt $x ] 
    do
            case $randdirec in
                0)
                    #go up
                    xdotool key w
                ;;

                1)
                    #go down
                    xdotool key s
                ;;

                2)
                    #go left
                    xdotool key a
                ;;


                3)
                    #go right
                    xdotool key d
                ;;

                *)
                ;;
            esac

            #wait 0.01 seconds until the next iteration 
            sleep 0.01
            i=$((i+1))
    done
    if [ $flag == 1 ]
    then
        xdotool keyup g
        flag=0
    fi

done
