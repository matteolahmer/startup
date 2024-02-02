#include <stdio.h>
#include <math.h>
#include <string.h>

void docente1()
{
    char selezione = '0';

    while (selezione == '0')
    {
        printf("...\n");
        scanf(" %c", &selezione);
        if (selezione == '1')
        {
            printf("...\n");
        }
        else if (selezione == '2')
        {
            printf("...\n");
        }
        else if (selezione == '3')
        {
            printf("...\n");
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            selezione = '0';
        }
        
        
    }
}

void docentevaluta()
{
    char valuta = '0';
    while (valuta == '0')
    {
        printf("Valuta inserendo un numero da 1 a 5 quanto l'alunno è presente alla lezione.\n");
        scanf(" %c", &valuta); 
        if(valuta == '1')
        {
            printf(" ");
        }   
        else if (valuta == '2')
        {
            printf(" ");
        }
        else if (valuta == '3')
        {
            printf(" ");
        }
        else if (valuta == '4')
        {
            printf(" ");
        }
        else if (valuta == '5')
        {
            printf(" ");
        } 
        else
        {
            printf("ERRORE: Opzione non valida\n");
            valuta = '0';
        } 
    }

    
}

void docente2()
{
    char selezione = '0';

    while (selezione == '0')
    {
        printf("\nScegli opzione:\n1) Si siede sempre all'ultimo banco\n2) Si distrae con telefono o materiali non inerenti al contesto in cui si trova\n3) Altro\n\n");
        scanf(" %c", &selezione);
        if (selezione == '1')
        {
            printf("\nProva a coinvolgerlo attivamente anche se si siede all'ultimo banco\nincoraggiando domande e partecipazione.\nSe il problema persiste prova a impostare dei posti fissi\ne cambiarli ogni mese.\n");
        }
        else if (selezione == '2')
        {
            printf("\nPuoi proporre alternative coinvolgenti, come attività pratiche o discussioni.\nSe il problema persiste, ritirare i telefoni all'inizio dell'ora potrà essere di aiuto.\n");
        }
        else if (selezione == '3')
        {
            docentevaluta();
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            selezione = '0';
        }
        
        
    }
}



void docente3()
{
    char selezione = '0';

    while (selezione == '0')
    {
        printf("\nScegli opzione:\n1) Stava parlando in classe\n2) Era distratto\n3) Infastidiva la lezione\n\n");
        scanf(" %c", &selezione);
        if (selezione == '1')
        {
            printf("\nDomanda il motivo: Chiedi gentilmente se c'è qualcosa che vuole condividere o se ha domande relative all'argomento");
        }
        else if (selezione == '2')
        {
            printf("\nRichiama l'attenzione: Fermati durante la lezione e, guarda il ragazzo e aspetta silenziosamente che smetta di parlare\n");
        }
        else if (selezione == '3')
        {
            printf("\nImposta regole chiare: Riafferma le regole della classe riguardo al comportamento e alla partecipazione.\nSe il comportamento persiste, potresti considerare misure disciplinari come: detenzione del suo dispositivo elettronico o altre penalità previste dalla scuola\n");
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            selezione = '0';
        }
        
        
    }
}



int docente()
{
    char selezione = '0';
    
    while(selezione == '0')
    {
                
        printf("\nHai riscontrato qualche problema nei tuoi alunni?\n1) Si\n2) No\n\n");
        scanf(" %c", &selezione);
        
        if(selezione == '1')
        {   char selezione2 = '0';
            
            while(selezione2 == '0')
            {
                printf("\nSeleziona una delle seguenti problematiche:\n1) Disturbo dell'attenzione\n2) Poco interesse nella lezione\n3) Comportamento non consono alla lezione\n\n");
                scanf(" %c", &selezione2);

                if(selezione2 == '1')
                {
                    docente1();        
                }
                else if (selezione2 == '2')
                {
                    docente2();
                }
                else if(selezione2 == '3')
                {
                    docente3();
                }   
                else
                {
                    printf("\nERRORE: Opzione non valida\n");
                    selezione2 = '0';
                }             
            } 
        }
        else if (selezione == '2')
        {
            printf("\nSeriamente? Non ci credo nemmeno se mi paghi un bitcoin...\n");
        }
        else 
        {
            printf("\nERRORE: Opzione non valida\n");
            docente();
        }
    }

}

int studente()
{
    float x;
    float y;
    char operatore = '0';
    float quadrato;
    char selezione = '0';  
    while(selezione == '0')
    {
        printf("\nHai riscontrato qualche problema durante la lezione?\n 1) Si\n 2) No\n\n");
        scanf(" %c", &selezione); 

        if(selezione == '1')
        {
            char selezione2 = '0';
            
            while(selezione2 == '0')
            {   
                printf("\nCome possiamo esserti utili:\n1) Non riesci a capire bene ciò che il docente sta spiegando?\n2) Hai qualcosa che ti disturba durante l'orario di studio?\n3) Hai problemi con i numeri? Non riesci ad eseguire un calcolo? \n\n");
                scanf(" %c", &selezione2);

                if(selezione2 == '1')
                {
                    printf("\nProva a prendere dei buoni appunti e a fare domande per chiarire i dubbi durante la lezione.\nIn caso tu non abbia ancora compreso, chiedi al docente di avere un piccolo colloquio privato in modo tale da chiarire il tutto.\n");        
                }
                else if (selezione2 == '2')
                {
                    printf("\nIdentifica cosa ti disturba e cerca soluzioni pratiche, come utilizzare cuffie per ridurre il rumore o trovare un posto più tranquillo.\nSpegni ogni contatto con internet e usalo esclusivamente solo per ricerche oppure per ulteriori informazioni.\n");
                }
                else if(selezione2 == '3')
                {
                    while(operatore == '0')
                    {
                    printf("\nScegli l'operazione che desideri svolgere:\n");
                    printf("\n1) Somma\n");
                    printf("2) Sottrazione\n");
                    printf("3) Moltiplicazione\n");
                    printf("4) Divisione\n");
                    printf("5) Quadrato di un numero\n");
                    printf("6) Radice di un numero\n\n");
                    scanf("%c", &operatore);
                    
                    
                    if(operatore == '1')
                    {
                        printf("\nScegli il primo numero: ");
                        scanf("%f", &x);
                        printf("Scegli il secondo numero: ");
                        scanf("%f", &y);
                        printf("\nIl risultato è: %.2f\n", (x + y));
                    }
                    else if(operatore == '2')
                    {
                        printf("\nScegli il primo numero: ");
                        scanf("%f", &x);
                        printf("Scegli il secondo numero: ");
                        scanf("%f", &y);
                        printf("\nIl risultato è: %.2f\n", (x - y));
                    }
                    else if(operatore == '3')
                    {
                        printf("\nScegli il primo numero: ");
                        scanf("%f", &x);
                        printf("Scegli il secondo numero: ");
                        scanf("%f", &y);
                        printf("\nIl risultato è: %.2f\n", (x * y));
                    }
                    else if(operatore == '4')
                    {
                        printf("\nScegli il primo numero: ");
                        scanf("%f", &x);
                        printf("Scegli il secondo numero: ");
                        scanf("%f", &y);
                        printf("\nIl risultato è: %.2f\n", (x / y));
                    }
                    else if(operatore == '5')
                    {
                        printf("\nInserisci un numero: ");
                        scanf("%f", &x);
                        quadrato = x * x;
                        printf("Il cubo di %2.f è: %.2f\n", x, quadrato);
                    }
                    else if(operatore == '6')
                    {
                        printf("\nInserisci un numero: ");
                        scanf("%f", &x);
                        sqrt(x);
                        printf("La radice di %.2f è: %.2f\n", x, sqrt(x));
                    }
                    else
                    {
                        printf("Opzione non valida\n");
                        operatore = '0';
                    }
                    }

                }   
                else
                {
                    printf("\nERRORE: Opzione non valida\n");
                    selezione2 = '0';
                }             
        
            }
        }
        else if(selezione == '2')
        {
            printf("\nCosa ci fai qui allora...?\n");
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            studente();
        }

    }
}


int main()
{
    char selezione[10];

    punto1:
    printf("\nBenvenuto in EduData, seleziona un'opzione:\n1) Insegnante\n2) Studente\n\n");
    scanf(" %s", selezione);

    if(strcmp(selezione, "1") == 0)
    {
        docente();
    }
    else if (strcmp(selezione, "2") == 0)
    {
        studente();
    }
    else
    {
        printf("\nERRORE: Opzione non valida\n");
        goto punto1;
    }
    
}