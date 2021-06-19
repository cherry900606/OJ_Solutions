#include<stdio.h>



int main()

{

    char id[10];

    int n[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};

    int check;

    while(scanf("%s",id)!=EOF)

    {

        check=n[id[0]-65]/10+n[id[0]-65]%10*9;

        for(int i=1;i<9;i++)

            check+=(id[i]-48)*(9-i);

        check+=id[9]-48;

        if(check%10==0)

            printf("real\n");

        else

            printf("fake\n");

    }

    return 0;

}
