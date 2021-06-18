#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    char c;
    while(getline(cin,s))
    {
        int num;
        stringstream ss(s);
        double even=0.0,odd=0.0,temp;
        while(ss>>num)
        {
            ss>>c;
            ss>>temp;
            if(num%2)
                odd+=temp;
            else
                even+=temp;
        }
        cout<<odd-even<<endl;
    }
    return 0;
}
