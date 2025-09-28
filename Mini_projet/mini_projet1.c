#include <stdio.h>
#include <string.h>

char titles[100][50];
char authors[100][50];
float prices[100];
int quantities[100]; 
int bookCount = 0;

void addBook() {
    if (bookCount < 100) {
        printf("Veuillez entrez le titre du livre : ");
        getchar(); 
        fgets(titles[bookCount], 50, stdin);
        titles[bookCount][strcspn(titles[bookCount], "\n")] = 0; 

        printf("Veuillez entrez l\'auteur du livre : ");
        fgets(authors[bookCount], 50, stdin);
        authors[bookCount][strcspn(authors[bookCount], "\n")] = 0; 

        printf("Veuillez entrez le prix du livre : ");
        scanf("%f", &prices[bookCount]);

        printf("Veuillez entrez la quantite en stock : ");
        scanf("%d", &quantities[bookCount]);

        bookCount++;
        printf("Livre ajoute avec succes !\n");
    } else {
        printf("Stock plein, impossible d\'ajouter plus de livres.\n");
    }
}

void displayBooks() {
    if (bookCount == 0) {
        printf("Aucun livre disponible dans le stock.\n");
    } else {
        printf("\nListe des livres disponibles :\n");
        for (int i = 0; i < bookCount; i++) {
            printf("Livre %d :\n", i + 1);
            printf("  Titre : %s\n", titles[i]);
            printf("  Auteur : %s\n", authors[i]);
            printf("  Prix : %.2f\n", prices[i]);
            printf("  Quantite : %d\n", quantities[i]);
        }
    }
}

void searchBook() {
    char searchTitle[50];
    printf("Veuillez entrez le titre du livre a rechercher : ");
    getchar(); 
    fgets(searchTitle, 50, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0;

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(titles[i], searchTitle) == 0) {
            printf("Livre trouve :\n");
            printf("  Titre : %s\n", titles[i]);
            printf("  Auteur : %s\n", authors[i]);
            printf("  Prix : %.2f\n", prices[i]);
            printf("  Quantite : %d\n", quantities[i]);
            return;
        }
    }
    printf("Livre non trouve.\n");
}

void updateQuantity() {
    char updateTitle[50];
    printf("Veuillez entrez le titre du livre a mettre a jour : ");
    getchar(); 
    fgets(updateTitle, 50, stdin);
    updateTitle[strcspn(updateTitle, "\n")] = 0; 

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(titles[i], updateTitle) == 0) {
            printf("Veuillez entrez la nouvelle quantite : ");
            scanf("%d", &quantities[i]);
            printf("Quantite mise à jour avec succes !\n");
            return;
        }
    }
    printf("Livre non trouve.\n");
}

void deleteBook() {
    char deleteTitle[50];
    printf("Veuillez entrez le titre du livre à supprimer : ");
    getchar(); 
    fgets(deleteTitle, 50, stdin);
    deleteTitle[strcspn(deleteTitle, "\n")] = 0; 

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(titles[i], deleteTitle) == 0) {
            for (int j = i; j < bookCount - 1; j++) {
                strcpy(titles[j], titles[j + 1]);
                strcpy(authors[j], authors[j + 1]);
                prices[j] = prices[j + 1];
                quantities[j] = quantities[j + 1];
            }
            bookCount--;
            printf("Livre supprime avec succes !\n");
            return;
        }
    }
    printf("Livre non trouve.\n");
}

void totalBooks() {
    int total = 0;
    for (int i = 0; i < bookCount; i++) {
        total += quantities[i];
    }
    printf("Nombre total de livres en stock : %d\n", total);
}

int main() {
    int choice;
    do {
        printf("\n------------------- menu -------------------\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre a jour la quantite d\'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("7. Quitter\n");
        printf("Veuillez entrez votre choix : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                updateQuantity();
                break;
            case 5:
                deleteBook();
                break;
            case 6:
                totalBooks();
                break;
            case 7:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide, veuillez reessayer.\n");
        }
    } while (choice != 7);

    return 0;
}