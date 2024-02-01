#include <stdio.h>
#include <unistd.h>

int a()
{
    printf("test1\n");
}

int b()
{
    printf("test2\n");
}


int main()
{
    char selezione = '0';

    while(selezione == '0')
    {
        printf("\nBenvenuto nella startup... Seleziona un'opzione:\n1) Studente\n2) Insegnante\n");
        scanf(" %c", &selezione);       
        if(selezione == '1')
        {
            a();
        }
        else if (selezione == '2')
        {
            b();
        }
        else
        {
            printf("\n\n\n\n\n\nERRORE: Opzione non valida\n");
            selezione = '0';
        }
    }
    
}