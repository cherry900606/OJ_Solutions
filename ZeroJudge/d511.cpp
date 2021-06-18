#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    int s=0;
    for(int i=0;i<5;i++)
    {
            cin>>a>>b>>c;
            if(a+b>c && b+c>a && a+c>b)
            {
                s+=1;
            }
    }
    cout<<s<<endl;
    return 0;
}
