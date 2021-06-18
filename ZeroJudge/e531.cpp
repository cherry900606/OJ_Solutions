#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    string c="0111001111",d="0111001110",e="0111001100",f="0111001000",g="0111000000",
    a="0110000000",b="0100000000",C="0010000000",D="1111001110",E="1111001100",F="1111001000",
    G="1111000000",A="1110000000",B="1100000000";
    for(int i=0;i<t;i++)
    {
        int count[10]={0};
        string s,finger="0000000000";
        getline(cin,s);
        if(s[0]=='c') finger=c;
        else if(s[0]=='d') finger=d;
        else if(s[0]=='e') finger=e;
        else if(s[0]=='f') finger=f;
        else if(s[0]=='g') finger=g;
        else if(s[0]=='a') finger=a;
        else if(s[0]=='b') finger=b;
        else if(s[0]=='C') finger=C;
        else if(s[0]=='D') finger=D;
        else if(s[0]=='E') finger=E;
        else if(s[0]=='F') finger=F;
        else if(s[0]=='G') finger=G;
        else if(s[0]=='A') finger=A;
        else if(s[0]=='B') finger=B;
        for(int j=0;j<10;j++)
        {
            if(finger[j]=='1') count[j]++;
        }
        for(int j=1;j<s.size();j++)
        {
            string next;
            if(s[j]=='c') next=c;
            else if(s[j]=='d') next=d;
            else if(s[j]=='e') next=e;
            else if(s[j]=='f') next=f;
            else if(s[j]=='g') next=g;
            else if(s[j]=='a') next=a;
            else if(s[j]=='b') next=b;
            else if(s[j]=='C') next=C;
            else if(s[j]=='D') next=D;
            else if(s[j]=='E') next=E;
            else if(s[j]=='F') next=F;
            else if(s[j]=='G') next=G;
            else if(s[j]=='A') next=A;
            else if(s[j]=='B') next=B;
            for(int k=0;k<10;k++)
            {
                if(finger[k]=='0'&&next[k]=='1') count[k]++;
            }
            finger=next;
        }
        for(int i=0;i<10;i++)
        {
            if(i!=9)
                cout<<count[i]<<" ";       
            else
                cout<<count[i]<<endl;
        }
    }
    return 0;
}
