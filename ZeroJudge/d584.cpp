#include <iostream>
using namespace std;

int main()
{
    int o,lv;
    while(cin>>o>>lv)
    {
        int ex=0;
        if(o==0) ;
        else if(o==2)
        {
            if(lv>=8) ex+=1;
            if(lv>=30) ex+=1;
            if(lv>=70) ex+=1;
            if(lv>=120) ex+=3;
            ex+=(lv-8)*3;
        }
        else
        {
            if(lv>=10) ex+=1;
            if(lv>=30) ex+=1;
            if(lv>=70) ex+=1;
            if(lv>=120) ex+=3;
            ex+=(lv-10)*3;
        }
        cout<<ex<<'\n';
    }
    return 0;
}
