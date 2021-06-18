#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,temp;
    cin>>t;
    for(int r=1;r<=t;r++)
    {
        cout<<"Case #"<<r<<":"<<endl;
        vector<int> v[3],vn[3];
        vector<int>::iterator it1,it2;
        for(int i=0;i<3;i++)
        {
            cin>>n;
            for(int j=0;j<n;j++)
            {
                cin>>temp;
                v[i].push_back(temp);
            }
        }
        int record[3]={0};
        for(int i=0;i<v[0].size();i++)
        {
            it1=find(v[1].begin(),v[1].end(),v[0][i]);
            it2=find(v[2].begin(),v[2].end(),v[0][i]);
           if(it1==v[1].end()&&it2==v[2].end()) vn[0].push_back(v[0][i]),record[0]++;
        }
        for(int i=0;i<v[1].size();i++)
        {
            it1=find(v[0].begin(),v[0].end(),v[1][i]);
            it2=find(v[2].begin(),v[2].end(),v[1][i]);
           if(it1==v[0].end()&&it2==v[2].end()) vn[1].push_back(v[1][i]),record[1]++;
        }
        for(int i=0;i<v[2].size();i++)
        {
            it1=find(v[0].begin(),v[0].end(),v[2][i]);
            it2=find(v[1].begin(),v[1].end(),v[2][i]);
           if(it1==v[0].end()&&it2==v[1].end()) vn[2].push_back(v[2][i]),record[2]++;
        }
        int Max=max(record[0],record[1]);
        Max=max(Max,record[2]);
    
        for(int i=0;i<3;i++)
        {
            if(Max==record[i])
            {
                sort(vn[i].begin(),vn[i].end());
                cout<<i+1<<" "<<record[i]<<" ";
                for(int j=0;j<vn[i].size();j++)
                    cout<<vn[i][j]<<" ";
                cout<<endl;
            }
        }
        
    }
    return 0;
}
