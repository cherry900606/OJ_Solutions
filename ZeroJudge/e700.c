#include <stdio.h>

int main()
{
    int mm,dd;
    while(scanf("%d/%d",&mm,&dd)!=EOF)
    {
        if((mm==1&&dd>=21)||(mm==2&&dd<=19))
            printf("���~�y\n");
        else if((mm==2&&dd>=20)||(mm==3&&dd<=20))
            printf("�����y\n");
        else if((mm==3&&dd>=21)||(mm==4&&dd<=20))
            printf("�d�Ϯy\n");
        else if((mm==4&&dd>=21)||(mm==5&&dd<=21))
            printf("�����y\n");
        else if((mm==5&&dd>=22)||(mm==6&&dd<=21))
            printf("���l�y\n");
        else if((mm==6&&dd>=22)||(mm==7&&dd<=22))
            printf("���ɮy\n");    
        else if((mm==7&&dd>=23)||(mm==8&&dd<=21))
            printf("��l�y\n");
        else if((mm==8&&dd>=22)||(mm==9&&dd<=23))
            printf("�B�k�y\n");
        else if((mm==9&&dd>=24)||(mm==10&&dd<=23))
            printf("�ѯ��y\n");
        else if((mm==10&&dd>=24)||(mm==11&&dd<=22))
            printf("���Ȯy\n");
        else if((mm==11&&dd>=23)||(mm==12&&dd<=22))
            printf("�g��y\n");
        else
            printf("���~�y\n");
    }
    return 0;
}
