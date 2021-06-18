#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            int s,d,team1,team2;
            cin>>s>>d;
            team1=(s+d)/2;
            team2=(s-d)/2;
            if(team1<0||team2<0||(s+d)%2||abs((s-d)%2))
                cout<<"impossible"<<endl;
            else
            {
                if(team1<team2) swap(team1,team2);
                cout<<team1<<" "<<team2<<endl;
            }
        }
    }
    return 0;
}
