#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s;
    
    while(getline(cin,s))
    {
        stringstream ss;
        string one,two,operation;
        ss<<s;
        ss>>one;
        cout<<one;
        while(ss>>operation>>two)
        {
            if(operation=="or") cout<<"||";
            else cout<<"&&";
            cout<<two;
            
            if(operation=="or")
            {
                for(int i=0;i<5;i++)
                {
                    if(one[i]=='1'||two[i]=='1') one[i]='1';
                    else one[i]='0';
                }
            }
            if(operation=="and")
            {
                for(int i=0;i<5;i++)
                {
                    if(one[i]=='1'&&two[i]=='1') one[i]='1';
                    else one[i]='0';
                }
            }
        }
        cout<<" = "<<one<<endl;
    }
    return 0;
}
