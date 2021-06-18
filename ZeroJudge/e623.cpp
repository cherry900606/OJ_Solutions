#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(i=1;;i++)
        if((1+i)*i*2>=n) break;
    if(n<=4)
    {
        if(n==1) cout<<"Pen"<<endl;
        else if(n==2) cout<<"Pineapple"<<endl;
        else if(n==3) cout<<"Apple"<<endl;
        else cout<<"Pineapple pen";
    }
    else if((1+i)*i*2==n) cout<<"Pineapple pen"<<endl;
    else
    {
        n-=i*(i-1)*2;
        if(n%i==0) n--;
        if(n/i==0) cout<<"Pen"<<endl;
        else if(n/i==1) cout<<"Pineapple"<<endl;
        else if(n/i==2) cout<<"Apple"<<endl;
        else if(n/i==3) cout<<"Pineapple pen"<<endl;
    }
    return 0;
}
