#include <bits/stdc++.h>
#include<string.h>
 
using namespace std;
int main(){
    int t;
    cin>>t;
while(t--){
string s,out;
int i,j,count=0;
//int arr[1000000];
cin>>s;
i=0;
j=1;
while(i<s.length()){
out+=s.substr(i,j-i);
 //cout<<s.substr(i,j-i)<<endl;
    if(j>=s.length()){
 
        i++;
        j=i;
//cout<<s.substr(i,j)<<endl;
    }
    else{
 
    j++;
 
    }
 
}
for(i=0;i<out.length();i++){
     if (out[i] == 'a' || out[i] == 'e' || out[i] == 'i'
            || out[i] == 'o' || out[i] == 'u'|| out[i] == 'A' || out[i] == 'E' || out[i] == 'I'
            || out[i] == 'O' || out[i] == 'U') {
            count++;
            }
}
cout<<count<<endl;
}
 
 
return 0;
}
Language: C++