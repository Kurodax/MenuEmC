// #include <iostream> 
// #include <cmath>

// using namespace std;

// #define PI 3.14159

// int main(){

//    int raio;
//    float area;

//    printf("Entre com o valor do raio: ");
//    scanf("%i", raio);
//    area = PI * pow(raio, 2);
//    printf("Área é ", area);
// }
#include <stdio.h>
#include <math.h>


#define PI 3.14159

int main(void)
{
	float raio, pi=3.14, area;
	
      printf("Entre com o valor do raio: "); 
      scanf("%f", &raio);
   
      area = pi * raio * raio;
   
      printf("AREA = %.2f m2 \n", area);

	return 0;
}