#include <iostream>
using namespace std;

int main()
{
    string name,command;
    int width,height;
    char picture[37][25];
    while(cin>>name>>width>>height>>command)
    {
        for(int i=0;i<height;i++)
            for(int j=0;j<width;j++)
                cin>>picture[i][j];
        cout<<name<<endl;
        for(int l=0;l<command.size();l++)
        {
            char copy[37][25];
            for(int i=0;i<height;i++)
                for(int j=0;j<width;j++)
                    copy[i][j]=picture[i][j];
            if(command[l]=='R')
            {
                for(int i=0;i<height;i++)
                    for(int j=0;j<width;j++)
                        picture[i][j]=copy[i][width-1-j];
            }
            else
            {
                for(int i=0;i<height;i++)
                    for(int j=0;j<width;j++)
                        picture[i][j]=copy[height-1-i][j];
            }
        }
        for(int i=0;i<height;i++)
        {
            for(int j=0;j<width;j++)
                cout<<picture[i][j];
            cout<<endl;
        }
    }
    return 0;
}
