#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int task1()
{
	char c;
	printf("Введите число 6 или букву a ");
	scanf("%c", &c);
	switch (c)
	{
	case 'a':
		printf("Введена буква 'a'.\n");
		break;
	case '6':
		printf("Введено число '6'.\n");
		break;
	default:
		printf("Неизвестный символ\n");
	}
}
int task2(){
	float x, y;
	char switch_on;
	printf("Введите первое число\n");
	scanf("%f", &x);
	printf("Введите второе число\n");
	scanf("%f", &y);
	printf("Введите знак операции\n");
	scanf(" %c", &switch_on);
	switch (switch_on)
	{
	case '+':
		printf("Результат сложения: %.2f\n", x + y);
		break;
	case '-':
		printf("Результат вычитания: %.2f\n", x - y);
		break;
	case '*':
		printf("Результат умножения: %.2f\n", x * y);
		break;
	case '/':
		if (y != 0)
			printf("Результат деления: %.2f\n", x / y);
		else
			printf("Ошибка: деление на ноль!\n");
		break;
	default:
		printf("Неизвестная операция\n");
	}
}
void task3() {
	char c;
	printf("Введите букву русского алфавита: ");
	scanf(" %c", &c);
	switch (c) {
	case 'а': case 'А': printf("Буква '%c' — 1-я буква алфавита.\n", c);  break;
	case 'б': case 'Б': printf("Буква '%c' — 2-я буква алфавита.\n", c);  break;
	case 'в': case 'В': printf("Буква '%c' — 3-я буква алфавита.\n", c);  break;
	case 'г': case 'Г': printf("Буква '%c' — 4-я буква алфавита.\n", c);  break;
	case 'д': case 'Д': printf("Буква '%c' — 5-я буква алфавита.\n", c);  break;
	case 'е': case 'Е': printf("Буква '%c' — 6-я буква алфавита.\n", c);  break;
	case 'ё': case 'Ё': printf("Буква '%c' — 7-я буква алфавита.\n", c);  break;
	case 'ж': case 'Ж': printf("Буква '%c' — 8-я буква алфавита.\n", c);  break;
	case 'з': case 'З': printf("Буква '%c' — 9-я буква алфавита.\n", c);  break;
	case 'и': case 'И': printf("Буква '%c' — 10-я буква алфавита.\n", c); break;
	case 'й': case 'Й': printf("Буква '%c' — 11-я буква алфавита.\n", c); break;
	case 'к': case 'К': printf("Буква '%c' — 12-я буква алфавита.\n", c); break;
	case 'л': case 'Л': printf("Буква '%c' — 13-я буква алфавита.\n", c); break;
	case 'м': case 'М': printf("Буква '%c' — 14-я буква алфавита.\n", c); break;
	case 'н': case 'Н': printf("Буква '%c' — 15-я буква алфавита.\n", c); break;
	case 'о': case 'О': printf("Буква '%c' — 16-я буква алфавита.\n", c); break;
	case 'п': case 'П': printf("Буква '%c' — 17-я буква алфавита.\n", c); break;
	case 'р': case 'Р': printf("Буква '%c' — 18-я буква алфавита.\n", c); break;
	case 'с': case 'С': printf("Буква '%c' — 19-я буква алфавита.\n", c); break;
	case 'т': case 'Т': printf("Буква '%c' — 20-я буква алфавита.\n", c); break;
	case 'у': case 'У': printf("Буква '%c' — 21-я буква алфавита.\n", c); break;
	case 'ф': case 'Ф': printf("Буква '%c' — 22-я буква алфавита.\n", c); break;
	case 'х': case 'Х': printf("Буква '%c' — 23-я буква алфавита.\n", c); break;
	case 'ц': case 'Ц': printf("Буква '%c' — 24-я буква алфавита.\n", c); break;
	case 'ч': case 'Ч': printf("Буква '%c' — 25-я буква алфавита.\n", c); break;
	case 'ш': case 'Ш': printf("Буква '%c' — 26-я буква алфавита.\n", c); break;
	case 'щ': case 'Щ': printf("Буква '%c' — 27-я буква алфавита.\n", c); break;
	case 'ъ': case 'Ъ': printf("Буква '%c' — 28-я буква алфавита.\n", c); break;
	case 'ы': case 'Ы': printf("Буква '%c' — 29-я буква алфавита.\n", c); break;
	case 'ь': case 'Ь': printf("Буква '%c' — 30-я буква алфавита.\n", c); break;
	case 'э': case 'Э': printf("Буква '%c' — 31-я буква алфавита.\n", c); break;
	case 'ю': case 'Ю': printf("Буква '%c' — 32-я буква алфавита.\n", c); break;
	case 'я': case 'Я': printf("Буква '%c' — 33-я буква алфавита.\n", c); break;
	default:
		printf("Символ '%c' не является буквой русского алфавита.\n", c);
		break;
	}
}
int main(){
	setlocale(LC_ALL, "Russian");
	task1();
	task2();
	task3();
	return 0;
}