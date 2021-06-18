#include <iostream>
using namespace std;
int find(string s,string ss,int b)
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(s[i]==ss[j]&&i!=j)
                b++;
        }
    }
    return b;
}
int main()
{
    int n;
    char c;
    string s,ss;
    cin>>s>>n;
    while(n--)
    {
        int a=0,b=0;
        cin>>ss;
        for(int i=0;i<4;i++)
            if(s[i]==ss[i]) a++;
        b=find(s,ss,b);
        cout<<a<<'A'<<b<<"B\n";
    }
    return 0;
}
