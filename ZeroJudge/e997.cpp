#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int n;
    string name,s;
    stringstream ss;
    vector<string> l;
    getline(cin,s);
    cin>>n;
    ss<<s;
    while(ss>>name)
        l.push_back(name);
    cout<<l[l.size()-n]<<endl;
    return 0;
}
