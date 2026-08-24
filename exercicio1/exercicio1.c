#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 5;

    // a*b = 2. como (float)a e b são convertidos para float, 2.0 / 3 = 0.667
    printf("a*b/c = %.3f\n", (float)a * b / c); // saída: 0.667

    // a*b = 2. 2 % 3 = 2. depois soma 1 -> 2 + 1 = 3
    printf("a*b %% c+1 = %d\n", a * b % c + 1); // saída: 3

    // ++a incrementa 'a' para 2 primeiro. 2*2 - 3-- = 4 - 3 = 1. 'c' passa a ser 2 após a execução.
    printf("++a*b-c-- = %d\n", ++a * b - c--); // saída: 1 | variáveis: a=2, c=2

    // --b decrementa 'b' para 1. ++d incrementa 'd' para 5. 7 - 1 * 5 = 7 - 5 = 2.
    printf("7-b*++d = %d\n", 7 - --b * ++d); // saída: 2 | variáveis: b=1, d=5

    // a=2, b=1, c=2. divisão de inteiros: 2/1 = 2, depois 2/2 = 1. convertido para float: 1.000
    printf("a/b/c = %.3f\n", (float)(a / b / c)); // saída: 1.000

    // --d decrementa 'd' para 4. (float)e = 5.0. 7 + 2 * 4 / 5.0 = 7 + 8 / 5.0 = 7 + 1.6 = 8.600
    printf("7+c*--d/e = %.3f\n", 7 + c * --d / (float)e); // saída: 8.600 | variáveis: d=4

    // -b é -1. 2 + 2 % (-1) + 2 + 1 = 2 + 0 + 2 + 1 = 5
    printf("2+a%%-b+c+1 = %d\n", 2 + a % -b + c + 1); // saída: 5

    // ++e incrementa 'e' para 6. 39.0 / -6 + 29 % 2 = -6.500 + 1 = -5.500
    printf("39/ -++e + 29 %% c = %.3f\n", 39.0 / -++e + 29 % c); // saída: -5.500 | variáveis: e=6

    // ++a incrementa 'a' para 3. 7 - 3 % (3 + 1) = 7 - 3 % 4 = 7 - 3 = 4
    printf("7 - ++a %% (3+b) = %d\n", 7 - ++a % (3 + b)); // saída: 4 | variáveis: a=3

    /*
     * ESTADO FINAL DAS VARIÁVEIS NO FIM DO PROGRAMA:
     * a = 3
     * b = 1
     * c = 2
     * d = 4
     * e = 6
     */

    return 0;
}