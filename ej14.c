// Realizar un programa que calcule el factorial de un n´umero entero positivo. Para esto,
// usar una funci´on que reciba el n´umero y devuelva el resultado.
// El factorial de un n´umero entero positivo n es el producto de todos los n´umeros
// enteros positivos menores o iguales a n. Por ejemplo, el factorial de 5 es 5! =
// 5 × 4 × 3 × 2 × 1 = 120.
// El factorial de 0 es 1.
// El factorial de un n´umero negativo no est´a definido.
// Se puede realizar utilizando recursi´on o iteraci´on.

int factorial(int n){

    if( n <= 1) return 1;
    return n * factorial(n-1);
}
int main(){
    printf("de que num queres el factorial puto? ");
    int num;
    scanf("%d", &num);
    printf("el factorial de %d es %d\n", num, factorial(num));
}
