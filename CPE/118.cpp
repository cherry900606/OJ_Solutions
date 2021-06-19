#include <iostream>
using namespace std;

int main()
{
    int w,h,x,y,map[51][51]={0};
    char direction;
    cin>>w>>h;
    while(cin>>x>>y>>direction)
    {
        int lost=0;
        string command;
        cin>>command;
        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='L')
            {
                switch(direction)
                {
                    case 'N':
                        direction='W';break;
                    case 'E':
                        direction='N';break;
                    case 'S':
                        direction='E';break;
                    case 'W':
                        direction='S';break;
                }
                    
            }
            else if(command[i]=='R')
            {
                switch(direction)
                {
                    case 'N':
                        direction='E';break;
                    case 'E':
                        direction='S';break;
                    case 'S':
                        direction='W';break;
                    case 'W':
                        direction='N';break;
                }
            }
            else if(command[i]=='F')
            {
                int nextX=x,nextY=y;
                if(direction=='N') nextY++;
                else if(direction=='E') nextX++;
                else if(direction=='S') nextY--;
                else if(direction=='W') nextX--;
                if(nextX>w||nextX<0||nextY>h||nextY<0)
                {
                    if(map[x][y]==1)
                        continue;
                    else
                    {
                        lost=1;
                        map[x][y]=1;
                        break;
                    }
                }
                x=nextX,y=nextY;
            }
        }
        cout<<x<<" "<<y<<" "<<direction<<(lost?" LOST":"")<<endl;
    }
    return 0;
}