#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{

    float a, b, c;//длина,ширина и высота

    float d; // диагональ,которую нам надо найти


    //просим ввести данные
    printf("\nEnter  width:");
    scanf("%f",&a);
    printf("\nEnter  lenght:");
    scanf("%f", &b);
    printf("\nEnter  height:");
    scanf("%f", &c);

    //считаем длину диагонали по формуле и выводим ее на консоль
    d= sqrt(pow(c, 2)+pow(a,2)+pow(b,2));
    printf("\n Diagonale = %f ",d);


    return 0;
}
