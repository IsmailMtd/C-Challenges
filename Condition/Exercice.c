#include <stdio.h>

int main()
{
if (note < 0 || note > 20) {
        printf("Note invalide. Veuillez entrer une note entre 0 et 20.\n");
    } else if (note <= 9) {
        printf("Échec\n");
    } else if (note <= 12) {
        printf("Passable\n");
    } else if (note <= 15) {
        printf("Assez bien\n");
    } else if (note <= 18) {
        printf("Bien\n");
    } else { // note est 19 ou 20
        printf("Excellent\n");
    }

    return 0;
}