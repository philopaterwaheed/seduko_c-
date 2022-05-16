#include <thread>
//#include "array.hpp"
//#include "moving.cpp"
#include <iostream>
void moving ();
void draw ();
int main (){
std::thread d (draw);
std ::thread m (moving);

        d.join();
      m.join();  

     
    }
