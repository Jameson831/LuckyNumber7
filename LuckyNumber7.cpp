// Jameson White
#include <iostream>
 using namespace std;
  
   int main ()
   {
   int guess;

   cout<<"Guess a number between 1-10 "<<endl;
   cin>> guess;

    if (guess==7){
   cout<<"YES! Lucky number 7"<<endl;
   }
   if(guess==6|| guess==8){
   cout<<"Oh, so close!"<< endl;
 }
   if(guess < 6 || guess > 8)
   { 
   cout<<"Waaay off sorry."<< endl;
   }

   return 0;
   }
