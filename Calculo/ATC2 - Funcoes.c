/*
C�LCULO - 2� ADS NOTURNO
ATIVIDADE COMPUTACIONAL 2 - FUN��ES
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
        printf("\n 1 - Fun��o Linear");
        printf("\n 2 - Fun��o Quadr�tica");
        printf("\n 3 - Fun��o Exponencial");
        printf("\n 4 - Fun��o Logar�tmica");
        printf("\n 5 - Fun��o Seno");
        printf("\n 6 - Fun��o Cosseno");
        printf("\n 7 - Fun��o Tangente");
        printf("\n 8 - Sair");
        printf("\n");
        
        printf("\nDigite a op��o desejada: ");
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
                printf("\nOp��o inv�lida. Por favor, escolha uma op��o v�lida.\n");
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
            printf("VALOR INV�LIDO - DIGITE NOVAMENTE\n");
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
    
    printf("\nA fun��o � %s\n", tipoFuncao);
    printf("O zero da fun��o � x = %.8lf\n", zeroFuncao);
    printf("f(%1.0lf) =  %.8lf\n", x, resultado);
}

void fQuadratica(){ //f(x)= a * x^2 + b * x + c
    double a = 0, b = 0, c = 0, x = 0, x1 = 0, x2 = 0, xvert = 0, yvert = 0, delta = 0, resultado = 0;
    char concavidade[15];
    
    do{
        printf("\nDigite o valor de a: ");
            scanf("%lf",&a);
        if (a == 0){
            printf("VALOR INV�LIDO - DIGITE NOVAMENTE\n");
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
        printf("A fun��o � c�ncava para %s\n", concavidade);
        printf("Os zeros da fun��o s�o %lf e %lf\n", x1, x2);
        printf("Os v�rtices s�o Xv = %lf e Yv = %lf\n",xvert, yvert);
        printf("f(%1.0lf) =  %lf\n", x, resultado);
    } else if (delta == 0) {
        x1 = (-b)/(2*a);
        printf("A fun��o � c�ncava para %s\n", concavidade);
        printf("O zero da fun��o � %lf\n", x1);
        printf("Os v�rtices s�o Xv = %lf e Yv = %lf\n",xvert, yvert);
        printf("f(%1.0lf) =  %lf\n", x, resultado);
    } else {
        printf("A fun��o � c�ncava para %s\n", concavidade);
        printf("N�o existem zeros para a fun��o f(x)=%dx� + %dx + %d.\n",(int)a,(int)b,(int)c);
        printf("Os v�rtices s�o Xv = %lf e Yv = %lf\n",xvert, yvert);
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
            printf("VALOR INV�LIDO - DIGITE NOVAMENTE\n");
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
            printf("VALOR INV�LIDO - DIGITE NOVAMENTE\n");
        } else {
            y = pow(k,x);
        }
    printf("A fun��o � %s\n", tipoFuncao);
    printf("f(%1.0lf): %.8lf", x, y);
}

void fLogaritmica() {
    double x=0, k=0, y;
    char tipoFuncao[15];
    
    do {
        printf("Digite o valor de k: ");
            scanf("%lf", &k);

        if (k <= 0 || k == 1) {
            printf("VALOR INV�LIDO - DIGITE NOVAMENTE\n");
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
            printf("VALOR INV�LIDO - DIGITE NOVAMENTE\n");
        }   
    } while(x <= 0);
    
    y = log(x) / log(k);
    
    printf("\nA fun��o � %s\n", tipoFuncao);
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
        printf("VALOR INV�LIDO - A tangente � indefinida para x = %.8lf\n", x);
    } else {
        resultado = tan(x);
        if (fabs(resultado) < 1e-9) {
            resultado = 0;
        }
        printf("\nf(%.8lf) = %.8lf\n", x, resultado);
    }
}