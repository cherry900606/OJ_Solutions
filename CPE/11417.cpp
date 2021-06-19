#include <iostream>

using namespace std;

int GCD(int a,int b)
{
    while((a%=b)!=0&&(b%=a)!=0);
    return a+b;
}
int main()
{
    int N;
    while(cin>>N&&N!=0)
    {
        int G=0;
        for(int i=1;i<N;i++)
        {
            for(int j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }            
        }
        cout<<G<<endl;
    }
    
    return 0;
}