#include <iostream>
using namespace std;

int main()
{
    int n,m,x,y,x2,y2;
    char map[502][502];
    
    while(cin>>n>>m)
    {
        for(int i=0;i<502;i++)
            for(int j=0;j<502;j++)
                map[i][j]=' ';
        cin>>x>>y;
        for(int r=1;r<m;r++)
        {
            cin>>x2>>y2;
            if(x==x2)
            {
                for(int i=min(y,y2);i<=max(y,y2);i++)
                    map[x][i]='*';
            }
            else
            {
                for(int i=min(x,x2);i<=max(x,x2);i++)
                    map[i][y]='*';
            }
            x=x2;
            y=y2;
        }
        for(int i=0;i<n+2;i++) cout<<'-';
        cout<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<'|';
            for(int j=1;j<=n;j++)
                cout<<map[i][j];
            cout<<"|\n";
        }
        for(int i=0;i<n+2;i++) cout<<'-';
        cout<<endl;
    }
    
    
    return 0;
}
