#include <iostream>
using namespace std;



int main(){
    const int max=100;
    int i,j;
    int a[max][max];

    while(cin>>i>>j){
        for(int c=0;c<i;c++){
            for(int b=0;b<j;b++){
                cin>>a[c][b];
            }

        }
        for(int b=0;b<j;b++){
            for(int c=0;c<i;c++){
                cout<<a[c][b]<<" ";
            }
            cout << endl;
        }
    }
    return 0;
}
