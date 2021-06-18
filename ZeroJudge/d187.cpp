#include <iostream>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    getchar();
    for(int r=1;r<=t;r++)
    {
        int count=0;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ') count++;
            else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x') count+=2;
            else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y') count+=3;
            else if(s[i]=='s'||s[i]=='z') count+=4;
        }
        cout<<"Case #"<<r<<": "<<count<<endl;
    }
    return 0;
}
