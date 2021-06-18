#include <iostream>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int n;
    string index[6]={"0101","0111","0010","1101","1000","1100"};
    while(cin>>n)
    {
        while(n--)
        {
            string tmp,s;
            for(int i=0;i<4;i++)
            {
                cin>>tmp;
                s+=tmp;
            }
            for(int i=0;i<6;i++)
                if(s==index[i]) cout<<(char)('A'+i);
        }
        cout<<endl;
    }
    return 0;
}
