//Hello world
/*
#include <iostream>

using namespace std; // "Yazýlan fonksyonlari direkt std de ara". Kullanýlmaz ise cout kýsmý = std::cout << "Hello world!!! \n" << std::endl; þeklinde olmalýdýr.
//buraya kadar olan yer standart.

int main() //void main yazýlýrsa bu fonksiyonun bir þey döndürmeyeceði anlamýna gelir.
{
	cout << "Hello world!!! \n" << endl;
	return 0;
}
*/
//Basic output and Identifiers
/*

#include<iostream>
using namespace std;

int main() {
	int a;
	a = 10;
	cout << a << endl;
	a = 20;
	cout << "Dogukan Kaan Bozkurt \n" << a << endl;
	int b = 30;
	int c = 10;
	int d = 20;
	int x = 2, y = 10,z;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << x << endl;
	cout << y << endl;
	//int cout; , int int; gibi kelimeler tanýmlanamaz cünkü bunlar "reserved keyword" olarak c++ tarafýndan önceden tanýmlanmýstýr.
	//identifier sayi ile baþlayamaz = int 2yas; gibi.

	return 0;
}

*/
//Deðiþken tipleri
/*
#include<iostream>
using namespace std;

int main() {

	int a = 10;
	cout << a << endl;
	float pi = 3.14;
	cout << pi << endl;
	long tl = 13271327;
	cout << tl << endl;
	char c = 'x';//charda " " kulanýlýnca olmuyor ' ' kullanýlmalý.
	cout << c << endl;
	return 0;
}
*/
//Type conversions
/*
#include<iostream>
using namespace std;

int main() {

	char c = 'x';
	cout << c << endl;
	int cc = c;
	cout << cc << endl; // burada cc , c nin eþit oldugu "x" in ascii tablosuna göre decimal deðerini basar.
	//Her karakter bir sayýdýr.

	char G = 'G'; // "71"
	cout << G << endl;
	int GG = G;
	cout << GG << endl;

	float pi = 3.14;
	int ipi = pi;
	cout << ipi << endl;

	//Decimal bir deðeri chara dönüþtürme.
	int at = 64;
	cout << at << endl;
	char cat = at;
	cout << cat << endl;
	cout << (char)at << endl; // Her hangi bir deðiþkenin baþýna, hangi tipine dönüþmesine istiyorsak basýna parantez içinde yazabiliriz.
	cout << (char)100 << endl; // 100 Decimal deðerine sahip karateri görebiliriz.


	return 0;
}
*/
//Operators
/*
#include<iostream>
using namespace std;

int main() {

	int a = 10;
	cout << a << endl;
	a++; //postfix = son ek.
	cout << a << endl;
	++a;// prefix = ön ek.
	cout << a << endl;
	int b = 20;
	cout << a + b * 2 << endl; // iþlem önceliði

	cout << 15 % 2 << endl; // mod iþlemi yapar 2 den kalan.
	a--; // a=a-1 ayni þeydir.
	a = a - 1;
	cout << a << endl;

	cout << a++ << endl; // a'nin deðeri alýnýp kullanýlýr sonra 1 artttýrýlýr.
	// 10 basýlýyor ama hafýzada artýk 11 oldu.
	cout << ++a << endl; // a'nin deðeri once arttýrýlýr sonra denkleme konur.
	// once arttýrýlýp 12 olacak sonra ekrana basýlacak.
	
	int x = 10;
	x = x - 1; // = x--;/--x;/x-=1;
	x -= 3;
	x += 5; // x= x+5 ;
	cout << x << endl;

	x *= 3; // x = x*3, bu satýrdan sonra 33 olur.
	cout << x << endl; 
	
	x %= 5; // x = x%5, bu satýrda 5 e göre mod alýnýr.
	cout << x << endl;
	return 0;
}
*/
//Bitwise Operators
/*
#include<iostream>
using namespace std;

int main() {

	int a = 10; // a=(10)10=1010(2)
	cout << a << endl;
	int b = a << 2; // left shift= 1010(2) will be 101000(2) after than left shifting.
	// b = 40(10)=101000(2)
	cout << b << endl;
	int c = b >> 3; // right shift = 101000(2) will be 101(2) after than right shifting.
	// c = 5(10)=101(2)
	cout << c << endl;

	int x = 22 & 13; // &AND, 22= 10100(2) & 13= 01101(2) = 00100(2).
	cout << x << endl;

	int y = 22 ^ 13; // ^XOR
	cout << y << endl;
	
	int z = 22 | 13; // |OR
	cout << z << endl;

	return 0;
}
*/
//Giriþ/Çýkýþ (I/O) iþlemleri
/*
#include<iostream>
using namespace std;// Standart giriþ aracý klavye, standart giriþ aracýný ekran olarak tanýmlar.

int main() {

	int a = 10;
	a = 10;
	cout << a << endl;

	cin >> a; // klavyeden deðer okur.
	cout << "Klavyeden " << a << " degeri girdiniz.\n" << endl;
	cout << "Klavyeden girilen degerin 10 fazlasi " << a + 10 << endl;

	return 0;
}
*/
//Homework 2 (Deðiþken deðerini bastýran kod)
/*
#include<iostream>
using namespace std;

int main() {

	int a;

	cout << "Bir deger giriniz, " << endl;
	cin >> a;
	cout << "Girilen deger " << a << endl;

	return 0;
}
*/

//Doðukan Kaan Bozkurt
