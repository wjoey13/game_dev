
#include<iostream>
#include<string>

using namespace std;

class invalidSec{
  public:
    invalidSec(){
      message = "The value of the sec must between 0 and 60. ";
    }

    invalidSec(string str){
      message = str;
    }

    string what(){
      return message;
    }

  private:
    string message;

};