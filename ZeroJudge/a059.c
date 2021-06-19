#include <stdio.h>



int main()

{

    int t,a,b;

    scanf("%d",&t);

    for(int i=0;i<t;i++)

    {

        int sum=0;

        scanf("%d %d",&a,&b);

        for(int j=1;;j++)

        {

            if(j*j<=b&&j*j>=a)

                sum+=j*j;

            else if(j*j>b)

                break;

                

        }

        printf("Case %d: %d\n",i+1,sum);

    }

    

    return 0;

}
