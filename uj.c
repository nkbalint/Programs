#include <stdio.h>

int main()
{
    int szam;

    printf("Adjon meg egy sz�mot: ");
    scanf("%d",&szam);

    if (szam<0)
    {

        printf("negativ");

    }
    else if (szam>0)
    {

        printf("pozitiv");
    }
    else if(szam==0)
    {

        printf("nulla");
    }


    return 0;
}
