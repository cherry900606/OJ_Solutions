#include <iostream>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    while((a%=b)!=0&&(b%=a)!=0);
    return a+b;
}
int main()
{
    long long int up1,down1,up2,down2,_gcd;
    char c,ignore;
    cin>>up1>>ignore>>down1;
    while(cin>>c>>up2>>ignore>>down2)
    {
        if(c=='+')
            up1=up1*down2+up2*down1;
        else if(c=='-')
            up1=up1*down2-up2*down1;
        down1*=down2;
    }
    _gcd=abs(gcd(up1,down1));
    up1/=_gcd;down1/=_gcd;
    cout<<up1<<'/'<<down1<<endl;
    return 0;
}
