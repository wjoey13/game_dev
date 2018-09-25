
#include<iostream>
#include<string>

using namespace std;

class invalidMin{
  public:
    invalidMin(){
      message = "The value of the min must between 0 and 60. ";
    }

    invalidMin(string str){
      message = str;
    }

    string what(){
      return message;
    }

  private:
    string message;

};