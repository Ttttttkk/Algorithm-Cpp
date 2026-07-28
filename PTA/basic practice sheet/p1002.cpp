#include <iostream>
using namespace std;
string pinyin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"} ;
void readNum(int n){
    if(n>=10){
       readNum(n/10);
       cout<<" ";
    }
    cout<<pinyin[n%10];
}
int main(){
    string n;
    int sum = 0;
    cin >> n;

    for (char c : n) {
        sum += c - '0';
    }
    
  readNum(sum);
  return 0;

}