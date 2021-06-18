#include <iostream>
using namespace std;

int main()
{
    int m,n;
    string command,s;
    while(cin>>m>>n)
    {
        string brand[21],color[21];
        for(int i=0;i<m;i++)
            cin>>brand[i]>>color[i];
        for(int i=0;i<n;i++)
        {
            cin>>command>>s;
            if(command=="brand")
            {
                for(int i=0;i<m;i++)
                {
                    if(brand[i]==s) cout<<brand[i]<<" "<<color[i]<<endl;
                }
            }
            else
            {
                for(int i=0;i<m;i++)
                {
                    if(color[i]==s) cout<<brand[i]<<" "<<color[i]<<endl;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
