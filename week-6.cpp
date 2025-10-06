#include <iostream>
using namespace std;

class WhileTasks {
public:
    // While1 — длина незанятой части (A % B)
    void while1() {
        int A, B;
        cout << "A B: ";
        cin >> A >> B;
        int rest = A;
        while (rest >= B) rest -= B;
        cout << "While1 -> Остаток: " << rest << endl;
    }

    // While2 — количество отрезков B на отрезке A (A / B)
    void while2() {
        int A, B;
        cout << "A B: ";
        cin >> A >> B;
        int count = 0;
        int temp = A;
        while (temp >= B) {
            temp -= B;
            count++;
        }
        cout << "While2 -> Кол-во отрезков: " << count << endl;
    }

    // While3 — деление с остатком (N / K и N % K)
    void while3() {
        int N, K;
        cout << "N K: ";
        cin >> N >> K;
        int q = 0;
        int r = N;
        while (r >= K) {
            r -= K;
            q++;
        }
        cout << "While3 -> Частное: " << q << " Остаток: " << r << endl;
    }

    // While4 — проверка, является ли N степенью 3
    void while4() {
        int N;
        cout << "N: ";
        cin >> N;
        int power = 1;
        while (power < N) power *= 3;
        cout << "While4 -> " << ((power == N) ? "TRUE" : "FALSE") << endl;
    }

    // While5 — найти показатель K, если N = 2^K
    void while5() {
        int N;
        cout << "N: ";
        cin >> N;
        int K = 0;
        int val = 1;
        while (val < N) {
            val *= 2;
            K++;
        }
        cout << "While5 -> K = " << K << endl;
    }

    // While6 — двойной факториал N!!
    void while6() {
        int N;
        cout << "N: ";
        cin >> N;
        double res = 1;
        int i = N;
        while (i > 1) {
            res *= i;
            i -= 2;
        }
        cout << "While6 -> N!! = " << res << endl;
    }

    // While7 — минимальное K, где K^2 > N
    void while7() {
        int N;
        cout << "N: ";
        cin >> N;
        int K = 1;
        while (K * K <= N) K++;
        cout << "While7 -> K = " << K << endl;
    }

    // While8 — максимальное K, где K^2 ≤ N
    void while8() {
        int N;
        cout << "N: ";
        cin >> N;
        int K = 0;
        while ((K + 1) * (K + 1) <= N) K++;
        cout << "While8 -> K = " << K << endl;
    }

    // While9 — минимальное K, где 3^K > N
    void while9() {
        int N;
        cout << "N: ";
        cin >> N;
        int K = 0;
        int p = 1;
        while (p <= N) {
            p *= 3;
            K++;
        }
        cout << "While9 -> K = " << K << endl;
    }

    // While10 — максимальное K, где 3^K < N
    void while10() {
        int N;
        cout << "N: ";
        cin >> N;
        int K = 0;
        int p = 1;
        while (p * 3 < N) {
            p *= 3;
            K++;
        }
        cout << "While10 -> K = " << K << endl;
    }
};

int main() {
    WhileTasks w;

    cout << "\n--- While1 ---\n";
    w.while1();

    cout << "\n--- While2 ---\n";
    w.while2();

    cout << "\n--- While3 ---\n";
    w.while3();

    cout << "\n--- While4 ---\n";
    w.while4();

    cout << "\n--- While5 ---\n";
    w.while5();

    cout << "\n--- While6 ---\n";
    w.while6();

    cout << "\n--- While7 ---\n";
    w.while7();

    cout << "\n--- While8 ---\n";
    w.while8();

    cout << "\n--- While9 ---\n";
    w.while9();

    cout << "\n--- While10 ---\n";
    w.while10();

    return 0;
}
