#include <stdio.h>

int main()
{
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d %d %d\n",a[0],a[1],a[2]);
    if(a[0]+a[1]<a[2]||a[0]+a[1]==a[2])
        printf("No\n");
    else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2])
        printf("Obtuse\n");
    else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
        printf("Right\n");
    else if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2])
        printf("Acute\n");
    return 0;
}
