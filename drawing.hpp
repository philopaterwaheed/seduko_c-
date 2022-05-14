# pragma once
#include <unistd.h>
#include <iostream>
#include "array.hpp" 
void draw () {
while (true){
for (int i = 0 ; i <= 9; i ++)
   
    std :: cout << "-";

   std :: cout <<std::endl;
for (int i =0 ; i< 9 ;i++)
        {
            for (int j= 0; j<=18;j++)
                {
 
                 if (j %2==0 )
                        std :: cout<<"|";
                    else 
                       std :: cout <<numbers[i][j/2];



                }
        
std::cout<<std::endl;
}
for (int i =0 ;i <=9;i++)
    std:: cout << "-"; 



sleep(10);
//std :: system("clear");

}
}
