// Number Guessing Game codsoft 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()                      
{
    srand((unsigned int)time(NULL));
    int number = (rand() % 100) + 1;
    int guess = 0;
    do
    {  
        cout << "Enter your Guess between (1-100): ";
        cin >> guess;                                
        if (guess > number)
            cout << "Your guess is too high, guess lower!" << endl;
        else if (guess < number)
            cout << "Your guess is too low, guess higher!" << endl;
        else
            cout << "You have guessed correctly!" << endl;
    }
     while (guess != number);
   return 0;
}
