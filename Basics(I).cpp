//Hello world
/*
#include <iostream>

using namespace std; // "Yaz�lan fonksyonlari direkt std de ara". Kullan�lmaz ise cout k�sm� = std::cout << "Hello world!!! \n" << std::endl; �eklinde olmal�d�r.
//buraya kadar olan yer standart.

int main() //void main yaz�l�rsa bu fonksiyonun bir �ey d�nd�rmeyece�i anlam�na gelir.
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
	//int cout; , int int; gibi kelimeler tan�mlanamaz c�nk� bunlar "reserved keyword" olarak c++ taraf�ndan �nceden tan�mlanm�st�r.
	//identifier sayi ile ba�layamaz = int 2yas; gibi.

	return 0;
}

*/
//De�i�ken tipleri
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
	char c = 'x';//charda " " kulan�l�nca olmuyor ' ' kullan�lmal�.
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
	cout << cc << endl; // burada cc , c nin e�it oldugu "x" in ascii tablosuna g�re decimal de�erini basar.
	//Her karakter bir say�d�r.

	char G = 'G'; // "71"
	cout << G << endl;
	int GG = G;
	cout << GG << endl;

	float pi = 3.14;
	int ipi = pi;
	cout << ipi << endl;

	//Decimal bir de�eri chara d�n��t�rme.
	int at = 64;
	cout << at << endl;
	char cat = at;
	cout << cat << endl;
	cout << (char)at << endl; // Her hangi bir de�i�kenin ba��na, hangi tipine d�n��mesine istiyorsak bas�na parantez i�inde yazabiliriz.
	cout << (char)100 << endl; // 100 Decimal de�erine sahip karateri g�rebiliriz.


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
	++a;// prefix = �n ek.
	cout << a << endl;
	int b = 20;
	cout << a + b * 2 << endl; // i�lem �nceli�i

	cout << 15 % 2 << endl; // mod i�lemi yapar 2 den kalan.
	a--; // a=a-1 ayni �eydir.
	a = a - 1;
	cout << a << endl;

	cout << a++ << endl; // a'nin de�eri al�n�p kullan�l�r sonra 1 arttt�r�l�r.
	// 10 bas�l�yor ama haf�zada art�k 11 oldu.
	cout << ++a << endl; // a'nin de�eri once artt�r�l�r sonra denkleme konur.
	// once artt�r�l�p 12 olacak sonra ekrana bas�lacak.
	
	int x = 10;
	x = x - 1; // = x--;/--x;/x-=1;
	x -= 3;
	x += 5; // x= x+5 ;
	cout << x << endl;

	x *= 3; // x = x*3, bu sat�rdan sonra 33 olur.
	cout << x << endl; 
	
	x %= 5; // x = x%5, bu sat�rda 5 e g�re mod al�n�r.
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
//Giri�/��k�� (I/O) i�lemleri
/*
#include<iostream>
using namespace std;// Standart giri� arac� klavye, standart giri� arac�n� ekran olarak tan�mlar.

int main() {

	int a = 10;
	a = 10;
	cout << a << endl;

	cin >> a; // klavyeden de�er okur.
	cout << "Klavyeden " << a << " degeri girdiniz.\n" << endl;
	cout << "Klavyeden girilen degerin 10 fazlasi " << a + 10 << endl;

	return 0;
}
*/
//Homework 2 (De�i�ken de�erini bast�ran kod)
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

//Do�ukan Kaan Bozkurt
