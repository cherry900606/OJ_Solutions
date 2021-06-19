#include <iostream>

using namespace std;



int main(){

int a,n;

n=0;

cin >> a;

while(a!=0){

  n=10*n+a%10;

  a=a/10;

}

cout << n << endl;

return 0;

}
