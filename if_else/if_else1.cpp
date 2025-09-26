#include <iostream>

using namespace std;

//#define 


class Program{
	public:
		void Task_1(){
			// Если число положительно то к нему добавлятся +1
			int number {};
			cout << "Enter the number: ";
			cin >> number;
			if (number > 0){
				cout << number+1 << endl;
			}
			else{
				cout << number;
			}

		}
		void Task_2(){
			int number {};
			cout << "Enter the number: ";
			cin >> number;
			if (number > 0){
				cout << number+1 << endl;
			}
			else{
				cout << number-2 << endl;
			}

		}

		void Task_3(){
			int number {};
			cout << "Enter the number: ";
			cin >> number;
			if (number > 0){
				cout << number+1 << endl;
			}
			else if(number < 0){
				cout << number-2 << endl;
			}
			else if(number == 0){
				cout << number+10 << endl;
			}

		}


		void Task_4(){
			int a, b, c;
			cout << "num1:";
			cin >> a;
			cout << "num2:";
			cin >> b;
			cout << "num3:";
			cin >> c;

			int count = 0;

			if (a > 0) count++;
			if (b > 0) count++;
			if (c > 0) count++;

			cout << count << endl;

		}

		void Task_5(){
			int a, b, c;
			cout << "num1:";
			cin >> a;
			cout << "num2:";
			cin >> b;
			cout << "num3:";
			cin >> c;

			int count = 0;

			if (a < 0) count++;
			if (b < 0) count++;
			if (c < 0) count++;

			cout << count << endl;

		}

		void Task_6(){
			int a, b, c {};
			cout << "num (a): ";
			cin >> a;
			cout << "num (b): ";
			cin >> b;

			if (a > b) c = a;
			if (b > a) c = b;


			cout << "The bigest num: " << c << endl;

		}


		void Task_7(){
			int a, b, c {};
			cout << "num (a): ";
			cin >> a;
			cout << "num (b): ";
			cin >> b;

			if (a < b) cout << 1 << endl;
			else if (b < a) cout << 2 << endl;
			else cout << "Они равны" << endl;

		}


		void Task_8(){
			int a, b, c {};
			cout << "num (a): ";
			cin >> a;
			cout << "num (b): ";
			cin >> b;

			if (a > b or b < a)
				cout << "Bigest num " << a << endl;
				cout << "Smallest num " << b << endl;
		}

		void Task_9(){
			int a, b, c {};
			cout << "num (a): ";
			cin >> a;
			cout << "num (b): ";
			cin >> b;

			if (a > b or b < a)
				cout << "Bigest num " << a << endl;
				cout << "Smallest num " << b << endl;
		}

		void Task_10(){
			int a, b, c {};
			cout << "num (a): ";
			cin >> a;
			cout << "num (b): ";
			cin >> b;

			if (a > b or b < a)
				cout << "Bigest num " << a << endl;
				cout << "Smallest num " << b << endl;
		}


};





int main(){
	Program p;
	// cout << "Если число положительно то к нему добавлятся +1. В противном случае просто вывести" << endl;
	// p.Task_1();
	// cout << endl;
	// cout << "Если число положительно то к нему добавлятся +1. В противном случае -2" << endl;	
	// p.Task_2();
	// cout << endl;
	// cout << "Если число положительно то к нему добавлятся +1. В противном случае -2. Если нулевое то +10" << endl;	
	// p.Task_3();
	// cout << endl;
	// cout << "Даны 3 целых числа. Найти количестов положительнх чисел" << endl;	
	// p.Task_4();
	// cout << endl;
	// cout << "Даны 3 целых числа. Найти количестов отрицательных чисел" << endl;	
	// p.Task_5();
	// cout << endl;
	// cout << "Даны 2 числа. вывести большее из них" << endl;	
	// p.Task_6();

	cout << endl;
	cout << "Даны 2 числа. вывести поряковый номер меньшего" << endl;	
	p.Task_7();

	cout << endl;
	cout << "Даны 2 числа. вывести сперва большой потом меньшего" << endl;	
	p.Task_8();



	return 0;
}
