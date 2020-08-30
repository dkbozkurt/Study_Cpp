//Dizgi Kavramý ve Karakter Dizileri
/*
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	const char *s = "evren";
	cout << s << endl;
	cout << s[2] << endl;
	char c[6] = "evren";
	char a[5];
	a[0] = 'e'; // tek týrnak olunca karakter demek oluyor. eðer "e" konursa > e,\0
	a[1] = 'v';
	a[2] = 'r';
	a[3] = '\0'; // bunu eklemessek kod stringinn bittiðini anlamayacak ve sacmalamaya baslayacak.
	
	cout << c << endl;
	cout << a << endl;

	return 0;
}
*/
//Stringlerin karþýlaþtýrýlmasý.Sýð kopyalama ve Bus Error 10
/*
//STRCMP

#include <iostream>
using namespace std;

int main() {
	
	const char* s = "evren"; // stringler immutable. Deðiþtirilemez bu yüzden const yazýyoruz. *************
	cout << s << endl;
	cout << s[2] << endl;
	char c[6] = "evren";// karakter dizisini deðiþtirebiliriz.
	//s=c; shallow copy / sýð kopyalama
	//strcmp >> string compare ; iki stringe sözcük karþýlastýrmasý yapar (Sözcükte önce geliyor yada sonra geliyor ). Eþitse 0 , ilk küçükse -1 ikinci küçükse +1 döndürür.

	if (strcmp(c, s) == 0) {
		cout << "They are equal strings." << endl;
	}
	else {
		cout << "They are not equal strings." << endl;
	}
	
	//s[2] = 'x'; stringleri deðiþtirme sansý olmadýgý için hatalý kullanýmdýr. Bus Error verir. 
	c[2] = 'x';
	cout << s << endl;
	cout << c << endl;

	return 0;
}
*/
//String Fonksiyonu Yazmak, strcpy ve strlen (Check again)
/*
//STRLEN , STRCPY
#include <iostream>
#include <string.h>

using namespace std;

int size(char* s) {
	int b = 0;
	char c = s[0];
	while (c != '\0') {
		c = s[++b];
	}
	return b;
}

int main() {

	const char *s = "evren";
	char c[6] = "evren";

	cout << s << endl;
	cout << c << endl;

	cout << strlen(s) << endl;
	cout << size(c) << endl;

	char* x = (char *) malloc(sizeof(char) *6);

	strcpy(x,s); // deep copying , bir stringin diðer bir stringe kopyalanmasý.
	cout << x << endl;

	return 0;
}
*/
//String Tipi, char * ve char [] Farklarý
/*
//.append , .size , .substr
#include<iostream>
#include<string.h>

using namespace std;

int main() {

	string s; // immutuable
	const char* p = "evren";
	char c[6] = "evren";
	s = p;
	cout << s.size() << endl; //s.size() >> .(nokta) diyerek bunun herhangi bir metytodunu çaðýrabiliyoruz.String tipinde tanýmlanmýs bunun sizesini çaðýrdýk.
	s.append(" deneme"); //Stringin sonun .append kullanarak bir deðer ekleyebiliriz.
	cout << s << endl;
	cout << s.substr(2, 8) << endl; // .substr belirli aralýktaki karakterleri almamýza yarar (ilk,adet al). Ýkinci karakterden baþlayýp 8 adet karakter al

	return 0;
}
*/
//Saat Dönüþümü (atoi)
/*
//Kullanýcýdan 12'lik sistemdebir saat ojkuyup 24'lük sisteme çeviren kodu yazýnýz.

#include<iostream>
#include<string.h>

using namespace std;

int main() {

	cout << "Please enter time value based on 12 system... " << endl;
	char s[11];
	cin >> s;
	if (s[8] == 'P') {
		char x[3];
		x[0] = s[0];
		x[1] = s[1];
		x[2] = '\0';
		int clock = atoi(x); // atoi , alttaki satýrlarýn yerine geçer. Ascii to integerin kýsaltýlmasý.Ascii deðer alýp integer deðere çevirir.
		//int clock=0;
		//clock += (x[0] - 48) * 10; // 10lar basamagý
		//clock += x[1] - 48; // 1 ler basamagý

		clock += 12;
		s[0] = (char)48 + clock/ 10; // 10 lar hanesi
		s[1] = (char)48 + clock%10; // birler hanesi

		s[8] = '\0';//sondaki p harfi ve sonrasi gider.Dizgi sonuna gelindiðini bildiriyor. ********

		cout << "New clock : " << s << endl;

	}
	else { // AM kýsmýndaki a üzerine \0 end of string koyarsam silmiþ oluruz.
		s[8] = '\0'; // AM deki A ya \0 koyuyoruz ve orada string bitiyor.
		cout << s << endl;

	}
	//cout << s[4];
	//cout << s[5];

	return 0;
}
*/
//String Oyunu (Check again)
/*
//Verilen bir dizgideki ardýþýk eþlerin siilinmesine izin verilmektedir.Dizginin alabileceði en kýsa halini bulan kod.

#include<iostream>
#include<string.h>

using namespace std;

char* f(char* s) {
	int i = 0;
	char c = s[i];
	if(c=='\0')
		return s;

	bool check = false;

	while (c != '\0'){
		char c1 = s[i+1];
		if (c == c1&&i==0) {
			s = &s[i+2];
			check = true;
			
		}
		else if (c == c1) {
			check = true;
			while (s[i] != '\0') {
				s[i] = s[i + 2];
				i++;
			}
			s[i] = '\0';			
		}
		i++;
		c = s[i];
	}

	if (check == false)
		return s;
	else
		return f(s);
	return f(s);
}

int main() {

	cout << "Please enter a string..." << endl;
	char c[100];
	cin >> c;
	cout << f(c)<<endl;


	return 0;
}
*/
//Palindrome ******
/*
//Bir kelimenin okunuþu ile tersten okunuþu ayný iste buna palindrome denir. Palindrom kod olup olmadýgýný anlayan kod.

#include<iostream>
#include<string.h>

using namespace std;
//anastasmumsatsana\0
//p      p q      q
int main() {

	cout << "Please enter a string..." << endl;
	char c[100];
	cin >> c;
	char* p, * q;
	p = c;
	q = c;
	while (*q != '\0') {
		q++;// dizgi sonu
	}
	q--;//dizginin son elemaný
	bool palindrome = true;
	while (q>p) { // gösterdiði yerdeki deðerler eþitse

		if (*p != *q) {
			palindrome = false;
		}
		p++;
		q--;

	}
	if (palindrome)
		cout << "It is a Palindrome string." << endl;
	else
		cout << "It is not a Palindrome string." << endl;

	return 0;
}
*/

//Doðukan Kaan Bozkurt