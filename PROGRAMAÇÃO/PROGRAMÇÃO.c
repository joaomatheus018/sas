#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void EnigmaCesar();
void CodificarEnigma();
void DescodificarEnigma();
int escolherChave();

int main()
{

    setlocale(LC_ALL, "");
    int opcao;
     do{
        //menu
        printf("\n\n---MENU PRINCIPAL---\n");
        printf("1 - Enigma (CODIFICAR)\n");
        printf("2- Enigma (DESCODIFICAR)\n");
        printf("0 - Sair\n");


        // opcao desejada
        printf("\nDigite a opcao desejada: ");
        scanf("%d",&opcao);

        switch (opcao){
        case 1:
            CodificarEnigma(); // Função
            break;
        case 2:
            DescodificarEnigma();
            break;
        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("\n\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0); //repetir
    return 0;

}


int escolherChave() {
    int chave;

    printf("\nDigite a chave (1 a 25): ");
    scanf("%d", &chave);

    while (chave < 1 || chave > 25) {
        printf("Chave invalida! Digite entre 1 e 25: ");
        scanf("%d", &chave);
    }

    return chave;
}

// Implatação
void CodificarEnigma() {
    char frase[100];
    int chave = escolherChave();
    int i;

    printf("\n\n--- ENIGMA: MODO CODIFICADOR ---");
    printf("\nDigite a frase para codificar: ");

    fflush(stdin);
    getchar(); // evita problema
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = 0;

    printf("\n[MENSAGEM ORIGINAL]: %s", frase);
    printf("\n[MENSAGEM CODIFICADA]: ");

    for (i = 0; i < strlen(frase); i++) {
        char letra = frase[i];
        char resultado;

        // Maiúscula
        if (letra >= 'A' && letra <= 'Z') {
            resultado = ((letra - 'A' + chave) % 26) + 'A';
            printf("%c", resultado);
        }
        // Minúscula
        else if (letra >= 'a' && letra <= 'z') {
            resultado = ((letra - 'a' + chave) % 26) + 'a';
            printf("%c", resultado);
        }
        // espaço, ponto ou número, apenas repete
        else {
            printf("%c", letra);
        }
    }
    printf("\n-----------------------------------\n");
}

void DescodificarEnigma() {
    char frase[100];
    int chave = escolherChave();
    int i;

    printf("\n\n--- ENIGMA: MODO DESCODIFICADOR ---");
    printf("\nDigite a frase cifrada para revelar: ");

    fflush(stdin);
    getchar();
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = 0;

    printf("\n[MENSAGEM CIFRADA ]: %s", frase);
    printf("\n[MENSAGEM REVELADA]: ");

    for (i = 0; i < strlen(frase); i++) {
        char letra = frase[i];
        char resultado;

        // Maiuscula
        if (letra >= 'A' && letra <= 'Z') {

            resultado = ((letra - 'A' - chave + 26) % 26) + 'A';
            printf("%c", resultado);
        }
        // Minúscula
        else if (letra >= 'a' && letra <= 'z') {
            resultado = ((letra - 'a' - chave + 26) % 26) + 'a';
            printf("%c", resultado);
        }
        // espaços e símbolos
        else {
            printf("%c", letra);
        }
    }
    printf("\n--------------------------------------\n");
}
