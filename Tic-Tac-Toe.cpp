//Tic-Tac-Toe Game
#include<iostream>
#include<string>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};//multi dimensional array
int row,col,ch;//declaration of rows,columns,choice
char chance='x';
bool draw=false;
void show_board()//displays current state of board
{
    cout<<"Player - 1 [x]\t Player - 2 [o]\n\n";//Game board layout
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  | "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  | "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  | "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
}
//getting players input and updating board
void player_chance()
{
    if(chance=='x')
    {
      cout<<"\n\tplayer - 1 [x] turn : ";
    }
    else if(chance=='o'){
     cout<<"\n\tplayer  - 2 [o] turn : ";//updating the board based on choice
    }
    cin>>ch;//input of choice
    //using switch to know which row and column will update
    switch(ch)
    {
        case 1:row=0;col=0;
        break;
        case 2:row=0;col=1;
        break;
        case 3:row=0;col=2;
        break;
        case 4:row=1;col=0;
        break;
        case 5:row=1;col=1;
        break;
        case 6:row=1;col=2;
        break;
        case 7:row=2;col=0;
        break;
        case 8:row=2;col=1;
        break;
        case 9:row=2;col=2;
        break;
        default:
        cout<<"Sry not valid move\n";

    }
    if(chance=='x' && board[row][col]!='x' && board[row][col]!='o')//updating x
    {
        board[row][col]='x';
        chance='o';
    }
    else if(chance=='o' && board[row][col]!='x' && board[row][col]!='o')//updating o
    {
        board[row][col]='o';
        chance='x';
    }
    else
    {
        cout<<"This Box is already filled!\n Please choose other one!!\n\n";
        player_chance();//when input is filled

    }
    show_board();
}
//function to get game status
bool gamecomplete(){//checking win for rows and columns
    
    for(int i=0;i<3;i++)
    if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i]&& board[0][i]==board[2][i])
return false;
    if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1] && board[0][2]==board[2][0])
return false;//check game 
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
if(board[i][j]!='x' &&board[i][j]!='o')
return true;
draw=true;
return false;//check if game is already draw
}
int main()
{
    cout<<"\t\t\tT I C K --T A C--T O E--G A M E\t\t\t";
    cout<<"\n\t\t\tTHERE ARE 2 PLAYERS\n\t\t\t";
    while(gamecomplete()){
        show_board();
        player_chance();
        gamecomplete();
    }
    if(chance=='x' && draw==false){
        cout<<"\n\nCongratulations!!Player with 'o' won the game";
    }
    else if(chance=='o' && draw==false){
        cout<<"\n\nCongratulations!!Player with 'x' won the game";
    }
    else{
        cout<<"\n\nGame is draw!!\n\n";
    }
    return 0;
}



















    



 
















}
