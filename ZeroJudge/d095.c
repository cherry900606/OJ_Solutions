#include <stdio.h>

int main()
{
    float h,m;
    while(1)
    {
        float dh=0,dm=0,ans;
        scanf("%f:%f",&h,&m);
        if(h==0&&m==0)
            break;
        dh=h*30+m/12*6;
        dm=m*6;
        ans=dh-dm;
        if(ans>0)
        {
            if(ans<=180)
                printf("%.3f\n",ans);
            else
                printf("%.3f\n",360-ans);
        }
        else
        {
            ans*=-1;
            if(ans<=180)
                printf("%.3f\n",ans);
            else
                printf("%.3f\n",360-ans);
        }
    }
    return 0;
}
