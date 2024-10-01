#include<iostream>
void draw (char *space);
void playerMove(char *space,char player);
void computerMove(char*space ,char computer);
bool checkEmpty(char *space );
int WhoIsTheWinner(char*space ,char computer,char player);

int main()
{   
    bool running=true;
    char space[9] =
    {
        ' ', 
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' ',
        ' '
    };
    char player,computer;
    player='X';
    computer='O';
    while(running){
        draw(space);
        playerMove(space,player);
        if (WhoIsTheWinner(space, computer, player) == 1) {
            draw(space);
            std::cout << "X Wins! \n";
            running = false;
            break;
        }
        
        if (!checkEmpty(space)) {
            draw(space);
            std::cout << "It's a draw!\n";
            running = false;
            break;
        }

        computerMove(space,computer);
        draw(space);
        if (WhoIsTheWinner(space, computer, player) == 2) {
            std::cout << "O Wins! \n";
            running = false;
            break;
        }

        if (!checkEmpty(space)) {
            std::cout << "It's a draw!\n";
            running = false;
            break;
        }

        

    }

    
    return 0;
}

void draw(char *space) {
    std::cout << "\n\n";
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << space[0] << "  |  " << space[1] << "  |  " << space[2] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << space[3] << "  |  " << space[4] << "  |  " << space[5] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << space[6] << "  |  " << space[7] << "  |  " << space[8] << "  " << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "\n\n";
}

void playerMove(char *space,char player){
int move;
do{

std::cout<<"choose number between 1-9 : ";
std::cin>>move;
if (space[move-1]==' '){
    space[move-1]=player;
    break;
}
}while((move>=9||move<=0)|| space[move-1]!=' ');




}

void computerMove(char*space ,char computer){
int move;
     srand(time(NULL));
     do{

     move =rand()%9;
    if (space[move]==' '){
    space[move]=computer;
    break;
}
     }while((move>=9||move<=0)|| space[move]!=' ');
}

bool checkEmpty(char *space )
{
    for(int i =0; i<9;i++){
        if (space[i]==' ')return true;

    }
    return false;

}

int WhoIsTheWinner(char*space ,char computer,char player)
{

 if (
        (space[0] == player && space[1] == player && space[2] == player) ||
        (space[3] == player && space[4] == player && space[5] == player) ||
        (space[6] == player && space[7] == player && space[8] == player) ||
        (space[0] == player && space[3] == player && space[6] == player) ||
        (space[1] == player && space[4] == player && space[7] == player) ||
        (space[2] == player && space[5] == player && space[8] == player) ||
        (space[0] == player && space[4] == player && space[8] == player) ||  
        (space[2] == player && space[4] == player && space[6] == player)     
    ) {
      
        return 1;
}
if (
        (space[0] == computer && space[1] == computer && space[2] == computer) ||  // Row 1
        (space[3] == computer && space[4] == computer && space[5] == computer) ||  // Row 2
        (space[6] == computer && space[7] == computer && space[8] == computer) ||  // Row 3
        (space[0] == computer && space[3] == computer && space[6] == computer) ||  // Column 1
        (space[1] == computer && space[4] == computer && space[7] == computer) ||  // Column 2
        (space[2] == computer && space[5] == computer && space[8] == computer) ||  // Column 3
        (space[0] == computer && space[4] == computer && space[8] == computer) ||  // Diagonal 1
        (space[2] == computer && space[4] == computer && space[6] == computer)     // Diagonal 2
    ) {
        return 2;
    }
    else{
        return 0;
    }
}

