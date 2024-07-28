#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int i = 0; // Inicializando i com 0
int j, k, id;

struct registrador {
    int codigo;
    char nome[10];
    int agencia;
    char conta[10];
    float saldo;
};

struct registrador cadastro[100];

int cadastrar();
int sacar();
int depositar();
int pix();
int transferencia();
int saldoatual();
int carregarBD();
int imprimirBD();
void tela();

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int digitado = 0, bd = 0;

    while(digitado != 7){
        printf("\n ============ SANDRO BANK ============ ");
        printf("\n1 - Carregar banco de dados de clientes")
        printf("\n1 - Sacar dinheiro");
        printf("\n2 - Depositar dinheiro");
        printf("\n3 - Efetuar PIX");
        printf("\n4 - Cadastrar novo cliente");
        printf("\n5 - Transferência entra contas");
        printf("\n6 - Consultar saldo");
        printf("\n7 - Sair\n");
        
        printf("\nDigite a opção desejada: ");
        scanf("%d", &digitado);          

        if (digitado < 1 || digitado > 7){
            printf("\nOpção inválida. Por favor, escolha uma das opções do menu.\n");
            continue;
        }

        switch(digitado){
            case 1: // Sacar
                sacar();
                break;

            case 2: // Depositar
                depositar();
                break;

            case 3: // Efetuar PIX
                pix();
                break;

            case 4: // Cadastrar novo cliente
                printf("\nDeseja carregar o banco de dados pré-existente?\nDigite 1 - SIM ou 2 - NÃO\n");
                scanf("%d", &bd);

                if(bd == 1){
                    carregarBD();
                    imprimirBD();
                }else{
                    cadastrar();
                }
                
                break;

            case 5: // Transferir entre contas
                transferencia();
                break;

            case 6: // Consultar saldo
                saldoatual();
                break;

            case 7: // Sair
                printf("Saindo .... \n");
                exit(0);
                break;
        }
    }
}

int imprimirBD() {
    printf("\nCÓDIGO | NOME | AGÊNCIA | NÚMERO DA CONTA | SALDO");

    for (i = 0; i < 6; i++) {
        printf("\n  %d | %s | %d | %s | R$ %.2f", 
               cadastro[i].codigo,
               cadastro[i].nome,
               cadastro[i].agencia,
               cadastro[i].conta,
               cadastro[i].saldo);
    }
    return 0;
}

int carregarBD() {
    cadastro[0].codigo = 1;
    strcpy(cadastro[0].nome, "Maria");
    cadastro[0].agencia = 235;
    strcpy(cadastro[0].conta, "42457");
    cadastro[0].saldo = 650.0;

    cadastro[1].codigo = 2;
    strcpy(cadastro[1].nome, "JOAO");
    cadastro[1].agencia = 235;
    strcpy(cadastro[1].conta, "12457");
    cadastro[1].saldo = 890.0;

    cadastro[2].codigo = 3;
    strcpy(cadastro[2].nome, "PEDRO");
    cadastro[2].agencia = 278;
    strcpy(cadastro[2].conta, "14575");
    cadastro[2].saldo = 2000.0;

    cadastro[3].codigo = 4;
    strcpy(cadastro[3].nome, "JOSE");
    cadastro[3].agencia = 278;
    strcpy(cadastro[3].conta, "13598");
    cadastro[3].saldo = 1000.0;

    cadastro[4].codigo = 5;
    strcpy(cadastro[4].nome, "MARCOS");
    cadastro[4].agencia = 278;
    strcpy(cadastro[4].conta, "78544");
    cadastro[4].saldo = 300.0;

    return 0;
}

int cadastrar(){
    if (i < 100){
        cadastro[i].codigo = i + 1;
        
        printf("\nNome: ");
        scanf("%s", cadastro[i].nome); 

        printf("\nAgência: ");
        scanf("%d", &cadastro[i].agencia);

        printf("\nConta: ");
        scanf("%s", cadastro[i].conta);

        printf("\nSaldo: ");
        scanf("%f", &cadastro[i].saldo);

        i++;
    } else {
        printf("Não é mais possível realizar cadastros! Limite de clientes alcançado");
    }
    return 0;
}

int sacar(){
    int id;
    float valorsaq;

    printf("De quem voce deseja sacar ?");
    for (j = 0; j < i; j++){
        printf("\n ID: %d | Nome: %s", cadastro[j].codigo, cadastro[j].nome);
    }
    scanf("%d", &id);

    if (id < 1 || id > i) {
        printf("Cliente não encontrado!\n");
        return 0;
    }

    printf("Digite o valor a ser sacado: ");
    scanf("%f", &valorsaq);

    if (valorsaq > cadastro[id-1].saldo) {
        printf("Saldo insuficiente!\n");
    } else {
        cadastro[id-1].saldo -= valorsaq;
        printf("Saque realizado com sucesso!\n");
        printf("Novo saldo: %.2f\n", cadastro[id-1].saldo);
    }
    return 0;
}

int depositar(){
    int id;
    float valordep;

    printf("Em qual conta voce deseja depositar ?");
    for (j = 0; j < i; j++){
        printf("\n ID: %d | Nome: %s", cadastro[j].codigo, cadastro[j].nome);
    }
    scanf("%d", &id);

    if (id < 1 || id > i) {
        printf("Cliente não encontrado!\n");
        return 0;
    }

    printf("Digite o valor a ser depositado: ");
    scanf("%f", &valordep);

    cadastro[id-1].saldo += valordep;
    
    printf("Deposito realizado com sucesso!\n");
    printf("Novo saldo: %.2f\n", cadastro[id-1].saldo);
    return 0;
}

int pix(){
    int id;
    float valorpix;

    printf("Qual conta será debitado o pix ?");
    for (j = 0; j < i; j++){
        printf("\n ID: %d | Nome: %s", cadastro[j].codigo, cadastro[j].nome);
    }
    scanf("%d", &id);

    if (id < 1 || id > i) {
        printf("Cliente não encontrado!\n");
        return 0;
    }

    printf("Qual valor do pix que voce deseja enviar ? ");  
    scanf("%f", &valorpix);

    if (valorpix > cadastro[id-1].saldo) {
        printf("Saldo insuficiente!\n");
    } else {
        cadastro[id-1].saldo -= valorpix;
        printf("Pix realizado com sucesso!\n");
        printf("Novo saldo: %.2f\n", cadastro[id-1].saldo);
    }
    return 0;
}

int transferencia() {
    int id, contad;
    float valortrans;

    printf("Qual conta será debitado a transferência ?");
    for (j = 0; j < i; j++){
        printf("\n ID: %d | Nome: %s", cadastro[j].codigo, cadastro[j].nome);
    }
    scanf("%d", &id);

    if (id < 1 || id > i) {
        printf("Cliente não encontrado!\n");
        return 0;
    }

    printf("Qual valor que você deseja transferir ? ");  
    scanf("%f", &valortrans);

    if (valortrans > cadastro[id-1].saldo) {
        printf("Saldo insuficiente!\n");
        return 0;
    } 

    printf("Para qual conta você deseja transferir ? ");
    for (j = 0; j < i; j++){
        printf("\n ID: %d | Nome: %s", cadastro[j].codigo, cadastro[j].nome);
    }
    scanf("%d", &contad);

    if (contad < 1 || contad > i) {
        printf("Conta de destino não encontrada!\n");
        return 0;
    }

    cadastro[id-1].saldo -= valortrans;
    cadastro[contad-1].saldo += valortrans;
    printf("Transferência realizada com sucesso!\n");
    printf("Novo saldo: %s | %.2f\n", cadastro[id-1].nome, cadastro[id-1].saldo);
    printf("Novo saldo: %s | %.2f\n", cadastro[contad-1].nome, cadastro[contad-1].saldo);

    return 0;
}

int saldoatual() {
    int id;

    printf("Qual conta você deseja visualizar o saldo ?");
    for (j = 0; j < i; j++){
        printf("\n ID: %d | Nome: %s", cadastro[j].codigo, cadastro[j].nome);
    }
    scanf("%d", &id);

    if (id < 1 || id > i) {
        printf("Cliente não encontrado!\n");
        return 0;
    }

    printf("Saldo atual: %.2f\n", cadastro[id-1].saldo);

    return 0;
}
