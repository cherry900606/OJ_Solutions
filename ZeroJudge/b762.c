#include <stdio.h>
#include <string.h>
int main()
{
    int n,kill=0,die=0,aasist=0,c=0;
    char command[10];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",command);
        if(!strcmp(command,"Get_Kill"))
        {
            c++;
            if(c<3)
                printf("You have slain an enemie.\n");
            else if(c==3)
                printf("KILLING SPREE!\n");
            else if(c==4)
                printf("RAMPAGE~\n");
            else if(c==5)
                printf("UNSTOPPABLE!\n");
            else if(c==6)
                printf("DOMINATING!\n");
            else if(c==7)
                printf("GUALIKE!\n");
            else
                printf("LEGENDARY!\n");
            kill++;
        }
        else if(!strcmp(command,"Get_Assist"))
            aasist++;
        else
        {
            if(c<3)
                printf("You have been slained.\n");
            else
                printf("SHUTDOWN.\n");
                
            die++;
            c=0;
        }
    }
    printf("%d/%d/%d\n",kill,die,aasist);
    return 0;
}
