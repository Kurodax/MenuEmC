#include <stdio.h>
#include <cmath>
#include <math.h>

#define PI 3.14159

int main()
{

      float vRaio, vArea;

      printf("\nInforme o raio da círculo: ");
      scanf("%f", &vRaio);

      vArea = PI * (vRaio * vRaio);

      printf("\nA Área da circunferência é: %2f", (vArea));
      printf("\n\n");
}