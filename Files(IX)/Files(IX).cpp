//Dosyalara Giri�, Temel Dosya Tipleri ve Basit Bir Dosya A�ma Kodu
/*
#include<iostream>
#include <fstream>// dosya acarken bu k�t�phanenin eklenmesi gerek.
#include<string> // getline yi tan�mlamas� i�in kulland�k.
using namespace std;


int main() {//dosyalar iki k�sma ayr�l�r yazma ve okuma.

	//Yazma
	ofstream file; // Yazmak i�in bir dosya a�arken output file stream.(i�ine bir �ey yaz�cagimizi ifade ediyoruz.)
	file.open("deneme.txt"); // bulundugun dizide dosyay� olusturur baske yer isteniyorsa absolute path verilir ("D:\\cpp\\ gibi..)
	//file.open("D:\\deneme.txt");

	if (file.is_open()) {
		file << "Dogukan Kaan Bozkurt\n";
		file.close(); // dosya mutlaka kapat�lmal� yoksa yaz�lmayabilir.
	}
	else
		cout << "File couldn't opened." << endl;

	//Okuma

	string s;
	ifstream file2("deneme.txt"); //Okumak i�in de input file stream �eklinde a��l�r.
	if (file2.is_open()) {
		while ( getline(file2, s)){
		cout << s << '\n';
		}	
		file2.close();

	}
	return 0;
}
*/
//Example: Dosyay� sat�r sat�r tersine �eviren kod
/*
//Verilen bir metin dosyas�ndaki b�t�n karakterleri tersine �eviren kod.

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string inverse(string s) {
	char c = s[0];
	int i = 1;
	char* p;
	char* q;
	p = &s[0];
	q = &s[0];
	//pamuk prenses\0
	//p			  q p ve q yer de�i�tirecek.

	while (*p != '\0') {
		p++;
	}
	p--; // q yu bir adet i�eri �ektik \0 dan kurtard�k.
	while (p > q) {
		char c = *p;
		*p = *q;
		*q = c;
		p--;
		q++;
	}

	return s;
}

int main() {

	ifstream file("girdi.txt"); // girdi.txt dosyas�n� a�. Bu dosya debug dosyas�n�n i�inde bulunmak zorunda.
	string s;

	ofstream file2("cikti.txt"); // Ters �evrilmi� halini ba�ka bir dosyaya yaz�yoruz ve okuyoruz.

	while (getline(file, s)) {
		//cout << s << endl;
		cout << inverse(s) << endl;
		file2 << inverse(s) << endl;
	}
	file.close();
	file2.close();

	return 0;
}
*/

//Do�ukan Kaan Bozkurt