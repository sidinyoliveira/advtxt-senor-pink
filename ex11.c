#include <stdio.h>
#include <string.h>

int main() {
    char objeto[20];
    char acao[20];

    printf(" Dungeon das Escolhas \n\n");
    printf("Você acorda em uma caverna escura e vê três objetos:\n");
    printf("1. Lanterna\n");
    printf("2. Faca\n");
    printf("3. Livro\n\n");
    printf("Digite o objeto que deseja pegar: ");
    scanf("%19s", objeto);  // Limita a leitura a 19 caracteres

    // Transformar para minúsculas (opcional, se quiser tratar entrada maiúscula)
    for (int i = 0; objeto[i]; i++) {
        if (objeto[i] >= 'A' && objeto[i] <= 'Z') {
            objeto[i] = objeto[i] + 32;
        }
    }

    if (strcmp(objeto, "lanterna") != 0) {
        printf("\nVocê escolheu o objeto errado... tropeça no escuro e ativa uma armadilha.\n");
        printf("💀 Você morreu.\n");
        return 0;
    }

    printf("\nVocê pegou a lanterna. A luz revela algo se movendo ao fundo da caverna...\n");
    printf("O que você faz?\n");
    printf("1. Observar\n");
    printf("2. Gritar\n");
    printf("3. Sentar\n\n");
    printf("Digite sua ação: ");
    scanf("%19s", acao);

    // Transformar para minúsculas também
    for (int i = 0; acao[i]; i++) {
        if (acao[i] >= 'A' && acao[i] <= 'Z') {
            acao[i] = acao[i] + 32;
        }
    }

    if (strcmp(acao, "observar") == 0) {
        printf("\nVocê observa com atenção e percebe um caminho secreto.\n");
        printf("Você escapa da caverna em silêncio.\n");
        printf("🎉 Você sobreviveu!\n");
    } else {
        printf("\nVocê tentou '%s'... mas não foi sábio.\n", acao);
        printf("A criatura sente sua presença e ataca sem piedade.\n");
        printf("💀 Você morreu.\n");
    }

    return 0;
}
