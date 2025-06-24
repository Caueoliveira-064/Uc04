#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Variáveis para armazenar os dados de cada morador
    int idade;
    char sexo; // 'm' para masculino, 'f' para feminino
    float salario;

    // Variáveis para os cálculos finais
    int maior_idade = 0; // Inicializada com 0, pois a idade mínima é positiva
    float soma_salarios = 0.0;
    int quantidade_mulheres = 0;
    int total_habitantes = 0; // Contador para o número total de habitantes, útil para a média

    printf("--- Pesquisa de Moradores do Bairro ---\n");
    printf("Digite os dados de cada habitante.\n");
    printf("Para finalizar, digite 0 para a idade.\n\n");

    // Loop principal para coletar os dados
    do {
        // 1. Coleta e valida a Idade
        printf("Idade (0 para finalizar): ");
        scanf("%d", &idade);

        // Se a idade for 0, o programa finaliza a entrada de dados
        if (idade == 0) {
            break; // Sai do loop do-while
        }

        // Valida idade positiva
        if (idade < 0) {
            printf("Idade invalida. Por favor, digite um valor nao negativo.\n");
            continue; // Pula para a próxima iteração do loop, sem pedir sexo/salário
        }

        // Atualiza a maior idade, se necessário
        if (idade > maior_idade) {
            maior_idade = idade;
        }

        // 2. Coleta e valida o Sexo
        printf("Sexo (m/f): ");
        // O espaço antes de %c é importante para consumir qualquer caractere de nova linha pendente do scanf anterior
        scanf(" %c", &sexo); 

        // Converte para minúscula para facilitar a validação
        if (sexo >= 'A' && sexo <= 'Z') {
            sexo = sexo + 32; // Converte para minúscula (ASCII)
        }

        // Valida sexo
        if (sexo != 'm' && sexo != 'f') {
            printf("Sexo invalido. Por favor, digite 'm' ou 'f'.\n");
            // Se o sexo for inválido, podemos considerar que os dados para este habitante estão incompletos
            // Ou pedir para digitar novamente. Neste caso, vamos ignorar este registro e continuar.
            // Para um programa robusto, você poderia pedir para redigitar.
            continue; 
        }

        // Conta a quantidade de mulheres
        if (sexo == 'f') {
            quantidade_mulheres++;
        }

        // 3. Coleta e valida o Salário
        printf("Salario: R$ ");
        scanf("%f", &salario);

        // Valida salário não negativo
        if (salario < 0) {
            printf("Salario invalido. Por favor, digite um valor nao negativo.\n");
            continue; // Pula para a próxima iteração
        }
        
        soma_salarios += salario;
        total_habitantes++; // Incrementa o contador de habitantes válidos

        printf("Dados registrados. Proximo habitante...\n\n");

    } while (1); // Loop infinito, a saída é controlada pelo 'break' quando idade for 0

    printf("\n--- Resultados da Pesquisa ---\n");

    // a. A maior idade
    if (total_habitantes > 0) { // Verifica se algum dado foi coletado
        printf("A maior idade encontrada: %d anos\n", maior_idade);
    } else {
        printf("Nenhum dado de habitante valido foi inserido.\n");
    }

    // b. A média salarial
    if (total_habitantes > 0) {
        float media_salarial = soma_salarios / total_habitantes;
        printf("A media salarial do bairro: R$ %.2f\n", media_salarial);
    } else {
        // Já tratado acima, mas bom para garantir
    }

    // c. A quantidade de mulheres
    printf("Quantidade de mulheres pesquisadas: %d\n", quantidade_mulheres);

    return 0; // Indica que o programa terminou com sucesso
}