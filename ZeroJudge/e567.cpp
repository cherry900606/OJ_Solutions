#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int rounds=0;rounds<t;rounds++)
    {
        string s,ignore;
        vector<string> command;
        int n,point=0,number;
        cin>>n;
        cin.ignore();
        for(int i=0;i<n;i++)
        {
            getline(cin,s);
            command.push_back(s);
            if(s=="LEFT") point--;
            else if(s=="RIGHT") point++;
            else
            {
                stringstream ss(s);
                ss>>ignore>>ignore>>number;
                command[i]=command[number-1];
                if(command[i]=="LEFT") point--;
                else if(command[i]=="RIGHT") point++;
            }
        }
        cout<<point<<endl;
    }
    return 0;
}
