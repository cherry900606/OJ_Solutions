#include <stdio.h>

int main()
{
    double list[277],c=0;
    for(int i=1;i<=276;i++)
    {
        c+=1.0/(i+1);
        list[i]=c;
    }
    while(scanf("%lf",&c)!=EOF)
    {
        for(int i=1;i<=276;i++)
        {
            if(list[i]+1e-6>=c)
            {
                printf("%d card(s)\n",i);
                break;
            }
        }
    }
	return 0;
}
