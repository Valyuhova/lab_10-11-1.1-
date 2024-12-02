#include <stdio.h> //Підключення бібліотеки
#include <math.h> //Підключення бібліотеки

int main() //Підключення головної функції
{
	float S, c, x; //Введення змінних
	printf("input c and x:\n"); //Виведення тексту на екран
	scanf_s("%f%f", &c, &x); //Зчитування даних та їх запис 
	S = log((c * exp((-2.5 * c) + x) + pow(atan(fabs(c - x)), 2)) / (fabs(pow(-1, -2.5 * c) + sqrt(fabs(log(fabs(x)) + log10(fabs(c))))))) / (log(c)); //Формула, за якою здійснюється обчислення
	printf("result: %f\n", S); //Виведення тексту на екран

	float k, m, y; //Введення змінних
	printf("input m and y:\n"); //Виведення тексту на екран
	scanf_s("%f%f", &m, &y); //Зчитування даних та їх запис
	k = sqrt(pow(sin(m * y), 2) + pow(cos(y / m), 2) + 0.64) / (log10(fabs(m * y)) + log(fabs(pow(m, 2) - pow(y, 3))) + exp(-(m - y)));//Формула, за якою здійснюється обчислення
	printf("result: %f\n", k); //Виведення тексту на екран

	return 0; //Успішне завершення програми
}
