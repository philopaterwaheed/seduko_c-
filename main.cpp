#include "drawing.hpp"
#include <thread>
#include "array.hpp"
//#include "moving.cpp"
#include <iostream>
int main (){
std::thread d (draw);
//std ::thread m (moving);

        d.join();
//      m.join();  

     
    }
