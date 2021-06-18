#include <iostream>
#include <sstream>
using namespace std;
int gcd(int a,int b)
{
    while((a%=b)!=0&&(b%=a)!=0);
    return a+b;
}
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        int data[100],l=0,temp,g=0;
        string s;
        stringstream ss;
        getline(cin,s);
        ss<<s;
        while(ss>>temp)
        {
            data[l]=temp;
            l++;
        }
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if(gcd(data[i],data[j])>g)
                    g=gcd(data[i],data[j]);
            }
        }
        cout<<g<<endl;
    }
    return 0;
}
