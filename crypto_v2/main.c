#include <stdio.h>
#include <stdlib.h>

//PROTOTYPES
void cesar_crypt (char *texte);
void cesar_decrypt (char *texte);
void menu();

//FONCTION PRINCIPALE
int main()
{
    //VARIABLES
    char phrase[26];
    int choix;

    printf("=== CRYPTO V2 ===\n");

    do
    {
        menu();
        printf("Votre choix ? ");
        scanf("%d", &choix);
        switch (choix)
        {
            case 1:

                printf("\nsaisir le mot a chiffrer(A-Z): ");
                scanf("%s", phrase);
                cesar_crypt(phrase);
                printf("Le mot chiffrer est: %s\n\n", phrase);
                break;

            case 2:
                printf("saisir le mot a dechiffrer(A-Z): ");
                scanf("%s", phrase);
                cesar_decrypt(phrase);
                printf("Le mot dechiffrer est: %s\n\n", phrase);
                break;

            case 3:
                printf("Bye bye");
        }
    } while (choix != 3);
}

//PROCEDURE DE CRYPTAGE
void cesar_crypt (char *texte)
{
    char alphabetC[26]={'A','Z','E','R','T','Y','U','I','O','P','Q','S','D','F','G','H','J','K','L','M','W','X','C','V','B','N'};
    int i;
    for(i=0 ; i<strlen(texte) ; i++)
    {
        switch (texte[i])
        {
            case 'A':
                texte[i]=alphabetC[0];
                break;
            case 'B':
                texte[i]=alphabetC[1];
                break;
            case 'C':
                texte[i]=alphabetC[2];
                break;
            case 'D':
                texte[i]=alphabetC[3];
                break;
            case 'E':
                texte[i]=alphabetC[4];
                break;
            case 'F':
                texte[i]=alphabetC[5];
                break;
            case 'G':
                texte[i]=alphabetC[6];
                break;
            case 'H':
                texte[i]=alphabetC[7];
                break;
            case 'I':
                texte[i]=alphabetC[8];
                break;
            case 'J':
                texte[i]=alphabetC[9];
                break;
            case 'K':
                texte[i]=alphabetC[10];
                break;
            case 'L':
                texte[i]=alphabetC[11];
                break;
            case 'M':
                texte[i]=alphabetC[12];
                break;
            case 'N':
                texte[i]=alphabetC[13];
                break;
            case 'O':
                texte[i]=alphabetC[14];
                break;
            case 'P':
                texte[i]=alphabetC[15];
                break;
            case 'Q':
                texte[i]=alphabetC[16];
                break;
            case 'R':
                texte[i]=alphabetC[17];
                break;
            case 'S':
                texte[i]=alphabetC[18];
                break;
            case 'T':
                texte[i]=alphabetC[19];
                break;
            case 'U':
                texte[i]=alphabetC[20];
                break;
            case 'V':
                texte[i]=alphabetC[21];
                break;
            case 'W':
                texte[i]=alphabetC[22];
                break;
            case 'X':
                texte[i]=alphabetC[23];
                break;
            case 'Y':
                texte[i]=alphabetC[24];
                break;
            case 'Z':
                texte[i]=alphabetC[25];
                break;
            case '%':
                texte[i]=' ';
        }
    }
}

//PROCEDURE DE DECRYPTAGE
void cesar_decrypt (char *texte)
{
    int i;
    for(i=0 ; i<strlen(texte) ; i++)
    {
        switch (texte[i])
        {
            case 'A':
                texte[i]='A';
                break;
            case 'B':
                texte[i]='Y';
                break;
            case 'C':
                texte[i]='W';
                break;
            case 'D':
                texte[i]='M';
                break;
            case 'E':
                texte[i]='C';
                break;
            case 'F':
                texte[i]='N';
                break;
            case 'G':
                texte[i]='O';
                break;
            case 'H':
                texte[i]='P';
                break;
            case 'I':
                texte[i]='H';
                break;
            case 'J':
                texte[i]='Q';
                break;
            case 'K':
                texte[i]='R';
                break;
            case 'L':
                texte[i]='S';
                break;
            case 'M':
                texte[i]='T';
                break;
            case 'N':
                texte[i]='Z';
                break;
            case 'O':
                texte[i]='I';
                break;
            case 'P':
                texte[i]='J';
                break;
            case 'Q':
                texte[i]='K';
                break;
            case 'R':
                texte[i]='D';
                break;
            case 'S':
                texte[i]='L';
                break;
            case 'T':
                texte[i]='E';
                break;
            case 'U':
                texte[i]='G';
                break;
            case 'V':
                texte[i]='X';
                break;
            case 'W':
                texte[i]='U';
                break;
            case 'X':
                texte[i]='V';
                break;
            case 'Y':
                texte[i]='F';
                break;
            case 'Z':
                texte[i]='B';
                break;
            case '%':
                texte[i]=' ';
        }
    }
}

//PROCEDURE POUR AFFICHER UN MENU
void menu()
{
        printf("\n=== Menu === :\n");
        printf("1 : Chiffrer\n");
        printf("2 : Dechiffrer\n");
        printf("3 : Quitter\n");
}
