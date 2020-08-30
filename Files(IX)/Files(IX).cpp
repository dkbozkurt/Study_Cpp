//Dosyalara Giriþ, Temel Dosya Tipleri ve Basit Bir Dosya Açma Kodu
/*
#include<iostream>
#include <fstream>// dosya acarken bu kütüphanenin eklenmesi gerek.
#include<string> // getline yi tanýmlamasý için kullandýk.
using namespace std;


int main() {//dosyalar iki kýsma ayrýlýr yazma ve okuma.

	//Yazma
	ofstream file; // Yazmak için bir dosya açarken output file stream.(içine bir þey yazýcagimizi ifade ediyoruz.)
	file.open("deneme.txt"); // bulundugun dizide dosyayý olusturur baske yer isteniyorsa absolute path verilir ("D:\\cpp\\ gibi..)
	//file.open("D:\\deneme.txt");

	if (file.is_open()) {
		file << "Dogukan Kaan Bozkurt\n";
		file.close(); // dosya mutlaka kapatýlmalý yoksa yazýlmayabilir.
	}
	else
		cout << "File couldn't opened." << endl;

	//Okuma

	string s;
	ifstream file2("deneme.txt"); //Okumak için de input file stream þeklinde açýlýr.
	if (file2.is_open()) {
		while ( getline(file2, s)){
		cout << s << '\n';
		}	
		file2.close();

	}
	return 0;
}
*/
//Example: Dosyayý satýr satýr tersine çeviren kod
/*
//Verilen bir metin dosyasýndaki bütün karakterleri tersine çeviren kod.

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
	//p			  q p ve q yer deðiþtirecek.

	while (*p != '\0') {
		p++;
	}
	p--; // q yu bir adet içeri çektik \0 dan kurtardýk.
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

	ifstream file("girdi.txt"); // girdi.txt dosyasýný aç. Bu dosya debug dosyasýnýn içinde bulunmak zorunda.
	string s;

	ofstream file2("cikti.txt"); // Ters çevrilmiþ halini baþka bir dosyaya yazýyoruz ve okuyoruz.

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

//Doðukan Kaan Bozkurt