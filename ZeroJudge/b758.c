#include<stdio.h>

int main()
{
    int x,y;
	scanf("%d %d",&x,&y);
	x+=2;
	y+=30;
	if(y>=60)
	{
	    x+=y/60;
	    y%=60;
	}
	if(x>=24)
	    x-=24;
	printf("%02d:%02d\n",x,y);
	return 0;
}
