//#include <iostream>
#include <unistd.h>
#include "drawing.hpp"
#include <curses.h>


int  press () {


//std :: cout.flush();
int press = getch();
//std :: cout.flush();
    if (press!=ERR){
    ungetch(press); // pushes the buttom to the head of the queue of button>
    return 1; 

     }
    else 
        return 0;

}
void moving (){ 
initscr();
//std :: cout.flush();
//noecho();
nodelay(stdscr, TRUE);
scrollok (stdscr,TRUE);
mat.temp=nums[mat.y][mat.x];//saves the init value of [0][0] for moving  
while (true)

{

//    std :: cout.flush();
  

    if (press () ){ // i guess it checks if it was presses a buttom
//      nums [mat.y][mat.y]=0; 
//      std :: cout.flush();
        int input = getch () ;
//std :: cout.flush();
switch (input) {// to check the input to move 
            case 119 ://w   
  //                  std :: cout << " up\n "<<std::flush ;
                        nums [mat.y][mat.x]=mat.temp ; // returns the past >
                     --mat.y; // movea down 
                    if (mat.y == -1) // checks if it's at the end of the bo>
{                    mat.y = 8;}
                    mat.temp = nums [mat.y][mat.x]; // saving the new squar>
                        nums[mat.y][mat.x]=0; // makes the value of it 0 to>
                    break; 
            case 97 : //a 
    //                std :: cout << " left ";// << std :: endl ;
                        nums [mat.y][mat.x]=mat.temp ;
                    mat.x--;
                    if (mat.x==-1)
                       mat.x = 8 ;
                      mat.temp = nums [mat.y][mat.x];
                        nums[mat.y][mat.x]=0;                     
                        break;
            case 115: //s 
      //              std :: cout << "down ";// << std :: endl ;
                        nums [mat.y][mat.x]=mat.temp ;
                    mat.y++;
                    if (mat.y==9)
                        mat.y= 0; 
                         mat.temp = nums [mat.y][mat.x];
                        nums[mat.y][mat.x]=0;            
                    break; 
            case 100: //d 
        //           std :: cout << " right " << std ::endl ;
                        nums [mat.y][mat.x]=mat.temp ;
                    mat.x++;
                    if (mat.x == 9)
                        mat.x=0; 
                  mat.temp = nums [mat.y][mat.x];
                        nums[mat.y][mat.x]=0;   
                    break;
            case 49 : 
                    nums [mat.y][mat.x]=mat.temp=1;//change mat.temp too be>
                    break;
           case 50 :
                    nums [mat.y][mat.x]=mat.temp=2;
                    break;
            case 51 :
                    nums [mat.y][mat.x]=mat.temp=3;
                    break;
            case 52 :
                    nums [mat.y][mat.x]=mat.temp=4;
                    break;
            case 53 :
                    nums [mat.y][mat.x]=mat.temp=5;
                    break;
            case 54 :
                    nums [mat.y][mat.x]=mat.temp=6;
                    break;
            case 55 :
                    nums [mat.y][mat.x]=mat.temp=7;
                    break;
            case 56 :
                    nums [mat.y][mat.x]=mat.temp=8;
                    break;
            case 57 :
                    nums [mat.y][mat.x]=mat.temp=9;
                    break;
            default :
                    nums [mat.y][mat.x] = mat.temp; 


                }
       if (input<=119&&input>=97 ) // to return it the way it was          >
        {
//              nums [mat.y][mat.x]= mat.;
//      std ::cout <<" wrks " ;
}
//      std :: cout << nums [mat.y][mat.x];//<<std:: endl ;                
//        refresh ();
    }
    
    
}
}
