//if,else, else if 
/*
#include<iostream>
using namespace std;

int main() {
	int a;
	a = 10;

	if (a > 20) { // boolean : True / False
		cout << "a 20'den buyuktur." << endl;
	}else if (a==20){ // �ift = �nemli. == e�it mi acaba , != e�it de�il mi acaba.
		cout << "a 20'ye esittir." << endl;
	}
	else {
		cout << "a 20'den kucuktur." << endl;
	}

	return 0;
}
*/
//Example
/*
#include<iostream>
using namespace std;

int main() {
	int mark;
	cout << "Bir not giriniz, " << endl;
	cin >> mark;
	if (mark < 50 && mark>=0) { // && ve ba�lac�.
		cout << "F" << endl;
	}
	else if (mark >= 50 && mark < 70) {
		cout << "C" << endl;
	}
	else if (mark >= 70 && mark < 90) {
		cout << "B" << endl;
	}
	else if (mark >= 90 && mark <= 100) {
		cout << "A" << endl;
	}
	else {
		cout << "Not tanimli degil." << endl;
	}
	return 0;
}
*/
//Switch-case yapisi
/*
#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "1-3 arasinda bir deger giriniz..." << endl;
	cin >> a;
	
	switch (a) { // switch hangi de�erin kontrol edilecegini al�r. ( a  y� kontrol ediyor ) , a neye e�itse o de�ere atlayip �al���r.
	case 1 : 
		cout << '1';
		break;//e�er aralara break koyulmassa case 2 yi de basar break g�rene kadar ba�lad�g� yerden devam eder.*********************
	case 2 :
		cout << "2";
		break;
	case 3 :
		cout << "3";
		break;
	default : // yukar�daki conditionlardan her hangi biri olmadiginda �al��acak durum.
		cout << "Gecersiz deger." << endl;
	}

	return 0;
}
*/
//Homework 3 (Ko�ullar)
/*
#include<iostream>
using namespace std;

int main() {

	int x, y;
	cout << "please enter an integer for x:" << endl;
	cin >> x;
	cout << "please enter an integer for y:" << endl;
	cin >> y;
	// bool false 0 true 1 demektir dogru yanl�s kontrol� i�in kullan�l�r.
	bool esit = false; 
	bool kucuk = false;//bool kucuk x(ilk sayi i�in yapcagiz)

	if (x == y) {
		esit = true;
		cout << "x is equal to y." << endl;
		cout << "The numbers are not different." << endl;
	}
	else {
		esit = false;
		cout << "x is not equal to y." << endl;
		cout << "The numbers are different." << endl;
	}


	if (x < y) {
		kucuk = true;
		cout << "x is less than y. " << endl;
		cout << "x is less than or equal to y. " << endl;
	}
	else {
		cout << "x isn't less than y." << endl;
		if(esit!=false) // (!esit)=esit degilse
			cout << "x isn't less or equal to y." << endl;
		else
			cout << "x is less than or equal to y. " << endl;
	}


	if (kucuk) { // (x > y) / (!kucuk)= kucuk degilse
		cout << "x is not greater than y. " << endl;
		cout << "x is not greater or equal to y. " << endl;
	}
	else {
		cout << "x is greater than y." << endl;
		if(esit)
			cout << "x is greater or equal to y. " << endl;
		else
			cout << "x isn't greater or equal to y." << endl;

	}

	return 0;
}
*/
//Homework 4 (Ko�ullar:Say� Aral���)
/*
#include<iostream>
using namespace std;

int main() {
	int a,b,c;
	cout << "Enter a value for a..." << endl;
	cin >> a;
	cout << "Enter a value for b..." << endl;
	cin >> b;
	cout << "Enter a value for c..." << endl;
	cin >> c;
	// || : veya && : ve
	if (a > b && a < c || a<b && a>c) {
		cout << "a is between b and c" << endl;
	}
	else {
		cout << "a is not between b and c" << endl;
	}
	if (a == b && a < c)
		cout << "a is equal to b and less than c" << endl;
	else
		cout << "a is not equal to b and less than c" << endl;
	if (a > b || a > c)
		cout << "a is greater than b or c." << endl;
	else
		cout << "a is equal or less than b and c. " << endl;
	if (a == b && a == c)
		cout << "a is equal to b and c." << endl;
	else
		cout << "a is not equal to b and c " << endl;

	return 0;
}
*/
//Homework 5 (Ko�ullar: 3 Say�dan En K���k ve En B�y�k) / BilgisayarKavramlari/Programlamaya - Giris - 7
/*
#include <iostream>
using namespace std;
int main()
{
	cout << "3 sayidan en buyugu ve kucugu" << endl;

	int x, y, z;

	cout << "birinci sayiyi giriniz." << endl;
	cin >> x;

	cout << "ikinci sayiyi giriniz." << endl;
	cin >> y;

	cout << "ucuncu sayiyi giriniz." << endl;
	cin >> z;

	int enbuyuk = x;

	if (x > y && x > z) {
		enbuyuk = x;
	}
	else if (y > x && y > z) {
		enbuyuk = y;
	}
	else {
		enbuyuk = z;
	}
	cout << "en buyuk sayi:" << enbuyuk;

	int enkucuk = x;

	if (x < y && x < z) {
		enkucuk = x;
	}
	else if (y < x && y < z) {
		enkucuk = y;
	}
	else {
		enkucuk = z;
	}
	cout << "en kucuk sayi:" << enkucuk;

	return 0;
}
*/
//Homework (���i Probemleri + Basit Hesaplamalar)  / BilgisayarKavramlari/Programlamaya - Giris - 4.4 , 4.5 , 4.6 ,
//4.4/Bir i��inin i�i bitirme s�resini ve toplam i��i say�s�n� alarak, i�in bitme s�resini hesaplayan kodu yaz�n�z. �rne�in, Bir i��i bir i�i 10 g�nde yapabilmektedir. Buna g�re 2 i��i ayn� i�i ka� g�nde yapar?
/*
#include <iostream>
using namespace std;

int main() {
	int worker = 0;
	int days = 0;

	cout << "How many days does it take for a worker to finish a work..." << endl;
	cin >> days;
	cout << "How many workers do you have ? ..." << endl;
	cin >> worker;
	cout << " The work will finish in " << (float)days / worker << " days." << endl; // i�lemin ba��na float yazarak ondal�kl� say� �eklinde sonucumuzu ald�k.

	return 0;
}
*/
//4.5,4.6/Bir dik ��genin iki dik kenar�n� alarak hipoten�s�n� hesaplayan kod yaz�n�z.
/*
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double a, b, c,d;
	
	cout << "Enter a value for first leg of a triangle ... " << endl;
	cin >> a;
	cout << "Enter a value for second leg of a triangle ... " << endl;
	cin >> b;
	c = sqrt(a * a + b * b);
	cout << "Triangle's hypotenuse's value is " << c << endl;
	d = (a * b) / 2;
	cout << "Triangle's area is " << d << endl;

	return 0;
}
*/