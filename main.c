#include <stdio.h>
#include <math.h>
#include <Windows.h>
int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int x1, y1, x2, y2;
    double length;

    printf("������ ���������� ������� �� ���� ������� (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);


    int dx = x2 - x1;
    int dy = y2 - y1;


    length = sqrt(dx * dx + dy * dy);


    printf("������� �������: %.6f\n", length);

    return 0;
}
