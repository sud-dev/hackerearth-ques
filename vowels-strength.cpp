#include <bits/stdc++.h>
using namespace std;
#include<string.h>
int main(){
int i,cnt;
string s;
i=0;
cnt=0;
getline(cin,s);
while(i<s.length()){
 
    if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I'
            || s[i] == 'O' || s[i] == 'U'){
 
                cnt+=int(s[i])+32;
 
            }
    else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
            || s[i] == 'o' || s[i] == 'u'){
                cnt+=int(s[i]);
            }
 
 
            i++;
 
 
}
cout<<cnt<<endl;
 
return 0;
}
Language: C++