#include <iostream>
#include <string>
using namespace std;

int main(){
    string str,sentence;
    int pos,cnt=0,key;
    getline(cin,str);
    getline(cin,sentence);
    for(int i=0;i<str.length();i++){//大小写转换
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]-'A'+'a';
        }
    }
    for(int i=0;i<sentence.length();i++){//大小写转换
        if(sentence[i]>='A'&&sentence[i]<='Z'){
            sentence[i]=sentence[i]-'A'+'a';
        }
    }

    str=" "+str+" ";
    sentence=" "+sentence+" ";//防止不完全匹配
    pos=sentence.find(str,0);
    key=pos;
    while(pos!=-1){
        cnt++;
        pos=sentence.find(str,pos+1);
    }
    if(key==-1){
        cout<<-1;
    }
    else{
        cout<<cnt<<" "<<key;
    }
    return 0;
}