#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{

    float a, b, c;//�����,������ � ������

    float d; // ���������,������� ��� ���� �����


    //������ ������ ������
    printf("\nEnter  width:");
    scanf("%f",&a);
    printf("\nEnter  lenght:");
    scanf("%f", &b);
    printf("\nEnter  height:");
    scanf("%f", &c);

    //������� ����� ��������� �� ������� � ������� �� �� �������
    d= sqrt(pow(c, 2)+pow(a,2)+pow(b,2));
    printf("\n Diagonale = %f ",d);


    return 0;
}
