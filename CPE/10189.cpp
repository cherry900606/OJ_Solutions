#include <iostream>
using namespace std;

int main()
{
    int n,m,times=1;
    while(cin>>n>>m)
    {
        if(n==0&&m==0) break; 
        if(times!=1) cout<<endl;
        char map[105][105];
        for(int i=0;i<100;i++)
            for(int j=0;j<100;j++)
                map[i][j]='0';
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>map[i][j];
        cout<<"Field #"<<times++<<":"<<endl;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(map[i][j]=='*') cout<<map[i][j];
                else
                {
                    int count=0;
                    for(int x=i-1;x<=i+1;x++)
                    {
                        for(int y=j-1;y<=j+1;y++)
                        {
                            if(map[x][y]=='*') count++;
                        }
                    }
                    cout<<count;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}