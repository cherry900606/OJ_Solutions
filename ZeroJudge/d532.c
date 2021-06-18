#include <stdio.h>
int main()
{
int n,m,i,flag,sum;
while(scanf("%d %d",&n,&m)!=EOF)
{
flag=0;
sum=0;
for(i=n;i<=m;i++)
{
if(i%400==0 || i%4==0 && i%100!=0 )
sum=sum+1;
}

printf("%d\n",sum);

}
}
