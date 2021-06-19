#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cases;
    while(cin>>cases)
    {
        for(int rounds=1;rounds<=cases;rounds++)
        {
            cout<<"Case "<<rounds<<":"<<endl;
            int index[36];
            for(int i=0;i<36;i++)
                cin>>index[i];
            int num;
            cin>>num;
            while(num--)
            {
                int n,min_cost=1000000000,min_base=100;
                cin>>n;
                cout<<"Cheapest base(s) for number "<<n<<":";
                for(int i=2;i<=36;i++)
                {
                    int cost=0,number=n;
                    while(number>0)
                    {
                        cost+=index[number%i];
                        number/=i;
                    }
                    if(cost<min_cost) min_cost=cost,min_base=i;
                }
                for(int i=2;i<=36;i++)
                {
                    int cost=0,number=n;
                    while(number>0)
                    {
                        cost+=index[number%i];
                        number/=i;
                    }
                    if(cost==min_cost) cout<<" "<<i;
                }
                cout<<endl;
            }
            if(rounds!=cases) cout<<endl;
        }

    }
    return 0;
}