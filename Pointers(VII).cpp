//Pointerlara giriþ
/*
#include <iostream>
using namespace std;

int main() {

	int a = 10;
	int *p; // pointerlar gösterilen adresin, deðerini basar.
	p = &a; // pointerýn p si a nýn adresini gösterdiði için pointer a nýn deðerini basacak.

	cout << "a: " << a << endl;
	cout << "*p: " << *p << endl; // gösterdiðin yerdeki deðeri bas.
	cout << "&a: " << &a << endl;
	cout << "p: " << p << endl;
	cout << "&p: " << &p << endl;

	return 0;
}
*/
//Dizilerin Göstericilerle Kullanýlmasý(Pointers by ussing arrays)
/*
#include<iostream>
using namespace std;

int main(){

	int x[3] = { 1,2,3 };
	 
	int *q;
	q = &x[0]; // q=x; ayný þeye çýkar.

	cout << q[2] <<endl;
	q[2] = 8;
	cout << x[2] << endl;

	int* qq;
	qq = x; //qq[2] = q[2] = x[2] demektir. Hepsi birden farklý yerden ayný deðere eriþmiþ olur.

	return 0;

}
*/
//Fonksiyonlarýn Göstericilerle Kullanýmý ve Referans/Deðer ile Çaðýrma
/*
#include<iostream>
using namespace std;
int g(int x) { // call by value
	return x = 30;
} // scope of a variable, geðiþkenin gerelilik alani

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
//Dinamik Hafýza ve Malloc *************
/*
#include<iostream>
using namespace std;

int f(int* p) {
	*p = 10;
	return 0;
}
int main() {
	int a[3];
	int* p= (int *)malloc(sizeof(int) * 3); //p nin 3 integer alacak yeri oldu. /malloc=hafýzada yer ayýrmaya yarýyor./ sizeofint bir integerin kapladýðý yer.
	//pointerlara dizi muamelesi yapmak istiyorsak, mallocla tanýmlamamýz gerekli.

	p[2] = 6;
	cout << p[2] << endl;
	int* q = (int*)malloc(sizeof(int)); //bir pointer tanýmladýk gösterdiði yere bir integar koyacagýz.malloc normalde tipsiz(void*) döndürür. int q ile mallocun tipini integera cevirdik. 
	//Ýnt sýgacak kadar yer ayýrýp bir int pointerine gönderiyoruz ama ileride char&float döndürecegiz bularýn hafýzada kapladýgý yerler daha farklý ve buna görede döndürüleceði þeye göre tipini deðiþtirmemiz gerekiyor.
	*q = 50;
	f(q);
	cout << *q << endl;
	//malloc : kýsaca hafýzada yer ayýrmaya yarar.
	return 0;
}
*/
//Gösterici Aritmetiði (Pointer Arithmetic) ve Kullanýcýdan Sayý okuma *************
/*
#include<iostream>
using namespace std;

int main() {
	cout << "Enter 5 integers: ... " << endl;
	int* p;
	p = (int*)malloc(sizeof(int) * 5); // 5 adet integar kullanýlacak yeri bana ayýr. Normalde malloc (void*)(tipsiz) döndürür, biz baþýna (int*) yazarak bunu int tipine çeviriyoruz.
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
//Fonksiyonlarýn Dizileri Parametre Almasý
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
//Homework(41.Fonksiyon ile Bir Dizideki En Büyük ve En Küçük deðerin farkýný döndürmek )
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

//Doðukan Kaan Bozkurt