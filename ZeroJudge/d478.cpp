#include <iostream>
#include <cstring>
#include <cstdio>
//use other one's code to try
using namespace std;
int a[10001],b[10001];
int main() {
  int m,n,count;
  scanf("%d %d",&n,&m);
  for(int i=1;i<=n;i++){
    count=0;
    for(int j=0;j<m;j++){
      scanf("%d",&a[j]);  
    }
    for(int j=0;j<m;j++){
      scanf("%d",&b[j]);  
    }
    int k=0;
    for(int j=0;j<m;){
      if (a[j]==b[k]) {
        count++;
        j++;
        k++;                
      }else if (a[j]>b[k]) {
        k++;                
      } else {
        j++;                
      }
      if (k==m){
        break;          
      }      
    }
    printf("%d\n",count);           
  }

}
