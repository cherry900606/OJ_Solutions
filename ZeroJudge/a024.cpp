#include <iostream>

using namespace std;

int gcd(int a,int b)

{

    while((a%=b)!=0&&(b%=a)!=0);

    return a+b;

}

int main()

{

    std::ios::sync_with_stdio(false);

    std::cin.tie(0);

    int a,b;

    cin>>a>>b;

    cout<<gcd(a,b)<<endl;

    return 0;

}
