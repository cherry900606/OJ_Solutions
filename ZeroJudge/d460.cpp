#include <iostream>
using namespace std;

int main()
{
   int a;
   cin>>a;
   if(a<=5)
        cout<<"0"<<endl;
   else if(6<=a && a<=11)
        cout<<"590"<<endl;
   else if(12<=a && a<=17)
        cout<<"790"<<endl;
   else if(18<=a && a<=59)
        cout<<"890"<<endl;
   else if(a>=60)
        cout<<"399"<<endl;


    return 0;
}
