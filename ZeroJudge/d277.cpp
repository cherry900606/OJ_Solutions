#include<iostream>
using namespace std;

int main()
{
   int a;
   while(cin>>a)
      {
      cout<<a-(a%2==1)<<endl;
      }
   //system("pause");
   return 0;
}
