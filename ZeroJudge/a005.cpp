#include <iostream>

#include <cmath>

using namespace std;



int main()

{

    int t,a,b,c,d;

    cin>>t;

    while(true)

    {

        for(int i=0; i<t; i++)

        {

            cin>>a>>b>>c>>d;

            if(d-c==c-b)

            {

                cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+c-b<<endl;

            }

            else

            {

                int r=b/a;



                cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<a*pow(r,4)<<endl;

            }

        }

        return 0;

    }

}
