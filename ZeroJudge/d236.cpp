#include <iostream>
using namespace std;

int main()
{
    int a,b,c=499;
    while(c>0)
    {
        for(int a=1,b=999-c;a<b;a++,b--)
        {
            if(a*a+b*b==c*c)
            {
                cout<<a*b*c<<endl;
                break;
            }
        }
        c--;
    }
    return 0;
}
