#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        int sum=0,temp,max=1;
        for(int i=0;i<s.size();i++)
        {
            if('0'<=s[i]&&s[i]<='9') temp=s[i]-'0';
            else if('A'<=s[i]&&s[i]<='Z') temp=s[i]-'A'+10;
            else if('a'<=s[i]&&s[i]<='z') temp=s[i]-'a'+36;
            else continue;
            
            if(temp>max) max=temp;
            sum+=temp;
        }
        for(int i=max;i<=62;i++)
        {
            if(sum%i==0)
            {
                cout<<(i+1)<<endl;
                break;
            }
            else if(i==62) cout<<"such number is impossible!"<<endl;
        }
    }
    return 0;
}