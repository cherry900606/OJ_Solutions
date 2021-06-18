#include <iostream>
using namespace std;

int main()
{
    int w,h,n,target=0;
    cin>>w>>h>>n;
    char map[10][10];
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            cin>>map[i][j];
            if(map[i][j]!='0') target++;
        }
    }
    if(n>target) cout<<"Mission fail."<<endl;
    else
    {
        char object='a';
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<w;j++)
            {
                for(int k=0;k<h&&n>0;k++)
                {
                    if(map[j][k]==char(object+i))
                    {
                        cout<<j<<" "<<k<<endl;
                        n--;
                        break;
                    }
                }
            }
        }
    }
}
