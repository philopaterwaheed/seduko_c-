#include <thread>
//#include "array.hpp"
//#include "moving.cpp"
#include <iostream>
void moving ();
void draw ();
int main (){
std::thread d (draw);   // prints 9*9 square and btween every line an ele from a 2d array
std ::thread m (moving); // allow the user to move throw the arraay to change it and play

        d.join();
      m.join();  

     
    }
