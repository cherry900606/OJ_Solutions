#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        string s;
        stringstream ss;
        int x,y,z,w,n,m,cmd,weight=0,p=0;
        cin>>x>>y>>z>>w>>n>>m;
        weight=m;
        getchar();
        getline(cin,s);
        ss<<s;
        while(ss>>cmd)
        {
            if(p)
                weight-=n*p;
            if(weight<0)
                break;
            if(cmd==1)
                weight+=x;
            else if(cmd==2)
                weight+=y;
            else if(cmd==3)
                weight-=z;
            else if(cmd==4)
            {
                weight-=w;
                p++;
            }
            if(weight<0)
                break;
        }
        if(weight>0)
            cout<<weight<<"g"<<endl;
        else
            cout<<"bye~Rabbit"<<endl;
    }
    return 0;
}
