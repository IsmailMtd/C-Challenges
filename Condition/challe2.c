#include <stdio.h>

int main() {
    int choix;
    int annees;
    const int JOURS_PAR_AN = 365;
    const int MOIS_PAR_AN = 12;
    const int HEURES_PAR_JOUR = 24;
    const int MINUTES_PAR_HEURE = 60;
    const int SECONDES_PAR_MINUTE = 60;

    printf("Entrez le nombre d'années à convertir : ");
    scanf("%d", &annees);

    printf("\n=== MENU DE CONVERSION ===\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Entrez votre choix (1-5) : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("%d annee(s) = %d mois\n", annees, annees * MOIS_PAR_AN);
            break;
        case 2:
            printf("%d annee(s) = %d jours\n", annees, annees * JOURS_PAR_AN);
            break;
        case 3:
            printf("%d annee(s) = %d heures\n", annees, annees * JOURS_PAR_AN * HEURES_PAR_JOUR);
            break;
        case 4:
            printf("%d annee(s) = %d minutes\n", annees, annees * JOURS_PAR_AN * HEURES_PAR_JOUR * MINUTES_PAR_HEURE);
            break;
        case 5:
            printf("%d annee(s) = %ld secondes\n", annees,
                (long)annees * JOURS_PAR_AN * HEURES_PAR_JOUR * MINUTES_PAR_HEURE * SECONDES_PAR_MINUTE);
            break;
        default:
            printf("Choix invalide. Veuillez entrer un nombre entre 1 et 5.\n");
    }

    return 0;
}
