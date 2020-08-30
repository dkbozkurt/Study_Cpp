//Dizgi Kavram� ve Karakter Dizileri
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
	a[0] = 'e'; // tek t�rnak olunca karakter demek oluyor. e�er "e" konursa > e,\0
	a[1] = 'v';
	a[2] = 'r';
	a[3] = '\0'; // bunu eklemessek kod stringinn bitti�ini anlamayacak ve sacmalamaya baslayacak.
	
	cout << c << endl;
	cout << a << endl;

	return 0;
}
*/
//Stringlerin kar��la�t�r�lmas�.S�� kopyalama ve Bus Error 10
/*
//STRCMP

#include <iostream>
using namespace std;

int main() {
	
	const char* s = "evren"; // stringler immutable. De�i�tirilemez bu y�zden const yaz�yoruz. *************
	cout << s << endl;
	cout << s[2] << endl;
	char c[6] = "evren";// karakter dizisini de�i�tirebiliriz.
	//s=c; shallow copy / s�� kopyalama
	//strcmp >> string compare ; iki stringe s�zc�k kar��last�rmas� yapar (S�zc�kte �nce geliyor yada sonra geliyor ). E�itse 0 , ilk k���kse -1 ikinci k���kse +1 d�nd�r�r.

	if (strcmp(c, s) == 0) {
		cout << "They are equal strings." << endl;
	}
	else {
		cout << "They are not equal strings." << endl;
	}
	
	//s[2] = 'x'; stringleri de�i�tirme sans� olmad�g� i�in hatal� kullan�md�r. Bus Error verir. 
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

	strcpy(x,s); // deep copying , bir stringin di�er bir stringe kopyalanmas�.
	cout << x << endl;

	return 0;
}
*/
//String Tipi, char * ve char [] Farklar�
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
	cout << s.size() << endl; //s.size() >> .(nokta) diyerek bunun herhangi bir metytodunu �a��rabiliyoruz.String tipinde tan�mlanm�s bunun sizesini �a��rd�k.
	s.append(" deneme"); //Stringin sonun .append kullanarak bir de�er ekleyebiliriz.
	cout << s << endl;
	cout << s.substr(2, 8) << endl; // .substr belirli aral�ktaki karakterleri almam�za yarar (ilk,adet al). �kinci karakterden ba�lay�p 8 adet karakter al

	return 0;
}
*/
//Saat D�n���m� (atoi)
/*
//Kullan�c�dan 12'lik sistemdebir saat ojkuyup 24'l�k sisteme �eviren kodu yaz�n�z.

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
		int clock = atoi(x); // atoi , alttaki sat�rlar�n yerine ge�er. Ascii to integerin k�salt�lmas�.Ascii de�er al�p integer de�ere �evirir.
		//int clock=0;
		//clock += (x[0] - 48) * 10; // 10lar basamag�
		//clock += x[1] - 48; // 1 ler basamag�

		clock += 12;
		s[0] = (char)48 + clock/ 10; // 10 lar hanesi
		s[1] = (char)48 + clock%10; // birler hanesi

		s[8] = '\0';//sondaki p harfi ve sonrasi gider.Dizgi sonuna gelindi�ini bildiriyor. ********

		cout << "New clock : " << s << endl;

	}
	else { // AM k�sm�ndaki a �zerine \0 end of string koyarsam silmi� oluruz.
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
//Verilen bir dizgideki ard���k e�lerin siilinmesine izin verilmektedir.Dizginin alabilece�i en k�sa halini bulan kod.

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
//Bir kelimenin okunu�u ile tersten okunu�u ayn� iste buna palindrome denir. Palindrom kod olup olmad�g�n� anlayan kod.

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
	q--;//dizginin son eleman�
	bool palindrome = true;
	while (q>p) { // g�sterdi�i yerdeki de�erler e�itse

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

//Do�ukan Kaan Bozkurt