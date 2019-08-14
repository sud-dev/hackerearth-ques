#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
int i,n,n1,n2;
string s;
i=0;
getline(cin,s);
cin>>n;
int len=s.length();
    if(n%26!=0){
                n2=n%26;
            }
            else{
                n2=0;
            }
             if(n%10!=0){
            n1=n%10;
        }
        else{
            n1=0;
        }
while(i<len){
        int ch=s[i]-'0';
   if(ch>=0 && ch<=9){
 
      if(n1+ch>9){
     s[i]=(n1+ch)%10+'0';
 
      }
      else{
      s[i]=(n1+ch)+'0';
      }
   }
   else{
 
    if((int(s[i])>=65&&int(s[i])<=90)){
       if(n2+int(s[i])>90){
        s[i]=(64+((n2+int(s[i])-90)%26));
       }
             else{
      s[i]=(n2+int(s[i]));
 
      }
       }
       else if(int(s[i])>=97&&int(s[i])<=122){
 
        if(n2+int(s[i])>122){
        s[i]=(96+((n2+int(s[i])-122)%26));
       }
             else{
      s[i]=(n2+int(s[i]));
      }
       }
   }
i++;
}
cout<<s;
return 0;
}
Language: C++14