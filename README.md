<img src="https://capsule-render.vercel.app/api?type=wave&color=gradient&height=200&section=header&text=24-03%20Univer%20Tasks!&fontSize=50" />

# University Tasks
---

> Some tasks given by my professor from my university  
> And here is the proofs that I completed all tasks 

### Begin 1-15 (WEEK 2)
- Clаss `Program` для удобства
	- внутри `begin_1.cpp` все задачи от 1 до 15, некоторые могут быть с ошибкой (надо фиксануть)

```cpp
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
};


```



### Boolean 1-10 (WEEK 3) 
- Clаss `Boolean_1` для удобства
    - внутри `boolean_1.cpp` все задачи от 1 до 10)

```cpp
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
};

```

> Проверка чисел на истенность и равенство используя 'bool' and 'if-else'