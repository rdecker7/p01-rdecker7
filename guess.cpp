//Author: Riley Decker
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
 int guess;
 srand ( time(NULL) ); 
 int randomNumber; // this variable will hold the random number;
 randomNumber = rand() % 10 + 1;
 cout<<"Guess a number between 1 and 10."<<endl;
 cin>>guess;
 /*cout<<randomNumber<<endl;*/
  if (guess==randomNumber)
   {
    cout<<"You guessed correctly! You win!"<<endl;
   }
  if (guess<randomNumber)
   {
    cout<<"You were off by "<<randomNumber - guess<<endl;
   } 
  else 
   {
    cout<<"You were off by "<<guess - randomNumber<<". Sorry you lose!"<<endl;
   } 
return 0;
}
