#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int count=0;
    string s,word,tmp;
    getline(cin,word);
    getline(cin,s);
    for(int i=0;i<word.size();i++)
        word[i]=tolower(word[i]);
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    stringstream ss(s);
    while(ss>>tmp)
    {
        if(tmp==word)
            count++;
    }
    word=' '+word+' ';
    s=' '+s+' ';
    if(s.find(word)!=string::npos) cout<<count<<" "<<s.find(word)<<endl;
    else cout<<-1<<endl;
    return 0;
}
