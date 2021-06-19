#include <iostream>
using namespace std;

int main()
{
    int num;
    while(cin>>num)
    {
        if(num==0) break;
        int top=1,n=2,w=3,bottom=7-top,s=7-n,e=7-w;
        while(num--)
        {
            string str;
            cin>>str;
            if(str=="north")
            {
                int temp=n;
                n=top;
                top=s;
                s=bottom;
                bottom=temp;
            }
            else if(str=="south")
            {
                int temp=s;
                s=top;
                top=n;
                n=bottom;
                bottom=temp;
            }
            else if(str=="east")
            {
                int temp=e;
                e=top;
                top=w;
                w=bottom;
                bottom=temp;
            }
            else if(str=="west")
            {
                int temp=w;
                w=top;
                top=e;
                e=bottom;
                bottom=temp;
            }
            
        }
        cout<<top<<endl;
    }
    return 0;
}