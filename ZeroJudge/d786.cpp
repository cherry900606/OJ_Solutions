#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int cases,n,num;
    cin>>cases;
    cout<<fixed<<setprecision(2);
    while(cases--)
    {
        cin>>n;
        double sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            sum+=num;
        }
        cout<<sum/n<<endl;
    }
    return 0;
}
