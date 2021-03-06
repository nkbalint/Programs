/*#include <stdio.h>

int main()
{
    int n;
    printf("Adja meg a magassagot: ");
    scanf("%d", &n);
    if (n<0 || n%2==0)
    {
        printf("Hibas adatot adott meg.\n");
    }
    else
    {
        int csillagdb=1,sorszam=n/2;
        for(int i=0; i<n;++i)
        {
            int j=sorszam;
            while(j!=i)
            {
                printf(" ");
                if (i<sorszam)
                {
                    j--;
                }
                else
                {
                    j++;
                }
            }
            for(int k=0; k<csillagdb;++k)
            {
              printf("*");
            }
            printf("\n");
            if (i<sorszam)
            {
                csillagdb=csillagdb+2;
            }
            else
            {
                csillagdb=csillagdb-2;
            }
        }
    }
    return 0;
}
*/
