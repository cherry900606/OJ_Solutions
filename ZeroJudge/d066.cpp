#include <iostream>
using namespace std;

int main()
{
    int hh,mm,t;
    cin >> hh >> mm;
    t=hh*60+mm;
    if(t<1020&&t>=450){
        cout << "At School" << endl;
    }
    else{
        cout << "Off School" << endl;
    }
    return 0;
}
