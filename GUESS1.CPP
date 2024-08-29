#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

void main()
{
 srand(time(0));
 int Guessno = rand() % 100 + 1;
 int guess;
 int attempts = 0;
 clrscr();
 cout<<"Guess a number between 1 and 100:"<<endl;

 do{
     cin>>guess;
     attempts++;
     if(guess<Guessno)
     {
      cout<<"Too low! Try again."<<endl;
     }
     else if(guess>Guessno)
     {
      cout<<"Too high! Try again."<<endl;
     }
     else
     {
      cout<<"congractulations! you found the number in "<<attempts<<" attempts."<<endl;
     }
   }
 while(guess!=Guessno);
 getch();
 }