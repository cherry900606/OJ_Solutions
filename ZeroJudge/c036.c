#include <stdio.h>

int main()
{
    float h,u,d,f;
    while(scanf("%f %f %f %f",&h,&u,&d,&f)&&h!=0)
    {
        float cur_start=0,cur_climb=u,cur_height=u;
        int day=1,check=0;
        if(cur_height>h)
            check=1;
        cur_height-=d;
        while(cur_height>=0&&check==0)
        {
            day++;
            cur_start=cur_height;
            cur_climb-=f/100*u;
            if(cur_climb<0)
                cur_climb=0;
            cur_height=cur_start+cur_climb;
            if(cur_height>h)
            {
                check=1;
                break;
            }
            cur_height-=d;
        }
        if(check)
            printf("success on day %d\n",day);
        else
            printf("failure on day %d\n",day);
    }

    return 0;
}
