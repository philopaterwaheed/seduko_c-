#include <ctime>

int  nums [9][9] = {/*arrat repre the game set */

{6,2,3,4,5,6,7,8,9},
{1,2,3,4,5,6,7,8,9},
{1,2,3,4,5,6,7,8,9},
{5,2,3,4,5,6,7,8,9},
{1,2,3,4,5,6,7,8,9},
{1,2,3,4,5,6,7,8,9},
{1,2,3,4,5,6,7,8,9},
{1,2,3,4,5,6,7,8,9},
{7,2,3,4,5,6,7,8,9}

};
struct point {int x=0,y=0,temp; };/* a struct to handle the points of the array */
point mat ; /* to repre any point of the array*/
class pregame : public point  {/* handles the pregame prepairs */
public:
        pregame() { /* a constructor that excutes before the game */
                srand( time(NULL));
                for (int b=0 ; b<9 ; b++) /* creates random  game set */

                        {
                                for ( int p = 0 ;  p<=9 ;p++)
                                {
                                
                                nums[b][p]=1+rand()%9;
                                }
                        }





                }       

        };
pregame pregame;
