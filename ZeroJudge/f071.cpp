#include <iostream>
using namespace std;

int main()
{
    int lucky[3],number[5],money[5],sum=0;
    for(int i=0;i<3;i++)
        cin>>lucky[i];
    for(int i=0;i<5;i++)
        cin>>number[i];
    for(int i=0;i<5;i++)
        cin>>money[i];
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(lucky[i]==number[j])
                sum+=money[j];
        }
    }
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(lucky[2]==number[i])
            sum-=money[i],flag=1;
    }
    if(!flag) sum*=2;
    
    cout<<(sum>=0?sum:0)<<endl;
    return 0;
}
