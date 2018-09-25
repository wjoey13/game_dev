
// Write a program that prompts the user to enter time in 12-hour notation.
// The program then outputs the time in 24-hour notation.
// Your program must contain three exception classes: invalidHr, invalidMin, and invalidSec.
// If the user enters an invalid value for hours, then the program should throw and catch an invalidHr object.
// Similar conventions for the invalid values of minutes and seconds.

#include<iostream>
#include<string>
#include"invalidHr.h"
#include"invalidMin.h"
#include"invalidSec.h"

using namespace std;

int getHrs();
int getMins();
int getSecs();

void print24HrTime(int hr, int min, int sec, string str);

int main() {
  int hours;
  int minutes;
  int seconds;

  string str;

  hours = getHrs();
  minutes = getMins();
  seconds = getSecs();

  cout<<"Enter AM or PM";
  cin >> str;
  cout << endl;

  cout << "The time you have entered is : " << hours << ':' << minutes << ':' << seconds << " " << str << endl;

  cin.get();
  cin.get();

  return (0);
}

int getHrs(){
  bool done = false;
  int hr = 0;
  do{
     try{
       cout << "Enter Hours (between 1 - 12): ";
       cin >> hr;
       cout << endl;

       if (hr < 0 || hr > 12)
          throw invalidHr();

       done = true;
     }
     catch (invalidHr hrObj)
     {
       cout << hrObj.what() << endl;
     }
  }
  while (!done);

  return hr;
}

int getMins(){
  bool done = false;
  int min = 0;
  do{
    try{
      cout << "Enter Minutes (between 0 - 60): ";
      cin >> min;
      cout << endl;

      if (min < 0 || min > 60)
          throw invalidMin();
      done = true;
    }
    catch (invalidMin minObj)
    {
      cout << minObj.what() << endl;
    }
  }
  while (!done);

  return min;
}

int getSecs(){
  bool done = false;
  int sec = 0;
  do{
    try{
      cout << "Enter Seconds (between 0 - 60): ";
      cin >> sec;
      cout << endl;

      if (sec < 0 || sec > 60)
          throw invalidSec();
      done = true;
    }
    catch (invalidSec secObj)
    {
      cout << secObj.what() << endl;
    }
  }
  while (!done);

  return sec;
}

void print24HrTime(int hr, int min, int sec, string str){
  if (str == "AM" || str == "am"){
    if (hr == 12){
          cout << 0;
    }
    else{
          cout << hr;
    } 
          
  }
  else if(str == "PM" || str == "pm"){
    if (hr == 12){
        cout << hr;
    }   
    else{
        cout << hr + 12;
    }

    cout << hr << ':' << min << ':' << sec << endl;

    cin.get();
    cin.get();

  }
}