#include<bits/stdc++.h>
using namespace std;
bool check(string s,int min,int max,int n){
 
if(n < 1){
  return false;
}
bool *visited = (bool *) calloc (n, sizeof(bool));
if(max - min +1==n){
int i;
for(i=0;i<n;i++){
if(visited[s[i]-min]!=false){
    return false;
}
visited[s[i]-min]=true;
}
return true;
}
return false;
 
 
}
 
int main() {
	int t,i=0;
	cin >> t;
	while(t--)	{
	string s;
	cin>>s;
	int len=s.length();
	int min =s[0]-'0';
	int max =s[0]-'0';
	for(i=1;i<len;i++){
	   if(s[i]-'0'< min){
	       min=s[i]-'0';
	   }
	}
		for(i=1;i<len;i++){
	   if(s[i]-'0'>max){
	       max=s[i]-'0';
	   }
	}
   if(check(s,min,max,len)){
   cout<<"YES"<<endl;
 
   }
   else cout<<"NO"<<endl;
 
}
return 0;
}
 
 
Language: C++