#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    char ans[t+1],temp;
    scanf("%s",ans);
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        int score=0,i=0;
        while((temp=getchar())!='\n'&&temp!=EOF)
        {
            if(i<t&&temp==ans[i])
                score+=100/t;
            i++;
        }
        printf("%d\n",score);
    }
    return 0;
}
