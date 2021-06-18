#include <iostream>
using namespace std;

int main()
{
    int h;
    cin >> h;
    h-=15;
    h=(h+24)%24;
    cout << h << endl;
    return 0;
}
