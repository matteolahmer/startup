#include <stdio.h>
#include <math.h>
#include <string.h>

int docente1()
{
    char selezione[10];
    int indietro;
    char indietro2[10];
    ricarica:
    printf("\nScegli un'opzione:\n1) Comunicazione aperta       6) Promozione delle abilità sociali\n2) Stabilità e routine        7) Inclusione sociale\n3) Supporto emotivo           8) Collaborazione con la scuola\n4) Coinvolgimento familiare   9) Monitoraggio costante\n5) Supporto psicologico       10) Educazione degli altri bambini\n11) Torna indietro\n\n");
    scanf(" %s", selezione);
    if (strcmp(selezione, "1") == 0)
    {
        ricarica2:
        printf("\nCrea un ambiente in cui lo studente si senta a suo agio a condividere i suoi pensieri e sentimenti.\nLa comunicazione aperta facilita la comprensione delle sue sfide.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica2;
        }
    }
    else if (strcmp(selezione, "2") == 0)
    {
        ricarica3:
        printf("\nFornisci una routine stabilita e prevedibile.\nLa coerenza e la routine possono contribuire a stabilizzare lo studente e a ridurre l'ansia legata ai cambiamenti.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica3;
        }
    }
    else if (strcmp(selezione, "3") == 0)
    {
        ricarica4:
        printf("\nOffri supporto emotivo e rassicurazioni.\nAssicuragli che i suoi sentimenti sono validi e che ci sono persone pronte ad aiutarlo.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica4;
        }
    }
    else if (strcmp(selezione, "4") == 0)
    {
        ricarica5:
        printf("\nCoinvolgi la famiglia nel processo di supporto.\nCollaborare con i genitori e gli altri membri della famiglia può contribuire a creare un ambiente di sostegno più ampio.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica5;
        }
    }
    else if (strcmp(selezione, "5") == 0)
    {
        ricarica6:
        printf("\nConsidera la consulenza o il supporto psicologico.\nUn professionista può aiutare lo studente a esplorare e affrontare le sue emozioni in modo più approfondito.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica6;
        }
    }
    else if (strcmp(selezione, "6") == 0)
    {
        ricarica7:
        printf("\nFornisci opportunità per sviluppare abilità sociali.\nAttività strutturate e giochi di gruppo possono aiutare lo studente a migliorare le intenzioni sociali.\n1) Torna indietro\n");

        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica7;
        }  
    }
    else if (strcmp(selezione, "7") == 0)
    {
        ricarica8:
        printf("\nPromuovi l'inclusione sociale. Creare un ambiente in cui lo studente si senta accettato\ne integrato può migliorare il suo senso di appartenenza.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica8;
        }
    }
    else if (strcmp(selezione, "8") == 0)
    {
        ricarica9:
        printf("\nLavora in collaborazione con gli insegnanti e il personale scolastico\nper garantire un supporto adeguato anche nell'ambito educativo.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica9;
        }
    }
    else if (strcmp(selezione, "9") == 0)
    {
        ricarica10:
        printf("\nMonitora costantemente il progresso dello studente. Essere consapevoli dei cambiamenti nei comportamenti e nelle emozioni\npuò aiutare a intevenire tempestivamente.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica10;
        }
    }
    else if (strcmp(selezione, "10") == 0)
    {
        ricarica11:
        printf("\nEduca gli altri studenti sulla condizione dell'amico. La consapevolezza e la comprensione possono promuovere un ambiente più inclusivo.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica11;
        }
    }
    else if (strcmp(selezione, "11") == 0)
    {
        indietro = 1;
        return(indietro);
    }
    
    else
    {
        printf("\nERRORE: Opzione non valida\n");
        goto ricarica;
    }
        
}

int docentevaluta()
{
    char valuta[10];
    int indietro;
    char indietro2[10];
    ricarica:
    printf("\nValuta inserendo un numero da 1 a 10 quanto l'alunno è presente durante la lezione.\n\n");
    scanf(" %s", valuta); 
    if(strcmp(valuta, "1") == 0 || strcmp(valuta, "2") == 0)
    {
        ricarica2:
        printf("\nCambia radicalmente il metodo di approccio nei confronti dei tuoi studenti, rendendoli più partecipi.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if(strcmp(indietro2, "1") == 0)
        {
            indietro = 1;
            return(indietro);
        }
        else
        {
            printf("ERRORE: Opzione non valida\n");
            goto ricarica2;
        }
    }   
    else if (strcmp(valuta, "3") == 0 || strcmp(valuta, "4") == 0)
    {
        ricarica3:
        printf("\nComunica chiaramente gli obiettivi della lezione e l'importanza della partecipazione.\nMantieni una comunicazione aperta con gli studenti per capire le loro esigenze.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if(strcmp(indietro2, "1") == 0)
        {
            indietro = 1;
            return(indietro);
        }
        else
        {
            printf("ERRORE: Opzione non valida\n");
            goto ricarica3;
        }
    }
    else if (strcmp(valuta, "5") == 0 || strcmp(valuta, "6") == 0)
    {
        ricarica4:
        printf("\nCi siamo quasi, cerca di far partecipare di più i tuoi studenti in modo tale da raggiungere una buona valutazione.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if(strcmp(indietro2, "1") == 0)
        {
            indietro = 1;
            return(indietro);
        }
        else
        {
            printf("ERRORE: Opzione non valida\n");
            goto ricarica4;
        }
    }
    else if (strcmp(valuta, "7") == 0 || strcmp(valuta, "8") == 0)
    {
        ricarica5:
        printf("\nNon male! Cerca di fornire un feedback costruttivo sugli sforzi degli studenti incoraggiandoli a migliorare.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if(strcmp(indietro2, "1") == 0)
        {
            indietro = 1;
            return(indietro);
        }
        else
        {
            printf("ERRORE: Opzione non valida\n");
            goto ricarica5;
        }
    }
    else if (strcmp(valuta, "9") == 0 || strcmp(valuta, "10") == 0)
    {
        ricarica6:
        printf("\nDirei che va tutto bene, continua così!\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if(strcmp(indietro2, "1") == 0)
        {
            indietro = 1;
            return(indietro);
        }
        else
        {
            printf("ERRORE: Opzione non valida\n");
            goto ricarica6;
        }
    } 
    else
    {
        printf("ERRORE: Opzione non valida\n");
        goto ricarica;
    } 
    
}

int docente2()
{
    char selezione[10];
    int indietro;
    char indietro2[10];
    ricarica:
    printf("\nScegli opzione:\n1) Si siede sempre all'ultimo banco\n2) Si distrae con telefono o materiali non inerenti al contesto in cui si trova\n3) Altro\n4) Torna indietro\n\n");
    scanf(" %s", selezione);
    if (strcmp(selezione, "1") == 0)
    {
        ricarica2:
        printf("\nProva a coinvolgerlo attivamente anche se si siede all'ultimo banco, incoraggiando domande e partecipazione.\nSe il problema persiste prova a impostare dei posti fissi e a cambiarli ogni mese.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if(strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("ERRORE: Opzione non valida\n");
            goto ricarica2;            
        }
    }
    else if (strcmp(selezione, "2") == 0)
    {
        ricarica3:
        printf("\nPuoi proporre alternative coinvolgenti, come attività pratiche o discussioni.\nSe il problema persiste, ritirare i telefoni all'inizio dell'ora potrà essere di aiuto.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if(strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("ERRORE: Opzione non valida\n");
            goto ricarica3;            
        }
    }
    else if (strcmp(selezione, "3") == 0)
    {
        ricarica4:
        if (docentevaluta() == 1)
        {
            goto ricarica;
        }
        else
        {
            printf("ERRORE: Opzione non valida\n");
            goto ricarica4;            
        }
    }
    else if (strcmp(selezione, "4") == 0)
    {
        indietro = 1;
        return(indietro);
    }
    
    else
    {
        printf("\nERRORE: Opzione non valida\n");
        goto ricarica;
    }
}



int docente3()
{
    char selezione[10];
    int indietro;
    char indietro2[10];
    ricarica:
    printf("\nScegli opzione:\n1) Stava parlando in classe\n2) Era distratto\n3) Infastidiva la lezione\n4) Torna indietro\n\n");
    scanf(" %s", selezione);
    if (strcmp(selezione, "1") == 0)
    {
        ricarica2:
        printf("\nDomanda il motivo: Chiedi gentilmente se c'è qualcosa che vuole condividere o se ha domande relative all'argomento.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica2;
        }
    }
    else if (strcmp(selezione, "2") == 0)
    {
        ricarica3:
        printf("\nRichiama l'attenzione: Fermati durante la lezione, guarda il ragazzo e aspetta silenziosamente che smetta di parlare.\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica3;
        }
    }
    else if (strcmp(selezione, "3") == 0)
    {
        ricarica4:
        printf("\nImposta regole chiare: Riafferma le regole della classe riguardo al comportamento e alla partecipazione.\nSe il comportamento persiste, potresti considerare misure disciplinari come: detenzione del suo dispositivo elettronico o altre penalità previste dalla scuola\n1) Torna indietro\n");
        scanf(" %s", indietro2);
        if (strcmp(indietro2, "1") == 0)
        {
            goto ricarica;
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica4;
        }
    }
    else if (strcmp(selezione, "4") == 0)
    {
        indietro = 1;
        return(indietro);
    }
    else
    {
        printf("\nERRORE: Opzione non valida\n");
        goto ricarica;
    }
}



int docente()
{
    char selezione[10];
    int riavviodoc;
    char riavvio2[10];
    ricarica:               
    printf("\nHai riscontrato qualche problema nei tuoi alunni?\n1) Si\n2) No\n3) Torna indietro\n\n");
    scanf(" %s", selezione);
    if(strcmp(selezione, "3") == 0)
    {
        riavviodoc = 1;
        return(riavviodoc);
    }
    if(strcmp(selezione, "1") == 0)
    {   char selezione2[10];
        ricarica2:
        printf("\nSeleziona una delle seguenti problematiche:\n1) Difficoltà di adattamento\n2) Poco interesse nella lezione\n3) Comportamento non consono alla lezione\n4) Torna indietro\n\n");
        scanf(" %s", selezione2);

        if(strcmp(selezione2, "1") == 0)
        {
            if (docente1() == 1);
            goto ricarica2;       
        }
        else if (strcmp(selezione2, "2") == 0)
        {
            if (docente2() == 1);
            goto ricarica2;  
        }
        else if(strcmp(selezione2, "3") == 0)
        {
            if (docente3() == 1);
            goto ricarica2;  
        }  
        else if (strcmp(selezione2, "4") == 0)
        {
            goto ricarica;
        }        
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica2;
        }             
    }
    else if (strcmp(selezione, "2") == 0)
    {
        ricarica3:
        printf("\nNon so come poterti aiutare.\n1) Riavvio\n");
        scanf(" %s", riavvio2);
        if (strcmp(riavvio2, "1") == 0)
        {
            riavviodoc = 1;
            return(riavviodoc);
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica3;
        }
    }
    else 
    {
        printf("\nERRORE: Opzione non valida\n");
        goto ricarica;
    }

}

int studente()
{
    float x;
    float y;
    char operatore[10];
    float quadrato;
    char selezione[10];
    int riavvio;
    char indietro[10];
    char riavvio2[10];
    ricarica:
    printf("\nHai riscontrato qualche problema durante la lezione?\n1) Si\n2) No\n3) Torna indietro\n\n");
    scanf(" %s", selezione); 

    
    if (strcmp(selezione, "3") == 0)
    {
        riavvio = 1;
        return(riavvio);
    }
    else if(strcmp(selezione, "1") == 0)
    {
        char selezione2[10];
            ricarica2:
            printf("\nCome possiamo esserti utili:\n1) Non riesci a capire bene ciò che il docente sta spiegando?\n2) Hai qualcosa che ti disturba durante l'orario di studio?\n3) Hai problemi con i numeri? Non riesci ad eseguire un calcolo?\n4) Torna indietro \n\n");
            scanf(" %s", selezione2);

            if (strcmp(selezione2, "4") == 0)
            {
                goto ricarica;
            }
            else if(strcmp(selezione2, "1") == 0)
            {
                ricarica6:
                printf("\nProva a prendere dei buoni appunti e a fare domande per chiarire i dubbi durante la lezione.\nIn caso tu non abbia ancora compreso, chiedi al docente di avere un piccolo colloquio privato in modo tale da chiarire il tutto.\n1) Torna indietro\n");
                scanf(" %s", indietro);
                if (strcmp(indietro, "1") == 0)
                {
                    goto ricarica2;
                }
                else
                {
                    printf("\nERRORE: Opzione non valida\n");
                    goto ricarica6;
                } 
            }
            else if (strcmp(selezione2, "2") == 0)
            {
                ricarica7:
                printf("\nIdentifica cosa ti disturba e cerca soluzioni pratiche, come utilizzare cuffie per ridurre il rumore o trovare un posto più tranquillo.\nSpegni ogni contatto con internet e usalo esclusivamente solo per ricerche oppure per ulteriori informazioni.\n1) Torna indietro\n");
                scanf(" %s", indietro);
                if (strcmp(indietro, "1") == 0)
                {
                    goto ricarica2;
                }
                else
                {
                    printf("\nERRORE: Opzione non valida\n");
                    goto ricarica7;
                } 
            }
            else if(strcmp(selezione2, "3") == 0)
            {
                ricarica3:
                printf("\nScegli l'operazione che desideri svolgere:\n");
                printf("\n1) Somma\n");
                printf("2) Sottrazione\n");
                printf("3) Moltiplicazione\n");
                printf("4) Divisione\n");
                printf("5) Quadrato di un numero\n");
                printf("6) Radice di un numero\n\n");
                scanf("%s", operatore);
                
                
                if(strcmp(operatore, "1") == 0)
                {
                    printf("\nScegli il primo numero: ");
                    scanf("%f", &x);
                    printf("Scegli il secondo numero: ");
                    scanf("%f", &y);
                    ricarica8:
                    printf("\nIl risultato è: %.2f\n1) Riavvio\n\n", (x + y));
                    scanf(" %s", riavvio2);
                    if (strcmp(riavvio2, "1") == 0)
                    {
                        riavvio = 1;
                        return(riavvio);
                    }
                    else
                    {
                        printf("\nERRORE: Opzione non valida\n");
                        goto ricarica8;
                    } 
                }
                else if(strcmp(operatore, "2") == 0)
                {
                    printf("\nScegli il primo numero: ");
                    scanf("%f", &x);
                    printf("Scegli il secondo numero: ");
                    scanf("%f", &y);
                    ricarica9:
                    printf("\nIl risultato è: %.2f\n1) Riavvio\n\n", (x - y));
                    scanf(" %s", riavvio2);
                    if (strcmp(riavvio2, "1") == 0)
                    {
                        riavvio = 1;
                        return(riavvio);
                    }
                    else
                    {
                        printf("\nERRORE: Opzione non valida\n");
                        goto ricarica9;
                    } 
                }
                else if(strcmp(operatore, "3") == 0)
                {
                    printf("\nScegli il primo numero: ");
                    scanf("%f", &x);
                    printf("Scegli il secondo numero: ");
                    scanf("%f", &y);
                    ricarica10:
                    printf("\nIl risultato è: %.2f\n1) Riavvio\n\n", (x * y));
                    scanf(" %s", riavvio2);
                    if (strcmp(riavvio2, "1") == 0)
                    {
                        riavvio = 1;
                        return(riavvio);
                    }
                    else
                    {
                        printf("\nERRORE: Opzione non valida\n");
                        goto ricarica10;
                    } 
                }
                else if(strcmp(operatore, "4") == 0)
                {
                    printf("\nScegli il primo numero: ");
                    scanf("%f", &x);
                    printf("Scegli il secondo numero: ");
                    scanf("%f", &y);
                    ricarica11:
                    printf("\nIl risultato è: %.2f\n1) Riavvio\n\n", (x / y));
                    scanf(" %s", riavvio2);
                    if (strcmp(riavvio2, "1") == 0)
                    {
                        riavvio = 1;
                        return(riavvio);
                    }
                    else
                    {
                        printf("\nERRORE: Opzione non valida\n");
                        goto ricarica11;
                    } 
                }
                else if(strcmp(operatore, "5") == 0)
                {
                    printf("\nInserisci un numero: ");
                    scanf("%f", &x);
                    quadrato = x * x;
                    ricarica12:
                    printf("Il cubo di %2.f è: %.2f\n1) Riavvio\n\n", x, quadrato);
                    scanf(" %s", riavvio2);
                    if (strcmp(riavvio2, "1") == 0)
                    {
                        riavvio = 1;
                        return(riavvio);
                    }
                    else
                    {
                        printf("\nERRORE: Opzione non valida\n");
                        goto ricarica12;
                    } 
                }
                else if(strcmp(operatore, "6") == 0)
                {
                    printf("\nInserisci un numero: ");
                    scanf("%f", &x);
                    sqrt(x);
                    ricarica13:
                    printf("La radice di %.2f è: %.2f\n1) Riavvio\n\n", x, sqrt(x));
                    scanf(" %s", riavvio2);
                    if (strcmp(riavvio2, "1") == 0)
                    {
                        riavvio = 1;
                        return(riavvio);
                    }
                    else
                    {
                        printf("\nERRORE: Opzione non valida\n");
                        goto ricarica13;
                    } 
                }
                else
                {
                    printf("Opzione non valida\n");
                    goto ricarica3;
                }

            }   
            else
            {
                printf("\nERRORE: Opzione non valida\n");
                goto ricarica2;
            }             
    }
    else if(strcmp(selezione, "2") == 0)
    {
        ricarica4:
        printf("\nNon so come poterti aiutare.\n1) Riavvia\n\n");
        scanf(" %s", riavvio2);
        if (strcmp(riavvio2, "1") == 0)
        {
            riavvio = 1;
            return(riavvio);
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            goto ricarica4;
        }

    }
    else
    {
        printf("\nERRORE: Opzione non valida\n");
        goto ricarica;
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
        if (docente() == 1)
        {
            goto punto1;
        }
    }
    else if (strcmp(selezione, "2") == 0)
    {
        if (studente() == 1)
        {
            goto punto1;
        }
    }
    else
    {
        printf("\nERRORE: Opzione non valida\n");
        goto punto1;
    }
    
}