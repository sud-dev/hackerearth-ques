#include <bits/stdc++.h>
using namespace std;
void findCount(int cnt[],int no){
bool check[10];
memset(check,false,sizeof(check));
 
while(no>0){
    int e=no%10;
 
    if(!check[e])
       cnt[e]++;
check[e]=true;
no=no/10;
 
 
 
}
}
void subseq(int cnt[10],int arr[],int n){
int i;
for(i=0;i<n;i++){
 
        findCount(cnt,arr[i]);
}
int longest=cnt[0];
int pos=0;
for(i=0;i<9;i++){
    if(cnt[i]>longest){
        longest=cnt[i];
        pos++;
    }
}
 
cout<<longest<<endl;
 
}
 
 
int main()
{
int arr[100000];
int cnt[10],i,n;
 
cin>>n;
 
 
 
memset(cnt,0,sizeof(cnt));
 
for(i=0;i<n;i++){
    cin>>arr[i];
}
 
 
 
subseq(cnt,arr,n);
 
return 0;
}
Language: C++