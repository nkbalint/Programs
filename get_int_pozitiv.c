#include <stdio.h>
int get_positive_int()
{
    int szam;
    do
    {
        scanf("%d",&szam);
        if (szam>0)
        {
            break;
        }
        else
        {
            printf("Adj meg egy uj szamot: ");
        }
    }
    while(szam<0);
    return szam;
}
int main()
{
    printf("Adj meg egy pozitiv egesz szamot\n");
    int szam= get_positive_int();
    printf("A megadott szam pozitiv: %d\n",szam);
    return 0;
}


