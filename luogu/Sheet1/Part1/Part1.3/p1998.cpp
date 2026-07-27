/*看错题了 我以为最大的加起来
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //冒泡排序
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     for(int i=0;i<n;i++){
        cout<<a[i];
    }
return 0;
}
*/

/*别人的做法 看不懂
#include<bits/stdc++.h>
using namespace std;
string s[25];
bool cmp(string x,string y){return x+y>y+x;}
int main() {
	int n;cin>>n;
	for(int i=1;i<=n;i++) cin>>s[i];
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++) cout<<s[i];
}*/

#include <iostream>
using namespace std;
int main(){
    int n;
    char a,b,c;
    cin>>n;
    
if(a+b>b+a){
    c=a+b;
}
else{c=b+a;}


    return 0;
}