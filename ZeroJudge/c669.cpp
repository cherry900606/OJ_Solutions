#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t,temp;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        int min,max,length=0,sum=0,repeat=0,loss;
        getline(cin,s);
        stringstream ss(s);
        vector<int> l;
        while(ss>>temp)
            l.push_back(temp),length++,sum+=temp;
        max=min=l[0];
        sort(l.begin(),l.end());
        for(int i=0;i<l.size();i++)
        {
            if(max<l[i]) max=l[i];
            if(min>l[i]) min=l[i];
            if(l[i]==l[i+1]) repeat=l[i];
        }
        loss=(min+max)*length/2-(sum-repeat);
        cout<<loss<<" "<<repeat<<endl;
    }
    return 0;
}
