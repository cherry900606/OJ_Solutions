#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    string s,ignore;
    vector<string> country;
    vector<int> times;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>s;
            cin.ignore();
            getline(cin,ignore);
            if(find(country.begin(),country.end(),s)==country.end()) 
                country.push_back(s),times.push_back(1);
            else
            {
                int l=0;
                for(auto it:country)
                {
                    if(it==s)
                        break;
                    l++;
                }
                times[l]++;
            }
        }
        for(int i=0;i<country.size();i++)
        {
            for(int j=0;j<country.size();j++)
            {
                if(country[i]<country[j])
                {
                    swap(country[i],country[j]);
                    swap(times[i],times[j]);
                }
            }
        }
        for(int i=0;i<country.size();i++)
            cout<<country[i]<<" "<<times[i]<<endl;
    }
    return 0;
}
