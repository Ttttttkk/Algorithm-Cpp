#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int month=n%100;
  if(month>=3&&month<=5){
    cout<<"spring\n";
  }else if (month>=6&&month<=8)
  {
    cout<<"summer\n";
  }else if (month>=9&&month<=11)
  {
    cout<<"autumn\n";
  }else {
    cout<<"winter\n";
  }
    return 0;
}