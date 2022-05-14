#include <iostream>
#include<unistd.h>
#include "array.hpp"
#include <curses.h>
struct point {
int x=0,y=0; 

};

int  press () {



int press = getch();
    if (press!=ERR){
    ungetch(press);
    return 1; 
           
     }
    else 
        return 0;

}

void moving (){
point matrix;
initscr();
std :: cout.flush();
noecho();
nodelay(stdscr, TRUE);
scrollok (stdscr,TRUE); 
while (true)

{

    std :: cout.flush();
 
    if (press () ){
        std ::  cout  << getch();    
    refresh ();
    }
    
    
}


}






int main () {
moving();
}
