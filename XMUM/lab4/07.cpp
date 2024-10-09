#include<iostream>
using std::cout;
using std::endl;

int main ()
{
    for (int i = 1; i <= 5; i++) 
    {
        /*
        number of blocks IN THIS CASE 5 BLOCKS
        ****
        ****
        ****
        */
        for (int j = 1; j <= 3; j++) 
        {
             /*
             NUMBER OF LINES IN EACH BLOCK
             */
            for (int k = 1; k <= 4; k++)
                cout << '*';
               /*
                number of stars in each horizental line in the block IN THIS CASE 4 STARS
                **** 
                */
            cout << endl;
        }
    cout << endl;
    }


    return 0;
}