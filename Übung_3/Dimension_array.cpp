#include <stdio.h>

int main()
{
    int Sudoko [9] [9] {{0}};
    
    int i = 0;
    int k = 0;

    for(i = 0; i < 9; i++)
    {
        for(k = 0; k < 9; k++)
        {
            printf("Zeile: %d, Spalte %d, Inhalt: %d\n",i, k, Sudoko[i][k]);
        }
        printf("\n");
    }

}