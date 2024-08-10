// ATIVIDADE 2 - Gestão Bancária 1º ADS NOTURNO 2024.01
// FILIPE LEÃO SANTOS
// LUCAS VIEIRA DA SILVA
// VINICIUS EMANUEL DA SILVA

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


int i = 0,j=0, k, id;
int cont = 0;

struct registrador {
  int codigo;
  char nome[50];
  int agencia;
  char conta[10];
  float saldo;
};

struct registrador cadastro[100];

int carregarBD();
imprimirSemSaldo();
imprimir();
int cadastrar();
int depositar();
int sacar();
int pix();
int transferencia();
int saldoatual();
void tela();


#define SEPARADOR 17

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int digitado = 0, bd=0;
    
    k=0;
    printf("\nAntes de iniciar, deseja carregar o banco de dados?\nDigite 1 - Sim ou 2 - Não: ");
        scanf("%d",&bd);
    
    if(bd==1){
        carregarBD();
        printf("\nDados carregados com sucesso!\n");
        imprimir();
        tela();
    }
    
    while(digitado != 7){
        printf("\n ============ SANDRO BANK ============ ");
        printf("\n1 - Cadastrar novo cliente");
        printf("\n2 - Depositar dinheiro");
        printf("\n3 - Sacar dinheiro");
        printf("\n4 - Efetuar PIX");
        printf("\n5 - Transferência entre contas");
        printf("\n6 - Consultar saldo");
        printf("\n7 - Sair");
        printf("\n ===================================== \n");
        
        while (k != 1){
            printf("\nDigite a opção desejada: ");
                scanf("%d", &digitado);          

            if (digitado < 1 || digitado > 6){
                if (digitado == 7){
                    exit(0);
                }else{
                    printf("Opção inválida. Por favor, escolha uma das opções do menu.\n");
                    k = 0;
                }
            }else{
                k=1;
            }
        }
          
        switch(digitado){
            case 1: // Cadastrar novo cliente
                if (cont == 0){
                    printf("\nNão há clientes cadastrados!\n");
                }else{
                    cadastrar();
                    tela();
                }
                k=0;
            break;

            case 2: // Depositar dinheiro
                if (cont == 0){
                    printf("\nNão há clientes cadastrados!\n");
                }else{
                    depositar();
                    tela();
                }
                k = 0;
            break;

            case 3: // Sacar dinheiro
                if (cont == 0){
                    printf("\nNão há clientes cadastrados!\n");
                }else{
                    sacar();
                    tela();
                }
                k = 0;   
            break;

            case 4: // Efetuar PIX
                if (cont == 0){
                    printf("\nNão há clientes cadastrados!\n");
                }else{
                    pix();
                    tela();
                }
                k=0;
            break;

            case 5: // Transferência entre contas
                if (cont == 0){
                    printf("\nNão há clientes cadastrados!\n");
                }else{
                    transferencia();
                    tela();
                }
                k=0;
            break;

            case 6: // Consultar saldo
                if (cont == 0){
                    printf("\nNão há clientes cadastrados!\n");
                }else{
                    saldoatual();
                    tela();
                }
                k=0;
            break;

            case 7: // Sair
                printf("Saindo .... \n");
            break;
        
            default: k = 0;
        }
    } 
}


int imprimir(){
    printf("\n       CÓDIGO     |       NOME      |     AGÊNCIA     | NÚMERO DA CONTA |        SALDO        |");

    for (i = 0; i < cont; i++) {
        printf("\n|%*d|%*s|%*d|%*s| R$ %*.2f|", 
               SEPARADOR, cadastro[i].codigo,
               SEPARADOR, cadastro[i].nome,
               SEPARADOR, cadastro[i].agencia,
               SEPARADOR, cadastro[i].conta,
               SEPARADOR, cadastro[i].saldo);
    }
}

int carregarBD() {
    cadastro[0].codigo = 1;
    strcpy(cadastro[0].nome, "MARIA");
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

    i = 5;
    cont = 5;
}

int cadastrar(){
    j=i;

    if (i <= 100){
        if (i == 1){
            for (i=0;i<1;i++){
            
            cadastro[i].codigo = i+1;
        
            printf("\nNome: ");
                setbuf(stdin, NULL);
                fgets(cadastro[i].nome,50,stdin); 

            printf("Agência: ");
                scanf("%d", &cadastro[i].agencia);

            printf("Conta: ");
                scanf("%s", &cadastro[i].conta);

            printf("Saldo: ");
                scanf("%f", &cadastro[i].saldo);

            cont = cont + 1;
            }
        }else{
            for (i=j;i<j+1;i++){
                
                cadastro[j].codigo = j+1;
            
                printf("\nNome: ");
                    setbuf(stdin, NULL);
                    fgets(cadastro[i].nome,50,stdin); 

                printf("Agência: ");
                    scanf("%d", &cadastro[j].agencia);

                printf("Conta: ");
                    scanf("%s", &cadastro[j].conta);

                printf("Saldo: ");
                    scanf("%f", &cadastro[j].saldo);

                cont = cont + 1;
            }
        }
    }else{
        printf("Não é mais possível realizar cadastros! Limite de clientes alcançado.");
    }
    i++;
}

int sacar(){
    int id;
    float valorsaq;

    imprimir();

    printf("\n\nDe quem você deseja sacar?\nDigite o código do cliente: ");
        scanf("%d", &id);

    if (id < 1 || id > i){
        printf("\nCliente não encontrado!");
    }else{
        printf("\nDigite o valor a ser sacado: ");
            scanf("%f", &valorsaq);

        if (valorsaq > cadastro[id-1].saldo) {
            printf("\nSaldo insuficiente!");
            return (1);
        }else{
            cadastro[id-1].saldo -= valorsaq;
            printf("\nSaque realizado com sucesso!");
            printf("\nNovo saldo: %.2f", cadastro[id-1].saldo);
        }
    }
}

int depositar(){
    int id;
    float valordep;

    imprimir();

    printf("\n\nEm qual conta você deseja depositar?\nDigite o código do cliente: ");
        scanf("%d", &id);

    if (id < 1 || id > i){
      printf("\nCliente não encontrado!");
    }else{
        printf("\nDigite o valor a ser depositado: ");
        scanf("%f", &valordep);

        cadastro[id-1].saldo += valordep;
    
        printf("\nDeposito realizado com sucesso!");
        printf("\nNovo saldo: %.2f\n", cadastro[id-1].saldo);
    }    
}

int pix(){
    int id;
    float valorpix;
    char chavepix[30];

    imprimir();

    printf("\nDe qual conta será debitado o pix?\nDigite o código do cliente: ");
        scanf("%d", &id);

    if (id < 1 || id > i){
        printf("\nCliente não encontrado!");
    }else{
        printf("\nDigite a chave pix:");
            scanf("%s", &chavepix);

        printf("\nQual valor do pix que voce deseja enviar? ");  
            scanf("%f", &valorpix);

        if (valorpix > cadastro[id-1].saldo){
            printf("\nSaldo insuficiente!\n");
        }else{
            cadastro[id-1].saldo -= valorpix;
            printf("\nPix enviado com sucesso para a chave [%s]!",chavepix);
            printf("\nNovo saldo: %.2f", cadastro[id-1].saldo);
        }       
    }
}

int transferencia() {
    int id;
    float valortrans;
    int contad=0;

    imprimir();

    printf("\nDe qual conta será debitada a transferência?\nDigite o código do cliente: ");
        scanf("%d", &id);

    if (id < 1 || id > i){
      printf("\nCliente não encontrado!");
    }else{
        printf("Qual valor deseja transferir? ");  
            scanf("%f", &valortrans);

        if (valortrans > cadastro[id-1].saldo){
            printf("\nSaldo insuficiente!");
        }else{
            printf("\nPara qual conta voce deseja transferir?\nDigite o código do cliente: ");
                scanf("%d", &contad);
            cadastro[id-1].saldo -= valortrans;
            cadastro[contad-1].saldo += valortrans;
            printf("Transferência realizada com sucesso!\n");
            printf("\nNovo saldo:%*s|%*.2f|", SEPARADOR, cadastro[id-1].nome, SEPARADOR, cadastro[id-1].saldo);
            printf("\nNovo saldo:%*s|%*.2f|", SEPARADOR, cadastro[contad-1].nome, SEPARADOR, cadastro[contad-1].saldo);
        }
    }
}

int saldoatual() {
    int id;
    float valorsaldo;

    imprimirSemSaldo();

    printf("\nQual conta você deseja visualizar o saldo?\nDigite o código do cliente:");
        scanf("%d", &id);

    if (id < 1 || id > i){
        printf("\nCliente não encontrado!");
    }else{
        printf("\nSaldo atual: R$ %.2f", cadastro[id-1].saldo);
    }  
}

void tela(){
    printf("\n__________________________________________________________________________________________________\n\n");
}

int imprimirSemSaldo(){
    printf("\n       CÓDIGO     |       NOME      |     AGÊNCIA     | NÚMERO DA CONTA |");

    for (i = 0; i < cont; i++) {
        printf("\n|%*d|%*s|%*d|%*s|", 
               SEPARADOR, cadastro[i].codigo,
               SEPARADOR, cadastro[i].nome,
               SEPARADOR, cadastro[i].agencia,
               SEPARADOR, cadastro[i].conta);
    }
}
