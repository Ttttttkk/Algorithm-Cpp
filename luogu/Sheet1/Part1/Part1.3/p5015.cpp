#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    string no_space;
    for(char c:a){
        if(c!=' '){
            no_space+=c;
        }
    }
    int cnt=no_space.length();
    cout<<cnt;
    return 0;
}