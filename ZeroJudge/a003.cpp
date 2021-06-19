#include <iostream>

using namespace std;



int main(void)

{

    int M,D,S;

    cin >> M>>D;

        S=(M*2+D)%3;

        if(S==0){

            cout << "普通" << endl;



        }

        if(S==1){

            cout << "吉" << endl;



        }

        if(S==2){

            cout << "大吉" << endl;



        }



    return 0;

}
