/*  Calcule as raízes da equação de 2  grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Nao
e equação de segundo grau”.
• Se ∆ < 0, nao existe real. Imprima a mensagem ˜ N~ao existe raiz.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz ´unica.
• Se ∆ ≥ 0, imprima as duas ra´ızes reais.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    double delta, x1, x2;

    printf ("Informe o coeficiente a: ");
    scanf ("%d", &a);
    printf ("Informe o coeficiente b: ");
    scanf ("%d", &b);
    printf ("Informe o coeficiente c: ");
    scanf ("%d", &c);

    delta = (pow(b,b) -4 * (a * c));

    if(a == 0){
        printf("Nao e equacao de segundo grau.");
    }
    else if(delta < 0){
        printf("Nao existe raiz.");
    }
    else if(delta == 0){
        x1 = (-b + sqrt(delta)) / (2*a);
        printf("Raiz unica: x= %f", x1);
    }
    else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf (" Delta = %.2f | xI = %.2f | xII = %.2f", delta, x1, x2);
    }
    return 0;
}