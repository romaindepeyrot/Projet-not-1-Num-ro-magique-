#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int nombre_secret = rand() % 100 + 1;
    int nombre_user = 0;

    while (nombre_user != nombre_secret) {
        printf("Choisis un nombre entre 1 et 100 : ");
        scanf("%d", &nombre_user);

        if (nombre_user == nombre_secret) {
            printf("Bravo, tu as trouvé le nombre : %d !\n", nombre_secret);
        } else if (nombre_user < nombre_secret) {
            printf("Nope, c'est plus !\n");
        } else {
            printf("Nope, c'est moins !\n");
        }
    }

    return 0;
}