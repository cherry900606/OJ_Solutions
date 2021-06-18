#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int l,train[51],times=0;
        cin>>l;
        for(int i=0;i<l;i++)
            cin>>train[i];
        for(int i=0;i<l;i++)
        {
            for(int j=i;j<l;j++)
            {
                if(train[i]>train[j])
                {
                    swap(train[i],train[j]);
                    times++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<times<<" swaps."<<endl;
    }
    return 0;
}
