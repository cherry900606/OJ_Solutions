#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=0)
    {
        cout<<n<<endl;
    }
    if(n<0)
    {
        n=0-n;
        cout<<n<<endl;
    }
    return 0;
}
