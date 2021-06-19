#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


int main()
{
    int cases;
    cin>>cases;
    string tree,ignore;;
    getline(cin,ignore);
    cin.ignore();
    for(int i=0;i<cases;i++)
    {
        vector<string> species;
        vector<int> amounts;
        int total=0;
        while(getline(cin,tree))
        {
            if(tree.size()==0) break;
            total++;
            int l=0;
            for(l=0;l<species.size();l++)
            {
                if(species[l]==tree)
                {
                    amounts[l]++;
                    break;
                }
            }
            if(l==species.size())
            {
                species.push_back(tree);
                amounts.push_back(1);
            }
        }
        for(int j=0;j<species.size();j++)
        {
            for(int k=0;k<species.size();k++)
            {
                if(species[j]<species[k])
                {
                    swap(species[j],species[k]);
                    swap(amounts[j],amounts[k]);
                }
            }
        }
        for(int j=0;j<species.size();j++)
            cout<<species[j]<<" "<<fixed<<setprecision(4)<<amounts[j]/float(total)*100<<endl;
        if(i!=cases-1)
            cout<<endl;
    }
    return 0;
}