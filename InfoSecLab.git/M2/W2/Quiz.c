#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//inserito "stdlib.h" in quanto header file all'interno della libreria standard di C 
///dichiara funzioni e costanti di utilità generale: 
//allocazione della memoria, controllo dei processi, e altre funzioni generali comprendenti anche i tipi di dato.
//time.h header file della libreria di C e fornisce un accesso standardizzato alle funzioni di acquisizione e manipolazione
// del tempo.

//typedef ci permette di utilizzare un alias ovvero un sinonimo di un tipo esistente o dichiarato dall'utente. In altre parole serve a dare un nome a un tipo di dato.

// Struttura per le domande e risposte
typedef struct {
    char domanda[200];
    char risposta1[50];
    char risposta2[50];
    char risposta3[50];
    int rispostaCorretta;
} Domanda;

//lo strand imposta il punto di partenza per la creazione di una serie di numero pseudo casuali, 
//in modo che ad ogni esecuzione generi il punteggio assegnato all'utente per domanda.

int main() {
    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Inizializza il punteggio
    int punteggio = 0;

    // Array di domande
    Domanda domande[] = {
        {"Chi era il faraone dell'Antico Egitto?", "Tutankhamon", "Cleopatra", "Ramses II", 1},
        {"Qual è la capitale dell'Impero Romano?", "Atene", "Roma", "Cartagine", 2},
        {"Quale civiltà ha costruito le piramidi?", "Sumeri", "Babilonesi", "Egizi", 3}
    };

    int numDomande = sizeof(domande) / sizeof(Domanda);

    printf("Benvenuto al gioco di storia antica!\n");

//nel primo ciclo la funzione DO esegue le istruzioni racchiuse tra le parentesi graffe,
//indipendentemente dall'espressione di controllo. Al termine del primo ciclo la funzione WHILE
//verifica se l'espressione di controllo è vera. Se l'espressione è vera, la funzione DO
// esegue il blocco di istruzioni tra le parentesi graffe per il secondo ciclo e così via.

    char scelta;
    do {
        printf("\nMenu:\n");
        printf("A) Inizia una nuova partita\n");
        printf("B) Esci dal gioco\n");
        printf("Scelta: ");
        scanf(" %c", &scelta);

      char nome[50]; // Dichiarazione di una stringa per il nome (massimo 50 caratteri)

      printf("Inserisci il tuo nome: ");
      scanf("%s", nome); // Legge il nome inserito dall'utente

      printf("Ciao, %s! Benvenuto!\n", nome);

//con IF indichiamo al programma che se l'utente sceglie la lettera A gli verrà assegnato, tramite for, 1 punto. Con else indichiamo la scritta che dovrà
//apprire all'utente se sbaglia la risposta.

        if (scelta == 'A' || scelta == 'a') {
            for (int i = 0; i < numDomande; i++) {
                printf("\nDomanda %d:\n%s\n1) %s\n2) %s\n3) %s\n", i + 1, domande[i].domanda,
                       domande[i].risposta1, domande[i].risposta2, domande[i].risposta3);

                int rispostaUtente;
                printf("Risposta (1/2/3): ");
                scanf("%d", &rispostaUtente);

                if (rispostaUtente == domande[i].rispostaCorretta) {
                    printf("Risposta corretta!\n");
                    punteggio++;
                } else {
                    printf("Risposta errata. La risposta corretta era %d.\n", domande[i].rispostaCorretta);
                }
            }

            printf("\nPunteggio totale: %d/%d\n", punteggio, numDomande);
        } else if (scelta != 'B' && scelta != 'b') {
            printf("Selezionare una delle 2 voci possibili (A o B).\n");
        }
    } while (scelta != 'B' && scelta != 'b');

    printf("Grazie per aver giocato!\n");

    return 0;
}