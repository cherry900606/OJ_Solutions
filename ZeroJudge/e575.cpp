#include <iostream>
using namespace std;

int main()
{
    int t,m,n,q,r,c;
    cin>>t;
    while(t--)
    {
        char map[100][100]={'0'};
        cin>>m>>n>>q;
        cout<<m<<" "<<n<<" "<<q<<endl;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>map[i][j];
        while(q--)
        {
            cin>>r>>c;
            int length=0,out=0;
            char target=map[r][c];
            while(1)
            {
                int i,j;
                for(i=r-length;i<=r+length;i++)
                {
                    for(j=c-length;j<=c+length;j++)
                    {
                        if(map[i][j]!=target)
                        {
                            out=1;
                            break;
                        }
                        else if(i<0||j<0||i>=m||j>=n)
                        {
                            out=1;
                            break;
                        }
                    }
                    if(out) break;
                }
                if(out)
                {
                    length--;
                    break;
                }
                length++;
            }
            cout<<length*2+1<<endl;
        }

    }
    return 0;
}
