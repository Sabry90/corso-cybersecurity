#include <stdio.h>
#include <ctype.h>

// Funzione per stampare l'introduzione del gioco
void printIntro() {
    printf("Benvenuto!\n");
    printf("Ti propongo una serie di domande\n\n");
    printf("Rispondi correttamente alle domande per guadagnare punti!\n\n");
}

// Funzione per stampare il menu iniziale
void printMenu() {
    printf("Scegli cosa vuoi fare:\n");
    printf("A) Iniziare una nuova partita\n");
    printf("B) Uscire dal gioco\n");
}

// Funzione per ricevere l'input dell'utente
char getChoice() {
    char choice;
    scanf(" %c", &choice);
    while (getchar() != '\n'); // Pulisce il buffer dell'input
    return toupper(choice); // Converte l'input in maiuscolo
}

// Funzione per creare una nuova partita
void startNewGame() {
    char nome[50];
    int score = 0;

    printf("Inserisci il tuo nome: ");
    scanf("%49s", nome);
    while (getchar() != '\n'); // Pulisce il buffer dell'input
    printf("\nCiao, %s! Vediamo la tua preparazione!\n\n", nome);

    // Domanda 1
    printf("Domanda 1: Come si chiama l attore principale che fa Neo in Matrix?\n");
    printf("A) Brad Pitt\n");
    printf("B) Keanu Reeves\n");
    printf("C) Tom Cruise\n");
    printf("D) Brandon Lee\n");
    char risposta1;
    scanf(" %c", &risposta1);
    while (getchar() != '\n'); // Pulisce il buffer dell'input
    if (toupper(risposta1) == 'B') {
         printf("La risposta è corretta\n");
        score++;
    } else {
        printf("La risposta è errata\n");
    }

    // Domanda 2
    printf("Domanda 2: Chi e Gandalf nella trilogia del Signore Degli Anelli?\n");
    printf("A) Nano\n");
    printf("B) Elfo\n");
    printf("C) Stregone\n");
    printf("D) Hobbit\n");
    char risposta2;
    scanf(" %c", &risposta2);
    while (getchar() != '\n'); // Pulisce il buffer dell'input
    if (toupper(risposta2) == 'C') {
        printf("La risposta è corretta\n");
        score++;
    } else {
        printf("La risposta è errata\n");
    }

    // Domanda 3
printf("Domanda 3: qual e il nome del gruppo di una famosa metal band italiana? \n");
    printf("A) Lacuna Coil\n");
    printf("B) Avantasia\n");
    printf("C) Iron Maiden\n");
    printf("D) Pooh\n");
    char risposta3;
    scanf(" %c", &risposta3);
    while (getchar() != '\n'); // Pulisce il buffer dell'input
    if (toupper(risposta3) == 'A') {
        printf("La risposta è corretta\n");
        score++;
    } else {
        printf("La risposta è errata\n");
    }

    printf("Hai totalizzato %d punti!\n\n", score);
}

int main() {
    printIntro();
    char choice;

    do {
        printMenu();
        choice = getChoice();

        switch(choice) {
            case 'A':
                startNewGame();
                break;
            case 'B':
                printf("Grazie per aver giocato! Arrivederci! \n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }

    } while(choice != 'B');

    return 0;
}








