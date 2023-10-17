#include <stdio.h>

float perimetroFigura(float numero) {
    float perimetro;
    perimetro = 4 * numero;
    return perimetro;
}

void areaFigura(float numero, float *area) {
	*area=numero*numero;
    return area;
}

int main() {
    float num;
    printf("Lado de un cuadrado: ");
    scanf("%f", &num);
    printf("Perimetro: %f\n", perimetroFigura(num));

    float area;
    areaFigura(num, &area);
    printf("Area: %f\n", area);

    return 0;
}


