//something 
#include <iostream>
#include <iomanip>

using namespace std;



class Program{
public:
	void taskNum1(){
		int N {10};
		int K {0};
		for (int i {0}; i < N; i++){
			K++;
			cout << "K = " << K << endl;
	
		}
	}

	void taskNum2(){
		int a, b;
    	std::cout << "Введите целые числа A и B (A < B): ";
    	std::cin >> a >> b;

    	int count = 0;
    	for (int i = a; i <= b; ++i) {
        	std::cout << i << " ";
        	count++;
    	}
    	std::cout << std::endl;
    	std::cout << "Количество чисел: " << count << std::endl;	
		}


	 void taskNum3(){
	int a, b;
    std::cout << "Введите целые числа A и B (A < B): ";
    std::cin >> a >> b;

    int count = 0;
    for (int i = b - 1; i > a; --i) {
        std::cout << i << " ";
        count++;
    }
    std::cout << std::endl;
    std::cout << "Количество чисел: " << count << std::endl;
	 }

	void taskNum4(){
	double price;
    std::cout << "Введите цену 1 кг конфет: ";
    std::cin >> price;

    std::cout << std::fixed << std::setprecision(2); // для красивого вывода денег

    for (int kg = 1; kg <= 10; ++kg) {
        std::cout << "Стоимость " << kg << " кг: " << price * kg << std::endl;
    }
	 }

	void taskNum5(){

    double price;
    std::cout << "Введите цену 1 кг конфет: ";
    std::cin >> price;

    std::cout << std::fixed << std::setprecision(2);

    for (int i = 1; i <= 10; ++i) {
        double weight = i / 10.0;
        std::cout << "Стоимость " << std::setprecision(1) << weight << " кг: "
                  << std::setprecision(2) << price * weight << std::endl;
    }
	}

	void taskNum6(){
    double price;
    std::cout << "Введите цену 1 кг конфет: ";
    std::cin >> price;

    std::cout << std::fixed << std::setprecision(2);

    for (int i = 12; i <= 20; i += 2) {
        double weight = i / 10.0;
        std::cout << "Стоимость " << std::setprecision(1) << weight << " кг: "
                  << std::setprecision(2) << price * weight << std::endl;
    }
	}

	void taskNum7(){
    	int a, b;
    	std::cout << "Введите целые числа A и B (A < B): ";
    	std::cin >> a >> b;

    	int sum = 0;
    	for (int i = a; i <= b; ++i) {
        	sum += i;
    	}

    	std::cout << "Сумма чисел от " << a << " до " << b << " равна: " << sum << std::endl;
	}

	void taskNum8(){
    	int a, b;
    	std::cout << "Введите целые числа A и B (A < B): ";
    	std::cin >> a >> b;

    	int product = 1;
    	for (int i = a; i <= b; ++i) {
        	product *= i;
    	}

    	std::cout << "Произведение чисел от " << a << " до " << b << " равно: " << product << std::endl;
	}

	void taskNum9(){
   		int a, b;
    	std::cout << "Введите целые числа A и B (A < B): ";
    	std::cin >> a >> b;

    	int sum_of_squares = 0;
    	for (int i = a; i <= b; ++i) {
        	sum_of_squares += (int)i * i;
    	}

    	std::cout << "Сумма квадратов от " << a << " до " << b << " равна: " << sum_of_squares << std::endl;

	}
	void taskNum10(){
    int n;
    std::cout << "Введите целое число N (> 0): ";
    std::cin >> n;

    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }

    std::cout << "Сумма ряда равна: " << std::fixed << std::setprecision(4) << sum << std::endl;
	}

	void taskNum11(){
    int N;
    std::cout << "Введите целое число N (> 0): ";
    std::cin >> N;

    int sum = 0;

    for (int i = N; i <= 2 * N; ++i) {
        sum += (int)i * i;
    }

    std::cout << "Сумма квадратов от N^2 до (2N)^2 равна: " << sum << std::endl;	
	}

	void taskNum12(){
    int N;
    std::cout << "Введите целое число N (> 0): ";
    std::cin >> N;

    double product = 1.0; 

    for (int k = 1; k <= N; ++k) {
        double current_factor = 1.0 + (double)k / 10.0;
        product *= current_factor;
    }

    std::cout << "Произведение N сомножителей равно: " << product << std::endl;


	}

	void taskNum13(){
    int N;
    std::cout << "Введите целое число N (> 0): ";
    std::cin >> N;

    double sum = 0.0;
    int sign = 1; 

    for (int k = 1; k <= N; ++k) {
        double term = 1.0 + (double)k / 10.0;
        
        sum += sign * term;
        
        sign *= -1; 
    }

    std::cout << "Знакочередующаяся сумма равна: " << sum << std::endl;
	}

	void taskNum14(){
    int N;
    std::cout << "Введите целое число N (> 0): ";
    std::cin >> N;
    int sum_n_squared = 0;
    int odd_number = 1; 
    std::cout << "Вычисленные квадраты чисел от 1 до N:\n";

    for (int k = 1; k <= N; ++k) {
        sum_n_squared += odd_number; 
        
        std::cout << "Квадрат числа " << k << " равен: " << sum_n_squared << std::endl;
        
        odd_number += 2; 
    }
    
    std::cout << "\nЗначение N^2 равно: " << sum_n_squared << std::endl;

	}

	void taskNum15(){
    double A;
    int N;

    std::cout << "Введите вещественное число A: ";
    std::cin >> A;
    std::cout << "Введите целое число N (> 0): ";
    std::cin >> N;

    double result = 1.0; 

    for (int i = 0; i < N; ++i) {
        result *= A; 
    }

    std::cout << A << " в степени " << N << " равно: " << result << std::endl;
	}



};


int main(){
	Program p;
	p.taskNum1();
	p.taskNum2();
	p.taskNum3();
	p.taskNum4();
	p.taskNum5();
	p.taskNum6();
	p.taskNum7();
	p.taskNum8();
	p.taskNum9();
	p.taskNum10();
	p.taskNum11();
	p.taskNum12();
	p.taskNum13();
	p.taskNum14();
	p.taskNum15();


	return 0;
}