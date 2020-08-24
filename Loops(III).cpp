//While
/*
#include <iostream>
using namespace std;

int main() {

	int a;
	a = 1;
	while (a <= 10) {
		cout << a <<" - Hello! "<< endl;
		a++;
	}

	return 0;
}
*/
//For
/*
#include <iostream>
using namespace std;

int main() {
	
	for (int i = 1; i <=10; i++) {
		cout << i << " - Hello! " << endl;

	}
	return 0;
}
*/
//do/while
/*
#include<iostream>
using namespace std;

int main() {

	int x = 0;
	do {
		cout << x << " - Hello! " << endl;
		x++;
	} while (x <= 10);
	cout << x << endl;

	return 0;
}
*/
//Example 1 
/*
#include <iostream>
using namespace std;

int main() {
	int a = 1;
	while (a <= 100) {
		if (a % 2 == 1) {
			cout << a << endl;	
		}
		a++;
	}
	return 0;
}
*/
//Example 4***
/*
//Kullanýcý -1 girene kadar bütün sayýlarý okuyup ortalamalarýný ekrana bastýrma;

#include<iostream>
using namespace std;

int main() {
	
	int total=0;
	int eq=0;
	int num=0;

	for (int i = 0; num != -1; i++) { // sonzsuz döngü için for (;;){...} /Buraya for (int i =0;;i++) veya for (;;) de yazýlabilir.

		cout << "Enter an integer ..." << endl;
		cin >> num;
		if (num == -1)
			break;
		total = total + num; // total += current
		eq++;

	}
	cout << "Addition of the inputs is " << total << endl;
	cout << "Total number of inputs is " << eq << endl;
	cout << "Average of the inputs is " <<(float) total / eq << endl;
	
	return 0;
}
*/
//break and continue comments
/*
#include< iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10; i++) {
		if (i == 5) 
			break;// 5 gördüðünde döngüyü direkt koparýr. Bu adýmdan sonraki adýmlarý çalýþtýrma.
		cout << i << endl;

	}

	cout << "\n" << endl;

	for (int i = 0; i < 10; i++) {
		if (i == 5)
			continue;// döngünün sadece 5 oldugundaki adýmýndan sonraki adýmlarýný koparir. 6 deðeri için for dan devam eder.
		cout << i << endl;

	}
	
	return 0;
}
*/
//Example 7 (Fibonacci)
/*
#include<iostream>
using namespace std;

int main() {
	int b=1;
	int a=1;
	int c = 0;
	int limit;

	cout << "How many numbers do you want to see from the Fibonacci Series ... " << endl;
	cin >> limit;
	cout << "\n" << endl;

	if (limit == 0)
		cout << "" << endl;
	else if (limit <= 2) {
		for (int i = 1;i<=limit; i++) {
			cout << "1 " << endl;
		}
	}
	else if (limit >= 3) {
		cout << a << endl;
		cout << b << endl;
		for (int i = 1; i<=limit-2; i++) {
			c = a + b;
			a = b;
			b = c;
			cout << c << endl;

		}
	}
	
	return 0;
}
*/

//Doðukan Kaan Bozkurt
