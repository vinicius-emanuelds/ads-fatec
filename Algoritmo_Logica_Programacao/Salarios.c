#include <stdio.h>
int main(void) {
  int idade, anonascimento;
  float salario, inss, irpf, salliq;
  char nome[10];
  printf("\n Informe o nome do colaborador: ");
  scanf("%s",&nome);
  printf("\n Qual o ano de nascimento? ");
  scanf("%d",&anonascimento);
  printf("\n Qual o salário bruto? ");
  scanf("%f",&salario);
  idade=2024-anonascimento;
  if(salario<=1412){
    inss=salario*0.075;
      }else{
        if(salario<2666.68){
          inss=(salario*0.09)-21.18;
            }else{
              if(salario<4000.03){
                inss=(salario*0.12)-101.18;
                  }else{
                    if(salario<7786.02){
                      inss=(salario*0.14)-181.18;
                        }else{
                          inss=908.85;
                        }
                  }
            }
      }
  salliq=(salario-inss);
  if(salliq<=2259.20){
    irpf=0;
      }else{
        if(salliq<2826.65){
          irpf=(salliq*0.75)-169.44;
            }else{
              if(salliq<3751.05){
                irpf=(salliq*0.15)-381.44;
                  }else{
                    if(salliq<4664.68){
                      irpf=(salario*0.225)-662.77;
                        }else{
                          irpf=(salliq*0.275)-896;
                          }
                  }
            }
      }
  salliq=salliq-irpf;
  printf("\n%s sua idade é %d, nascido em %d",nome,idade,anonascimento);
  printf("\n\n\n");
  printf("\nSeu salário bruto é %.2f. Com o desconto de R$ %.2f, você receberá em R$ %.2f reais",salario,inss+irpf,salliq);
}    