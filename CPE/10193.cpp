#include <iostream>
#include <string>
using namespace std;
int to_dec(string s)
{
    int expo=1,sum=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        sum+=(s[i]-'0')*expo;
        expo*=2;
    }
    return sum;
}
int gcd(int a,int b)
{
    while((a%=b)!=0&&(b%=a)!=0);
    return a+b;
}
int main()
{
    int n;
    cin>>n;
    for(int cases=1;cases<=n;cases++)
    {
        string s1,s2;
        int n1,n2;
        cin>>s1>>s2;
        n1=to_dec(s1),n2=to_dec(s2);
        cout<<"Pair #"<<cases<<": ";
        if(gcd(n1,n2)!=1) cout<<"All you need is love!"<<endl;
        else cout<<"Love is not all you need!"<<endl;
    }
    return 0;
}