#include<iostream>
using namespace std;
int main(){
 int num;
 int a=0;
 while(cin>>num){
  while(num>1){
   for(int i=2;i<=num;i++){
    int n=0;
    if(num%i==0){
     a++;
      while(num%i==0){
       n++;
       num=num/i;
      }
      if(n!=1){
       if(num!=1) cout<<i<<"^"<<n<<" "<<"*"<<" ";
       else cout<<i<<"^"<<n;
      }
      else{
       if(num!=1){
        cout<<i<<" "<<"*"<<" ";
       }
       else{
       cout<<i;
       }
      }
     }
    }
    a=0;
    cout<<endl;
   }
 }
}
