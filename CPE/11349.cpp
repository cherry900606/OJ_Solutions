#include <iostream>
using namespace std;


int main()
{
    char ignore;
    int t;
    cin>>t;
    for(int rounds=1;rounds<=t;rounds++)
    {
        cout<<"Test #"<<rounds<<": ";
        int n,flag=0;
        long long int matrix[101][101];
        cin>>ignore>>ignore>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]!=matrix[n-1-i][n-1-j]||matrix[i][j]<0)
                    flag=1;
            }
        }
        if(flag) cout<<"Non-symmetric."<<endl;
        else cout<<"Symmetric."<<endl;
    }
}