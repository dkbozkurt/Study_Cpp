//Pointerlara giri�
/*
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	int *p; // pointerlar g�sterilen adresin, de�erini basar.
	p = &a; // pointer�n p si a n�n adresini g�sterdi�i i�in pointer a n�n de�erini basacak.

	cout << "a: " << a << endl;
	cout << "*p: " << *p << endl; // g�sterdi�in yerdeki de�eri bas.
	cout << "&a: " << &a << endl;
	cout << "p: " << p << endl;
	cout << "&p: " << &p << endl;

	return 0;
}
*/
//Dizilerin G�stericilerle Kullan�lmas�(Pointers by ussing arrays)
/*
#include<iostream>
using namespace std;

int main(){

	int x[3] = { 1,2,3 };
	 
	int *q;
	q = &x[0]; // q=x; ayn� �eye ��kar.

	cout << q[2] <<endl;
	q[2] = 8;
	cout << x[2] << endl;

	int* qq;
	qq = x; //qq[2] = q[2] = x[2] demektir. Hepsi birden farkl� yerden ayn� de�ere eri�mi� olur.

	return 0;

}
*/
//Fonksiyonlar�n G�stericilerle Kullan�m� ve Referans/De�er ile �a��rma
/*
#include<iostream>
using namespace std;
int g(int x) { // call by value
	return x = 30;
} // scope of a variable, ge�i�kenin gerelilik alani

int f(int* x,int *y,int *z) { // call by reference
	*x = 40;
	*y = 90;
	*z = 100;
	return 0;
}

int main() {
	int a = 10;
	int b = 10;
	int c = 10;
	int* p,*q,*r;
	p = &a;
	q = &b;
	r = &c;
	g(a);
	cout << a << endl;
	f(p,q,r);
	cout << *p << " " << *q << " " << *r << endl ;

	return 0;
}
*/
//Dinamik Haf�za ve Malloc *************
/*
#include<iostream>
using namespace std;

int f(int* p) {
	*p = 10;
	return 0;
}
int main() {
	int a[3];
	int* p= (int *)malloc(sizeof(int) * 3); //p nin 3 integer alacak yeri oldu. /malloc=haf�zada yer ay�rmaya yar�yor./ sizeofint bir integerin kaplad��� yer.
	//pointerlara dizi muamelesi yapmak istiyorsak, mallocla tan�mlamam�z gerekli.

	p[2] = 6;
	cout << p[2] << endl;
	int* q = (int*)malloc(sizeof(int)); //bir pointer tan�mlad�k g�sterdi�i yere bir integar koyacag�z.malloc normalde tipsiz(void*) d�nd�r�r. int q ile mallocun tipini integera cevirdik. 
	//�nt s�gacak kadar yer ay�r�p bir int pointerine g�nderiyoruz ama ileride char&float d�nd�recegiz bular�n haf�zada kaplad�g� yerler daha farkl� ve buna g�rede d�nd�r�lece�i �eye g�re tipini de�i�tirmemiz gerekiyor.
	*q = 50;
	f(q);
	cout << *q << endl;
	//malloc : k�saca haf�zada yer ay�rmaya yarar.
	return 0;
}
*/
//G�sterici Aritmeti�i (Pointer Arithmetic) ve Kullan�c�dan Say� okuma *************
/*
#include<iostream>
using namespace std;

int main() {
	cout << "Enter 5 integers: ... " << endl;
	int* p;
	p = (int*)malloc(sizeof(int) * 5); // 5 adet integar kullan�lacak yeri bana ay�r. Normalde malloc (void*)(tipsiz) d�nd�r�r, biz ba��na (int*) yazarak bunu int tipine �eviriyoruz.
	for (int i = 0; i < 5; i++) {
		cin >> *(p + i); // cin >> p[i]
		}
	cout << "p= {";
	for (int i = 0; i < 5; i++) {

		if (i == 4)
			cout << *(p + i) << " ";
		else
			cout << p[i] << " , ";

	}
	cout << "}" << endl;

	return 0;
}
*/
//Fonksiyonlar�n Dizileri Parametre Almas�
/*
#include<iostream>
using namespace std;

int f(int* p) {
	return p[2] = 10;
}

int addition(int* a, int size) {
	int add = 0;
	for (int i = 0; i < size; i++) {
		add += a[i];
	}
	return add;
}

int main() {
	int a[] = { 1,2,3 };
	int* p;
	p = a ;

	cout << addition(a,3) << endl;
	cout << a[2] << endl;
	//cout << p<< endl;
	//cout << &a << endl;
	f(a);
	cout << a[2] << endl; // a={1,2,10}
	cout << "Result: " << addition(a, 3) << endl;

	return 0;
}
*/
//Homework(41.Fonksiyon ile Bir Dizideki En B�y�k ve En K���k de�erin fark�n� d�nd�rmek )
/*
#include<iostream>
using namespace std;
int f(int *a, int size) {
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < size; i++) {
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	//cout << max << endl << min << endl;
	return max - min;
}

int main() {

	int a[] = { 5,3,7,33,44,11,5,-2,0 };
	cout << f(a, 9) << endl;


	return 0;
}
*/

//Do�ukan Kaan Bozkurt