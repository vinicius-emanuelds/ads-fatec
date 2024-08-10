#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("Hoje está \"um\" lindo dia\n");

    printf("O dia está \t\t\t LINDO\n");

}
