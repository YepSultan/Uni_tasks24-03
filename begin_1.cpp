#include <iostream>
#include <cmath>
using namespace std;

#define in  cin
#define out cout
#define nl  endl

class Program {
public:
    void begin1() {
    	//Периметр квадрата
        double a;
        double P;
        out << "Сторона квадрата (a): ";
        in >> a;
        P = a * 4;
        out << "Периметр квадрата (P): " << P << nl;
    }
    void begin2() {
    	// Площадь квадрата
    	double a;
    	double S;
    	out << "Сторона квадрата (а): ";
    	in >> a;
    	S = a*a;
    	out << "Площадь квадрата (): " << S << nl;
    }
    void begin3(){
    	// Прямоугольник Площадь и периметр 
    	double a;
    	double b;
    	double S;
    	double P;

    	out << "Первая сторона (а): " << nl;
    	in >> a;
    	out << "Вторая сторона (б): " << nl;
    	in >> b; 

    	S = a*b;
    	out << "Площадь прямоугольника (S): " << S << nl;
    	P = 2*(a+b);
    	out << "Периметр прямоугольника (P): " << P << nl;

    }
    void begin4(){
    	double d;
    	double p {3.14};
    	double L;

    	out << "Окружность (d): ";
    	in >> d;

    	L = p*d;

    	out << "Длина окружности (L): " << L << nl;


    }
    void begin5(){
    	double a;
    	double V;
    	double S;

    	out << "Длина ребер куба (a): ";
    	in >> a;
    	V = a*a*a;
		out << "Объём куба (V): " << V<< nl;
		S = 6*(a*a);
		out << "Площадь его поверхности (S): " << S << nl;


    }
    void begin6(){
    	double a;
    	double b;
    	double c;
    	double V; // Объём
    	double S; // Площадь

    	out << "Длина (a): ";
    	in >> a;
    	out << "Длина (b): ";
    	in >> b;
    	out << "Длина (c): ";
    	in >> c;

		V = a*b*c;
    	out << "Объём прямоугольного параллелепида (V): " << V << nl;
    	S = 2*(a*b + b*c + a*c);
    	out << "Площадь поверхности (S): " << S << nl;

    }
    void begin7(){
    	double R;
    	double P {3.14};
    	double L;
    	double S;

    	out << "Радиус (R): ";
    	in >> R;

    	L = 2*P*R;
		out << "Длина: " << L << nl;
		S = P*(R*R);
    	out << "Площадь: " << S << nl;
	}

    void begin8(){
    	double a;
    	double b;
    	double c;

    	out << "Первое число (1): ";
    	in >> a;	
		out << "Второе число (2): ";
		in >> b;
		c = (a+b)/2;
    	out << "Cреднее арифметическое: " << c << nl;
    }

    void begin9(){
    	double a;
    	double b;
    	double c;

    	out << "Первое число (1): ";
    	in >> a;	
		out << "Второе число (2): ";
		in >> b;
		c = a * b;
    	out << "Cреднее геометрическое: " << sqrt(c) << nl;
    }
    
    void begin10(){
    	double a;
    	double b;
    	double c;
    	double s;

    	out << "Первое число (1): ";
    	in >> a;	
		out << "Второе число (2): "; 
		in >> b;
		c = a+b;
    	out << "Сумма двух чисел: " << c << nl;
    	c = a-b;
    	s = b-a;
    	out << "Разность двух чисел: " << c << nl << s << nl;
    	c = (a*2)+(b*2);
    	out << "Квадрат двух чисел: " << c << nl;
    }
    
    void begin11(){
    	double a;
    	double b;
    	double c;
    	double s;

    	out << "Первое число (1): ";
    	in >> a;	
		out << "Второе число (2): "; 
		in >> b;
		c = a+b;
    	out << "Сумма двух чисел: " << c << nl;
    	c = a-b;
    	s = b-a;
    	out << "Разность двух чисел: " << c << " | " << s << nl;
    	c = (a*a)+(b*b);
    	out << "Произведение двух чисел: " << c << nl;
    	c = a+b;
    	out << "Квадрат двух чисел: " << abs(c) << nl;
    }

    void begin12(){
    	double a;
    	double b;
    	double c;
    	double P;

    	out << "Первое число (1): ";
    	in >> a;	
		out << "Второе число (2): "; 
		in >> b;
		c = (a*a)+(b*b);
    	out << "Сумма двух чисел: " << sqrt(c) << nl;
    	P = (a+b+c);
    	out << "Сумма двух чисел: " << sqrt(c) << nl;

    }

    void begin13(){
    	double R1;
    	double R2;
    	double S1;
    	double S2;
    	double S3;
    	double p {3.14};

    	out << "Первое число (1): ";
    	in >> R1;	
		out << "Второе число (2): "; 
		in >> R2;
		S1 = p*(R1*R1);
    	out << "Сумма двух чисел: " << S1 << nl;
		S2 = p*(R2*R2);
    	out << "Сумма двух чисел: " << S1 << nl;
		S3 = S1 - S2;
    	out << "Сумма двух чисел: " << S1 << nl;


    }


    void begin14(){
    	double L;
    	double R;
    	double S;
    	double p {3.14};

    	out << "Первое число (1): ";
    	in >> R1;	
		R = L+2*p*R;
    	out << "Радиус: " << R << nl;
    	S = p*(R*R);
    	out << "Площадь: " << S << nl;


    }

    void begin15(){
    	double S;
    	double D; //?
    	double L; //?
    	double p {3.14};

    	out << "Площадь (S): " << nl;
    	in >> S;

    	D = sqrt((4 + S)/p);
    	out << "Diametr: " D << nl;



    }

    
    

};

int main() {
    Program p;
    out << "Begin1 (Ищем периметр квадрата)" << nl;
    p.begin1();
    out << "Begin2 (Ищем площадь квадрата)" << nl;
    p.begin2();
    out << "Begin3 (Ищем площадь и периметр прямоугольника)" << nl;
    p.begin3();
    out << "Begin4 (Ищем длину окружности)" << nl;
    p.begin4();
    out << "Begin5 (Ищем объём куба и площадь поверхности)" << nl;
    p.begin5();
    out << "Begin6 (Ищем объём прямоугольного параллелепида и площадь поверхности)" << nl;
    p.begin6();
    out << "Begin7 (Ищем длину окружности и площадь круга заданного радиуса)" << nl;
    p.begin7();
    out << "Begin8 (Ищем среднее арифметическое)" << nl;
    p.begin8();
    out << "Begin9 (Ищем среднее геометрическое)" << nl;
    p.begin9();
    out << "Begin10 (Ищем Разность/Сумму/Произведение и частное их квадаратов)" << nl;
    p.begin10();
    out << "Begin11 (Ищем Разность/Сумму/Произведение и частное их модулей)" << nl;
    p.begin11();
    out << "Begin12 (Ищем длину окружности)" << nl;
    p.begin12();
    out << "Begin13 (Ищем длину окружности)" << nl;
    p.begin13();
    out << "Begin14 (Ищем длину окружности)" << nl;
    p.begin14();
    out << "Begin15 (Ищем длину окружности)" << nl;
    p.begin15();


    return 0;
}
