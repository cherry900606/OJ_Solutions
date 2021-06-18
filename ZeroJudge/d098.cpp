#include <iostream>
#include <sstream>
#include <string>
using namespace std;
bool isalldigit(string str)
{
    for(int i=0;i<str.size();i++)
    {
        if(!isdigit(str[i]))
            return false;
    }
    return true;
}
int main()
{
    string s1,word;

    while(getline(cin,s1))
    {
        int sum=0,temp=0;
        stringstream ss(s1);
        while(ss >> word)
        {
            
            if(isalldigit(word))
            {
                stringstream st(word);
                st>>temp;
                sum+=temp;
            }
                
        }
        cout<<sum<<endl;
    }
    return 0;
}
