//# pragma once
#include <unistd.h>
#include <iostream>
#include "array.hpp"
#include <curses.h>// just for the printw 
void draw () {
while (true){
for (int i = 0 ; i <= 9; i ++)
   
    printw( "-");

   printw("\n");
for (int i =0 ; i< 9 ;i++)
        {
            for (int j= 0; j<=18;j++)
                {
 
                 if (j %2==0 )
                       printw("|");
                    else 
                      printw("%d" ,nums[i][j/2]);



                }
        
printw("\n");
}
for (int i =0 ;i <=9;i++)
    printw( "-"); 


sleep(1);
clear();

}
}
