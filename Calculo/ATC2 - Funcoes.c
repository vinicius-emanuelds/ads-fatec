/*
CÁLCULO - 2º ADS NOTURNO
ATIVIDADE COMPUTACIONAL 2 - FUNÇÕES
LUCAS VIEIRA DA SILVA
VINICIUS EMANUEL DA SILVA
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

#define TOLERANCIA 0.01

void fLinear();
void fQuadratica();
void fExponencial();
void fLogaritmica();
void fSeno();
void fCosseno();
void fTangente();

int main(void){
    setlocale (LC_ALL, "Portuguese_Brazil");

    int opcao = 0;
    
    do {
        printf("\n ============ Menu ============ ");
        printf("\n 1 - Função Linear");
        printf("\n 2 - Função Quadrática");
        printf("\n 3 - Função Exponencial");
        printf("\n 4 - Função Logarítmica");
        printf("\n 5 - Função Seno");
        printf("\n 6 - Função Cosseno");
        printf("\n 7 - Função Tangente");
        printf("\n 8 - Sair");
        printf("\n");
        
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                fLinear();
                break;

            case 2:
                fQuadratica();
                break;

            case 3:
                fExponencial();
                break;

            case 4:
                fLogaritmica();
                break;

            case 5:
                fSeno();
                break;

            case 6:
                fCosseno();
                break;

            case 7:
                fTangente();
                break;

            case 8:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 8);
}

void fLinear(){ //f(x) = a * x + b
    double a=0, b=0, x=0, resultado=0, zeroFuncao = 0;
    char tipoFuncao[15];
        
    do{
        printf("\nDigite o valor de a: ");
            scanf("%lf",&a);
        if (a == 0){
            printf("VALOR INVÁLIDO - DIGITE NOVAMENTE\n");
        } else {
            if (a >= 1){
                strcpy(tipoFuncao, "CRESCENTE");
            } else {
                strcpy(tipoFuncao, "DECRESCENTE");
            }
        }
    } while (a == 0);
    printf("Digite o valor de b: ");
        scanf("%lf",&b);
        
    printf("Digite o valor de x: ");
        scanf("%lf",&x);
    
    zeroFuncao = -b / a;
    resultado = a*x + b;
    
    printf("\nA função é %s\n", tipoFuncao);
    printf("O zero da função é x = %.8lf\n", zeroFuncao);
    printf("f(%1.0lf) =  %.8lf\n", x, resultado);
}

void fQuadratica(){ //f(x)= a * x^2 + b * x + c
    double a = 0, b = 0, c = 0, x = 0, x1 = 0, x2 = 0, xvert = 0, yvert = 0, delta = 0, resultado = 0;
    char concavidade[15];
    
    do{
        printf("\nDigite o valor de a: ");
            scanf("%lf",&a);
        if (a == 0){
            printf("VALOR INVÁLIDO - DIGITE NOVAMENTE\n");
        } else {
            if (a > 0){
                strcpy(concavidade, "CIMA");
            } else {
                strcpy(concavidade, "BAIXO");
            }
        }
    } while (a == 0);

    printf("Digite o valor de b: ");
        scanf("%lf",&b);
        
    printf("Digite o valor de c: ");
        scanf("%lf",&c);
        
    printf("Digite o valor de x = k: ");
        scanf("%lf",&x);
    
    delta = (b*b) - 4*a*c;
    resultado = (a * (x * x)) + (b * x) + c;
    xvert = -b / (2*a);
    yvert = -(delta)/(4*a);

    if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("A função é côncava para %s\n", concavidade);
        printf("Os zeros da função são %lf e %lf\n", x1, x2);
        printf("Os vértices são Xv = %lf e Yv = %lf\n",xvert, yvert);
        printf("f(%1.0lf) =  %lf\n", x, resultado);
    } else if (delta == 0) {
        x1 = (-b)/(2*a);
        printf("A função é côncava para %s\n", concavidade);
        printf("O zero da função é %lf\n", x1);
        printf("Os vértices são Xv = %lf e Yv = %lf\n",xvert, yvert);
        printf("f(%1.0lf) =  %lf\n", x, resultado);
    } else {
        printf("A função é côncava para %s\n", concavidade);
        printf("Não existem zeros para a função f(x)=%dx² + %dx + %d.\n",(int)a,(int)b,(int)c);
        printf("Os vértices são Xv = %lf e Yv = %lf\n",xvert, yvert);
        printf("f(%1.0lf) =  %lf\n", x, resultado);
    }
}

void fExponencial(){ // f(x) = k^x
    double x=0, k=0, y=0;
    char tipoFuncao[15];
    
    do{
        printf("\nDigite o  valor de k: ");
            scanf("%lf", &k);

        if (k <= 0 || k == 1) {
            printf("VALOR INVÁLIDO - DIGITE NOVAMENTE\n");
        }else{
            if(k > 0) {
                strcpy(tipoFuncao, "CRESCENTE");
            }if(k > 0 && k < 1) {
                strcpy(tipoFuncao, "DECRESCENTE");
            }
        }
    } while (k < 0 || k == 1);
    
        printf("\nDigite o valor de x:");
            scanf("%lf", &x);
        
        if (k == 0 && x == 0) {
            printf("VALOR INVÁLIDO - DIGITE NOVAMENTE\n");
        } else {
            y = pow(k,x);
        }
    printf("A função é %s\n", tipoFuncao);
    printf("f(%1.0lf): %.8lf", x, y);
}

void fLogaritmica() {
    double x=0, k=0, y;
    char tipoFuncao[15];
    
    do {
        printf("Digite o valor de k: ");
            scanf("%lf", &k);

        if (k <= 0 || k == 1) {
            printf("VALOR INVÁLIDO - DIGITE NOVAMENTE\n");
        }else{
            if (k > 1) {
                strcpy(tipoFuncao, "CRESCENTE");
            } else {
                strcpy(tipoFuncao, "DECRESCENTE");
            }
        }
    } while(k < 0 || k == 1);

    do{
        printf("Digite o valor de x: ");
        scanf("%lf", &x);
        
        if (x <= 0) {
            printf("VALOR INVÁLIDO - DIGITE NOVAMENTE\n");
        }   
    } while(x <= 0);
    
    y = log(x) / log(k);
    
    printf("\nA função é %s\n", tipoFuncao);
    printf("f(%1.0lf): %.8lf", x, y);
}

void fSeno(){
    double resultado;
    double x = 0;
    
    printf("\nDigite um valor, em radianos, para o seno: ");
        scanf("%lf", &x);
    
    resultado = sin(x);
    
    if (fabs(resultado) < 1e-9) {
        resultado = 0;
    }
    
    printf("\nf(%.0lf) = %.8lf\n", x, resultado);
}

void fCosseno(){
    double resultado;
    double x = 0;
    
    printf("Digite um valor, em radianos, para o cosseno: ");
        scanf("%lf", &x);
    
    resultado = cos(x);
    
    if (fabs(resultado) < 1e-9) {
        resultado = 0;
    }
    
    printf("\nf(%.0lf) = %.8lf\n", x, resultado);
}

void fTangente(){
    double resultado;
    double x = 0;
    
    printf("Digite um valor, em radianos, para a tangente: ");
        scanf("%lf", &x);

    if (fabs(fmod(x, M_PI) - M_PI_2) < TOLERANCIA || fabs(fmod(x, M_PI) + M_PI_2) < TOLERANCIA) {
        printf("VALOR INVÁLIDO - A tangente é indefinida para x = %.8lf\n", x);
    } else {
        resultado = tan(x);
        if (fabs(resultado) < 1e-9) {
            resultado = 0;
        }
        printf("\nf(%.8lf) = %.8lf\n", x, resultado);
    }
}