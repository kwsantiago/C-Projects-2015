#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <sstream>

using namespace std;

int main()
{
    string name;
    string feeling;
    string response;
    cout << "Hi, I'm Robert the robot.\n";
    cout << "What's your name?\n";
    cin >> name;
    cout << "Hi " << name << "." << " How are you feeling today?" << endl;
    cin >> feeling;
    if (feeling == "Good" || feeling == "Good." || feeling == "good" || feeling == "good."
    || feeling == "Great" || feeling == "great" || feeling == "great." || feeling == "Great."
    || feeling == "I'm feeling good" || feeling == "Im feeling good" || feeling == "I'm feeling good." || feeling == "Im feeling good." || feeling == "im feeling good" || feeling == "im feeling good." || feeling == "i'm feeling good"
    || feeling == "i'm feeling good." || feeling == "i'm feeling great."
    || feeling == "i'm feeling great" || feeling == "I'm feeling great" || feeling == "I'm feeling great."
    || feeling == "Im feeling great" || feeling == "Im feeling great." || feeling == "im feeling great.")
    {
        cout << "Awesome!" << endl;
        string response;
  int guess;
  int random;
  int chance = 9;
  srand (time(0));
  random = rand()% 100 + 1;
  cout << "Would you like to play a guessing game? \n";
  cin >> response;
  if (response == "Yes" || response == "yes" || response == "Yea" || response == "yea" || response == "Yup" || response == "yup" || response == "sure" || response == "Sure")
    {
      cout << "Awesome, let's get started! \n";
      cout << "I'm going to think of a number from 1 to 100 and you have to guess it! \n";
      cout << "I'm also going to give you 10 chances to guess the number.\n";
      cout << "When you're ready, just type in the number you want to guess. \n";
      cin >> guess;
      while (guess > 1 && guess != random)
      {
      if (chance == 0)
        {
            cout << "Sorry, but you ran out of tries. If you want to, we can play again.\n";
            system("PAUSE");
            return 0;
        }
      if (guess > random)
        {
          cout << "Chances left: " << chance<< "  You're number is too high!\n";
          cin >> guess;
          chance--;
        }
      else if (guess < random)
        {
          cout << "Chances left: " << chance << "  You're number too low!\n";
          cin >> guess;
          chance--;
        }
        cout << endl;
    }
    }
        if (guess == random)
        {
          cout << "Congratulations! You guessed my number!\n";
          system("PAUSE");
          return 0;
        }
    }
    else if (response == "Nah" || response == "nah" || response == "no" || response == "No" || response == "Nope" || response == "nope")
    {
      cout << "Aw that sucks. Maybe we can play another time.\n";
    }

    else if (feeling == "Bad" || feeling == "bad" || feeling == "Not good" || feeling == "not good")
    {
        cout << "Aw that sucks, maybe we can talk another time.\n";
        system("PAUSE");
    }
        else
    {
        cout << "Sorry, I couldn't understand you.\n";
        system("PAUSE");
    }
}

