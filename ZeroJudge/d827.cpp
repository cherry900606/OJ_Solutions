#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    num=(num/12)*50+(num%12)*5;
    cout << num << endl;
    return 0;
}
