#include <stdio.h>

int docente()
{
    char selezione = '0';
    
    while(selezione == '0')
    {
                
        printf("\nHai riscontrato qualche problema nei tuoi alunni?\n1) Si\n2) No\n");
        scanf(" %c", &selezione);
        
        if(selezione == '1')
        {   char selezione2 = '0';
            
            while(selezione2 == '0')
            {
                printf("\nSeleziona una delle seguenti problematiche:\n1) Disturbo dell'attenzione\n2) Poco interesse nella lezione\n3) Comportamento non consono alla lezione\n");
                scanf(" %c", &selezione2);

                if(selezione2 == '1')
                {
                    printf("test\n");        
                }
                else if (selezione2 == '2')
                {
                    printf("ciao\n");
                }
                else if(selezione2 == '3')
                {
                    printf("Boo\n");
                }   
                else
                {
                    printf("\n\n\n\n\n\n\n\nOpzione non valida\n");
                    selezione2 = '0';
                }             
            }
            
        }
        else if (selezione == '2')
        {
            printf("\nSeriamente? Si reputi miracolata allora...\n");
        }
        else 
        {
            printf("\n\n\n\n\n\n\n\nOpzione non valida\n");
            docente();
        }
    }

}

int studente()
{
    char selezione = '0';    
    while(selezione == '0')
    {
        printf("Hai riscontrato qualche problema durante la lezione?\n 1) Si\n 2) No\n");
        scanf(" %c", &selezione); 
        printf("a");
    }
}


int main()
{
    char selezione = '0';

    while(selezione == '0')
    {
        printf("\nBenvenuto in EduData, seleziona un'opzione:\n1) Insegnante\n2) Studente\n");
        scanf(" %c", &selezione);       
        if(selezione == '1')
        {
            docente();
        }
        else if (selezione == '2')
        {
            studente();
        }
        else
        {
            printf("\n\n\n\n\n\n\n\nERRORE: Opzione non valida\n");
            selezione = '0';
        }
    }  
}
