
#include<iostream>
#include<string>

using namespace std;

class invalidHr{
  public:
    invalidHr(){
      message = "The value of the hr must between 1 and 12. ";
    }

    invalidHr(string str){
      message = str;
    }

    string what(){
      return message;
    }

  private:
    string message;

};