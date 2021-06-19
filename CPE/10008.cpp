#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        cin.ignore();
        string text;
        char alphabet[26];
        int count[26]={0};
        for(int j=0;j<26;j++)
            alphabet[j]=(char)('A'+j);
        for(int i=0;i<n;i++)
        {
            getline(cin,text);
            for(int j=0;j<text.size();j++)
            {
                if(isalpha(text[j])&&islower(text[j]))
                    count[text[j]-'a']++;
                else if(isalpha(text[j])&&isupper(text[j]))
                    count[text[j]-'A']++;
            }
        }
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(count[i]>count[j])
                {
                    swap(count[i],count[j]);
                    swap(alphabet[i],alphabet[j]);
                }
                else if(count[i]==count[j]&&alphabet[i]<alphabet[j])
                {
                    swap(count[i],count[j]);
                    swap(alphabet[i],alphabet[j]);
                }
            }
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]>0)
                cout<<alphabet[i]<<" "<<count[i]<<endl;
        }
    }
    return 0;
}