#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m=0;  //n是天數 m是錢
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        m+=a[i]*(i+1);
    }
    cout<<m<<endl;


    return 0;
}
