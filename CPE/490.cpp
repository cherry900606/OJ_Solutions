#include <iostream>
#include <string>
using namespace std;

int main()
{
    int l=0,w=0;
    string s[100],temp;
    while(getline(cin,temp))
    {
        s[l++]=temp;
        if(temp.size()>w) w=temp.size();
    }
    for(int i=0;i<w;i++)
    {
        for(int j=l-1;j>=0;j--)
        {
            if(s[j].size()>i)
                cout<<s[j][i];
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}