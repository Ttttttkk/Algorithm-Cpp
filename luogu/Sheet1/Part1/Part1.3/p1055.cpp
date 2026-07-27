#include <iostream>
#include <string>
using namespace std;
//题解
int main(){
    string s;
    int sum=0,n=0,l;
    cin>>s;
    l=s.length();
    for (int i=0; i<l-1; ++i)
		if (s[i]>='0'&&s[i]<='9')
			sum+=(s[i]-'0')*(++n);
	if (sum%11+'0'==s[l-1]||(sum%11==10&&s[l-1]=='X'))
		puts("Right");
	else
		s[l-1]=(sum%11==10?'X':sum%11+'0'),
		cout << s;
	return 0;
}


