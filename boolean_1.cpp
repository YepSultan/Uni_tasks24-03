#include<iostream>

using namespace std;

class Boolean_1
{
public:
	// Проверка на число является ли оно положительным
	void boolean1(){
		int A{};
		cout << "Num: ";
		cin >> A;
		bool result = A > 0;
		cout << "Result: " << result << endl;

	}
	// Проверка на нечётность и чётность (boolean2 + boolean3)
	void boolean2_and_3(){
		int A{};
		cout << "Num: ";
		cin >> A;
		if (A % 2 == 0)	
			cout << A << " | <--чётное" << endl;
		else
			cout << A << " | <--нечётное" << endl;

	}
	// Проверка двух чисел на истинность высказывания (A > 2, B <= 3)
	void boolean4(){
		int A{};
		int B{};
		cout << "Num1 (A): ";
		cin >> A;
		cout << "Num2 (B): ";
		cin >> B;
		if (A > 2 or B <= 3)
			cout << 1 << " | <--True" << endl;
		else 
			cout << 0 << " | <--False" << endl;
	}

	void boolean5(){
		int A{};
		int B{};
		cout << "Num1 (A): ";
		cin >> A;
		cout << "Num2 (B): ";
		cin >> B;
		if (A > 2 or B <= 3)
			cout << 1 << " | <--True" << endl;
		else 
			cout << 0 << " | <--False" << endl;
	}

	void boolean6(){
		int A{};
		int B{};
		int C{};
		cout << "Num1 (A): ";
		cin >> A;
		cout << "Num2 (B): ";
		cin >> B;
		cout << "Num3 (C): ";
		cin >> C;
		if (A < B < C)
			cout << 1 << " | <--True" << endl;
		else 
			cout << 0 << " | <--False" << endl;

	}

	void boolean7(){
		int A{};
		int B{};
		int C{};
		cout << "Num1 (A): ";
		cin >> A;
		cout << "Num2 (B): ";
		cin >> B;
		cout << "Num3 (C): ";
		cin >> C;
		if (A <= B and C <= B)
			cout << 1 << " | <--True" << endl;
		else 
			cout << 0 << " | <--False" << endl;
	}

	void boolean8(){
		int A{};
		int B{};
		cout << "Num1 (A): ";
		cin >> A;
		cout << "Num2 (B): ";
		cin >> B;
		if (A and B % 2 != 0)
			cout << 1 << " | <--Нечётное" << endl;
		else 
			cout << 0 << " | <--Чётное" << endl;
	}

	void boolean10(){
		int A{};
		int B{};
		cout << "Num1 (A): ";
		cin >> A;
		cout << "Num2 (B): ";
		cin >> B;
		if (A or B % 2 != 0)
			cout << 1 << " | <--True" << endl;
		else 
			cout << 0 << " | <--False" << endl;
	}

	
};





int main(){
	Boolean_1 b;
	// cout << "Проверка на число является ли оно положительным:  " << endl;
	// b.boolean1();

	// cout << "Проверка на нечетность числа используя (% !=) " << endl;
	// b.boolean2_and_3();

	// cout << "Проверка двух чисел на истинность высказывания (A > 2, B <= 3)" << endl;
	// b.boolean4();

	// cout << "Проверка трёх чисел на (Справидливы двойное неравенство A < B < C" << endl;
	// b.boolean6();

	// cout << "Проверка что число В находиться между числами А и С" << endl;
	// b.boolean7();

	// cout << "Проверка двух целых чисел на то что они нечетные (A and B)" << endl;
	// b.boolean8();

	// cout << "Проверка двух числе на то что хотябы один из них нечетное (A and B)" << endl;
	// b.boolean9();

	cout << "Даны два целых числа. Ровно одно из чисел А и В нечетное" << endl;
	b.boolean10();

	return 0;


}
