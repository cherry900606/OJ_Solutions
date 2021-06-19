#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count=0;
    string text;
    while(getline(cin,text))
    {
        for(int i=0;i<text.size();i++)
        {
            if(text[i]=='"')
            {
                if(count%2==0) cout<<"``";
                else cout<<"''";
                count++;
            }
            else
                cout<<text[i];
        }
        cout<<endl;
    }
    return 0;
}