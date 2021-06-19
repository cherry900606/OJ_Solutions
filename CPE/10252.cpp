#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    while(getline(cin,a))
    {
        getline(cin,b);
        int index1[26]={0},index2[26]={0};
        for(int i=0;i<a.size();i++)
            index1[a[i]-'a']++;
        for(int i=0;i<b.size();i++)
            index2[b[i]-'a']++;
        for(int i=0;i<26;i++)
        {
            if(index1[i]&&index2[i])
            {
                int len=index1[i]<index2[i]?index1[i]:index2[i];
                for(int j=0;j<len;j++)
                    cout<<char('a'+i);
            }
        }
        cout<<endl;
    }
}