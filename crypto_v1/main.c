#include <stdio.h>
#include <stdlib.h>

//PROTOTYPES
void cesar_crypt (int decallage, char *texte);
void cesar_decrypt (int decallage, char *texte);
void menu();

//PROGRAMME PRINCIPALE
int main()
{
    //VARIABLES
    char phrase[26];
    int decalage;
    int choix;

    printf("=== CRYPTO V1 ===\n");

    do
    {
        menu();
        printf("Votre choix ? ");
        scanf("%d", &choix);
        switch (choix)
        {
            case 1:

                do
                {
                    printf("\nquel est le decalage a utilise(1-25): ");
                    scanf("%d", &decalage);
                }

                while(decalage < 1 || decalage > 25); //CONTROLE DE SAISIE

                printf("\nsaisir le mot a chiffrer(a-z): ");
                scanf("%s", phrase);

                cesar_crypt(decalage, phrase);

                printf("Le mot chiffrer est: %s\n\n", phrase);
                break;

            case 2:
                do
                {
                    printf("\nquel est le decalage utilise(1-25): ");
                    scanf("%d", &decalage);
                }

                while(decalage < 1 || decalage > 25); //CONTROLE DE SAISIE

                printf("saisir le mot a dechiffrer(a-z): ");
                scanf("%s", phrase);

                cesar_decrypt(decalage, phrase);

                printf("Le mot dechiffrer est: %s\n\n", phrase);
                break;

            case 3:
                printf("Bye bye");

        }
    } while (choix != 3);
    return 0;
}

//PROCEDURE DE CRYPTAGE
void cesar_crypt (int decallage, char *texte)
{
    int i;
    for(i=0 ; i<strlen(texte) ; i++)
        //SI LE CARACTERE EST UNE LETTRE MINUSCULE
        if ('a' <= texte[i] && texte[i] <= 'z')
            texte[i] = 'a' + ((texte[i] - 'a') + decallage)%26;
        //SI LE CARACTERE EST "%"
        else if ('%' == texte[i])
            texte[i] = ' ';

}

//PROCEDURE DE DECRYPTAGE
void cesar_decrypt (int decallage, char *texte)
{
    int i;
    for(i=0 ; i<strlen(texte) ; i++)
        if ('a' <= texte[i] && texte[i] <= 'z')
            texte[i] = 'z' + ((texte[i] - 'z') - decallage)%26;
        else if ('%' == texte[i])
            texte[i] = ' ';
}

//PROCEDURE POUR AFFICHER UN MENU
void menu()
{
        printf("\n=== Menu === :\n");
        printf("1 : Chiffrer\n");
        printf("2 : Dechiffrer\n");
        printf("3 : Quitter\n");
}
