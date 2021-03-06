#include <iostream>
using namespace std;

void simple(int a) {
 int count;
  count = 0;
   for (int i = 1; i < a; i++) {
     if (a % i == 0) {
      count += 1;
      }
   }
 if (count > 1)
 cout << "Число " << a << " НЕ простое" << endl;
 else
 cout << "Число "<< a << " простое" << endl;
}

void perfect(int num) {
	int i = 1;
	int sum = 0;

	while (i < num) {
		if (num % i == 0) {
			sum += i;
		}
		i += 1;
	}

	if (num == sum) {
		cout << "Число " << num << " совершенное\n";
	}
	else {
		cout << "Число " << num << " несовершенное\n";
	}
}

int NOD(int a, int b) {
	int a1 = a;
	int b1 = b;
	while (a > 0 && b > 0) {
		if (a > b) {
			a = a % b;
		}
		else {
			b = b % a;
		}
	}
	cout << "NOD(" << a1 << ", " << b1 << ") = " << a + b << "\n";
	return a + b;
}

int NOK(int a, int b) {
	int NOK = a * b / NOD(a, b);
	cout << "NOK(" << a << ", " << b << ") = " << NOK << "\n";
	return NOK;
}
int main() {
 setlocale(LC_ALL, "ru");
 int a, b;
 cout << "Введите числа: ";
 cin >> a >> b;
 simple(a);
 simple(b);
 perfect(a);
 perfect(b);
 NOK(a, b);
}