//Number guessing game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
int randomnum,guess,number_of_tries=0;
srand(time(0));
randomnum=rand()%100+1;//random number generation
cout<<"\t\tNUMBER GUESSING GAME\n\n";
do
{
    cout<<"enter your guess number between 1 to 100:";
    cin>>guess;
    //taking input from user
    number_of_tries++;
    //checking whether guess number is higher or lower or equal to randomnum
if(guess>randomnum)
{
    cout<<"Sry Your Guess is Too High!!\nTry again\n\n";
}
else if(guess<randomnum)
{
    cout<<"Sry your Guess is Too Low!!Try again\n\n";
}
else
{
    cout<<"\nYour Guess is Correct! \nWell done you have guessed it in "<<number_of_tries<<" guesses!!\n";
}
}
while(guess!=randomnum);
return 0;
}

