#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    char c;
    string line,s;
    int count=0;
    while((c=getchar())!=EOF)
    {
        if(isalnum(c))
            line+=c;
        else if(c==' '||c=='\n')
            line+=' ';
    }
    stringstream ss(line);
    while(ss>>s)
        count++;
    cout<<count<<endl;
    return 0;
}
