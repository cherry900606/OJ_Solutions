#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    while(cin>>n)
    {
        if(1<=n && n<=1261)
        cout << "\'C\' can use printf(\"%d\",n); to show integer like "<<n<<endl;
    }
    return 0;
}
