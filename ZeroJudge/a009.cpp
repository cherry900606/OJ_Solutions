#include<iostream>

#include<string.h>

using namespace std;



int main()

{

    int len;

    char code[100];

    while(cin>>code)

    {

        len=strlen(code);

        for(int i=0; i<len; i++)

        {

            code[i]-=7;;

        }

        for(int i=0; i<len; i++)

        {

            cout<<code[i];

        }

        cout<<endl;

    }



    return 0;

}
