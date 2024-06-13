#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Variabile globale per il punteggio totale
int punteggioTotale = 0;
const char* filename = "punteggio.txt";

// Funzione per leggere il punteggio dal file
void leggiPunteggio() {
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        fscanf(file, "%d", &punteggioTotale);
        fclose(file);
    }
}

// Funzione per scrivere il punteggio nel file
void scriviPunteggio() {
    FILE *file = fopen(filename, "w");
    if (file != NULL) {
        fprintf(file, "%d", punteggioTotale);
        fclose(file);
    }
}

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
    while (1) {
        scanf(" %c", &choice);
        while (getchar() != '\n'); // Pulisce il buffer dell'input
        choice = toupper(choice); // Converte l'input in maiuscolo
        if (choice == 'A' || choice == 'B') {
            break;
        } else {
            printf("Scelta non valida. Riprova: ");
        }
    }
    return choice;
}

// Funzione per ricevere la risposta dell'utente a una domanda
char getAnswer() {
    char answer;
    while (1) {
        scanf(" %c", &answer);
        while (getchar() != '\n'); // Pulisce il buffer dell'input
        answer = toupper(answer); // Converte l'input in maiuscolo
        if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
            break;
        } else {
            printf("Risposta non valida. Riprova: ");
        }
    }
    return answer;
}

// Funzione per creare una nuova partita
void startNewGame() {
    char nome[5];
    int score = 0;

  printf("Inserisci il tuo nome: ");
  scanf("%15s", nome);
  if(strlen(nome) > 5 ) {
      printf("Nome troppo lungo. Inserisci un nome fino a 5 caratteri.\n");
      // Chiamata ricorsiva per richiedere nuovamente il nome
      startNewGame();
      return;
  } 
  while (getchar() != '\n'); // Pulisce il buffer dell'input
  printf("\nCiao, %s! Vediamo la tua preparazione!\n\n", nome);
  
  

    // Domanda 1
    printf("Domanda 1: Come si chiama l'attore principale che fa Neo in Matrix?\n");
    printf("A) Brad Pitt\n");
    printf("B) Keanu Reeves\n");
    printf("C) Tom Cruise\n");
    printf("D) Brandon Lee\n");
    char risposta1 = getAnswer();
    if (risposta1 == 'B') {
        printf("La risposta è corretta\n");
        score++;
    } else {
        printf("La risposta è errata\n");
    }

    // Domanda 2
    printf("Domanda 2: Chi è Gandalf nella trilogia del Signore Degli Anelli?\n");
    printf("A) Nano\n");
    printf("B) Elfo\n");
    printf("C) Stregone\n");
    printf("D) Hobbit\n");
    char risposta2 = getAnswer();
    if (risposta2 == 'C') {
        printf("La risposta è corretta\n");
        score++;
    } else {
        printf("La risposta è errata\n");
    }

    // Domanda 3
    printf("Domanda 3: Qual è il nome di una famosa metal band italiana?\n");
    printf("A) Lacuna Coil\n");
    printf("B) Avantasia\n");
    printf("C) Iron Maiden\n");
    printf("D) Pooh\n");
    char risposta3 = getAnswer();
    if (risposta3 == 'A') {
        printf("La risposta è corretta\n");
        score++;
    } else {
        printf("La risposta è errata\n");
    }

    // Aggiorna il punteggio totale
    punteggioTotale += score;

    printf("Hai totalizzato %d punti in questa partita!\n", score);
    printf("Il tuo punteggio totale è: %d punti!\n\n", punteggioTotale);

    // Salva il punteggio totale nel file
    scriviPunteggio();
}

int main() {
    // Legge il punteggio dal file all'inizio
    leggiPunteggio();

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
                printf("Grazie per aver giocato! Arrivederci!\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }

    } while(choice != 'B');

    return 0;
}