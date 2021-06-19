#include <iostream>

using namespace std;





int main()

{

    int n,k;

    int ans[32];



    while(cin>>n)

    {

        k=0;

        while(n!=0)

        {

            ans[k]=n%2;

            n/=2;

            k++;

        }

        for(int i=k-1; i>=0; i--)

        {

            cout<<ans[i];

        }

        cout<<endl;

    }



    return 0;



}
