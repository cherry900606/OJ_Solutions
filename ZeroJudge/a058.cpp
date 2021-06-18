#include <iostream>
using namespace std;

int main()
{
    int n,x,k1=0,k2=0,k3=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%3==0)
            k1+=1;
        if(x%3==1)
            k2+=1;
        if(x%3==2)
            k3+=1;

    }

    cout<<k1<<" "<<k2<<" "<<k3<<endl;
    return 0;

}
