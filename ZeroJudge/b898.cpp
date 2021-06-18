#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string l[3];
    cin>>n;
    while(n--)
    {
        cin>>l[0]>>l[1]>>l[2];
        int length=0;
        for(int i=0;i<3;i++)
            if(l[i].size()>length) length=l[i].size();
        for(int i=0;i<3;i++)
        {
            if(l[i].size()<length)
            {
                int len=length-l[i].size();
                for(int j=0;j<len;j++)
                {
                    l[i]="0"+l[i];
                }
            }
        }
        sort(l,l+3);
        cout<<l[2]<<endl;
    }
    return 0;
}
