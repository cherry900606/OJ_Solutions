#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m=0;  //n�O�Ѽ� m�O��
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
