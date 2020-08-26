//Basic Functions and procedures
/*
#include <iostream>
using namespace std;

int f(int x) {

	cout << x << endl;

	return 0;
}

int main() {

	f(5);
	f(19);
}
*/
//Fonksiyonlarýn Deðer Döndürmesi ve Çaðrýlmasý
/*
#include<iostream>
using namespace std;

int f(int x) {
	cout << x << endl;
	return 9999 ; // fonksiyon cagrýldýktan sonra """cagrildiði yere""" 9999 döndürür.
}

void g(int x) { // void kullanýlýyorsa return e gerek kalmaz. Her hangi bir deðer döndürmeyecek.
	cout << x + 5 << endl;
}

int main() {
	cout << f(5) << endl; // cagrildigi yer burasi ( fonksyona git fonksyonu tamamlayip döndükten sonra return deðerini basýp alt satira geç)
	cout << f(19) << endl;// cagrildigi yer burasi

	g(10);

}
*/
//Example
/*
//Kullanýcýdan iki sayý alarak kombinasyonlarýný ekrana bastýran fonks.

#include <iostream>
using namespace std;


int factorial(int x) { 
	int carp = 1;

	for (int i = x; i > 0; i--) {
		
		carp *= i; // carp = carp * i

	}
	return carp;
}

int combination(int n,int r) {

	return factorial(n) / (factorial(r)*factorial(n-r));

}


int main() {
	int a = 0;
	int b = 0;
	cout << "Enter x,y values for C(x,y) :..." << endl;
	cin >> a;
	cin >> b;
	
	cout << "C( "<< a << ","<< b << " ) =" << combination(a, b) << endl;

	return 0;
}
*/
//Özyineli Fonksiyonlar(Recursive Functions) **************************
/*
// 3!=3*2! , 2!=2*1! , 1!=1 Call back stack kullanarak sadece çarpma yaparak fakteroyel kullanmadan hesap yapma.

//recursive
#include<iostream>
using namespace std;

int factoriallr(int n) { // factoriallr(n) = n* factoriallr(n-1) [RECURSIVE FUNC]
	if (n == 1)
		return 1;
	return n * factoriallr(n - 1);
}

//iterative 
int factorial(int x) {
	int carp = 1;

	for (int i = x; i > 0; i--) {

		carp *= i; // carp = carp * i

	}
	return carp;
}


int combination(int n, int r) {

	return factorial(n) / (factorial(r) * factorial(n - r));

}


int main() {
	int a = 0;
	int b = 0;
	cout << "Enter x,y values for C(x,y) :..." << endl;
	cin >> a;
	cin >> b;
	cout << a << "!= " << factorial(a) << endl;
	cout << b << "!= " << factorial(b) << endl;
	
	cout << "C( " << a << "," << b << " ) =" << combination(a, b) << endl;

	cout << factoriallr(a) << endl;

	return 0;
}
*/
//Fonksiyonlar ile ilk 20 Mersanne Sayýsý 1 3 7 15 31...Homework (32.) 
/*
#include <iostream>
using namespace std;

int funcpow(int base, int exponent) {

	int result = 1;
	for (int i= 1; i <= exponent; i++)
		result *= base;
	return result;
}
int main() {

	for (int i = 1; i <= 20; i++) {//pow(2,n)

		cout << funcpow(2, i)-1 << endl;
	}
	return 0;
}
*/
//Ýlk n tane Asal sayý Homework (32.) ***************
/*
//2.3.4.5.... bölünemeyen sayýlar...

#include <iostream>
using namespace std;

bool primenum(int x) {

	for (int i = 2; i < x; i++) {
		if (x % i == 0)
			return false;
	}

	return true;
}

int main() {
	int totalprime = 0;
	int limit = 0;
	cout << "Enter a limit value for prime numbers:..." << endl;
	cin >> limit;

	cout << "First " <<limit <<" prime numbers are : ..." << endl;

	for (int i = 2; totalprime < limit; i++) {
		
		if (primenum(i)) { // ==true . demektir. True ise ise girer.
			
			cout << i << endl;
			totalprime++;
		}
		
	}
}
*/
//Exapmle Özyineli Çarpým Fonksiyonu (37.)
/*
#include<iostream>
using namespace std;
int multiplyR(int a, int b) { // bitis,adim,baslangic
	if (b == 0)
		return 0;
	if (b < 0)
		return multiplyR(0 - a,0 - b); // - olan b deðerini + yapýp a yi - yapmak.
	return a + multiplyR(a, b - 1);
}

//f(3,4) = 3+ f(3,3)...

int multiply(int a, int b) {

	int sonuc = 0;
	for (int i = 0; i < b; i++) {
		sonuc += a; // sonuc =sonuc +a 
	}
	return sonuc;
}


int main() {

	int a;
	int b;

	cout << "Enter a and b values for a*b : ..." << endl;
	cout << "a : ";
	cin >> a ;
	cout << "b : ";
	cin >> b;

	cout << multiplyR(a,b) << endl;

	return 0;
}
*/
//Random number generation ********
/*
#include <iostream>
#include <ctime> // random sayý atarken önemli kütüphane

using namespace std;

int main() { // random number generator

	int rg;

	srand(time(NULL)); // seed
	rg = rand()%10 +1; // sadece rg=rand(); döndürülürse cok büyük sayýlar gelir. Bu yüzden mod kullanýp 0 olmamasý için +1 veriyoruz.
	cout << rg << endl;
	cout << endl;

	rg = rand() % 6 + 1; // zar atmada 1 ile 6 arasý sayý gelecek.
	cout << rg;
	for (int i = 1; i <= rg; i++)
		cout << " * ";
	cout << endl;
	cout << endl;

	rg = rand() % 2 + 1; // yazý tura da yaz veya tura gelmesi.
	if (rg == 1)
		cout << "Head" << endl;
	else
		cout << "Tail" << endl;
	cout << endl;

	rg = rand() % 100; // 0-100 arasýnda her hangi bir sayý
	cout << rg << endl;


	return 0;
}
*/

//Doðukan Kaan Bozkurt