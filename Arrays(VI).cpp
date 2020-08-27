//Diziler ve Indisler
/*
// ardýþýk dizileri tutmaya yarýyor . >> arrays.
// random access becerisi verir.
#include <iostream>
using namespace std;

int main() {

	int a[3] = { 5,6,2 };

	cout << a[1] << endl;
	cout << a[2] + a[0] << endl;
	a[2] = 8;

	for (int i = 0; i < 3; i++) {
		cout << a[i] << endl;
	}

	int b[4];

	b[0]=10;
	b[1] = 20;
	cout << "Enter the b[2] value : ... ";
	cin >> b[2];
	cout << "Enter the b[3] value : ... ";
	cin >> b[3];
	for (int i = 0; i < 4;i++) {
		cout << b[i] << endl;
	}


	return 0;
}
*/
//Example / Kullanýcýdan 5 sayý okuyarak bu sayýlar için aþaðýdakileri ekrana yazan kodu yazýnýz ; max min ort top
/*
#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int a[5];

	for (int i = 0; i < 5;i++) {
		cout << " Enter the valuse of a ["<< i << "] : ... ";
		cin >> a[i];
	}
	
	cout << "a[5] = {" << a[0]<<"," << a[1] << "," << a[2] << "," << a[3] << "," << a[4] << "}" << endl;

	int max = a[0];
	
	for (int i = 0; i < 5; i++) {
		if (a[i] > max)
			max = a[i];
		
	}
	cout << "Max value is " << max << endl;


	int min = a[0];

	for (int i = 0; i < 5; i++) {
		if (a[i] < min)
			min = a[i];

	}
	cout << "Min value is " << min << endl;

	int total =0;

	for (int i = 0; i < 5; i++) {
		
		total +=a[i];
			
	}
	cout << "Total value is " << total << endl;

	cout << "Average of the values is " << (float)total / 5 << endl;

	return 0;
}
*/
//Homework / 34.Asal Mersenne sayýlarýný veren kod
/*
#include <iostream>
using namespace std;

int funcpow(int base, int exponent) {

	int result = 1;
	for (int i = 1; i <= exponent; i++)
		result *= base;
	return result;
}

bool primenum(int x) {

	for (int i = 2; i < x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int main() {
	int size=7;

	cout << "Mersen numbers ... " < endl;

	int c = 0;
	for (int i = 2; c < size ;i++) {

		if (primenum(funcpow(2, i) - 1)) {
			cout << funcpow(2, i) - 1 << endl;
			c++;
		}
	}
	return 0;
}
*/
//Asal sayýyý döndüren kod
/*
#include <iostream>
using namespace std;

bool primenum(int x) {

	for (int i = 2; i < x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int prime(int x) { //2 3 5 7 11 13 17 19 23
	int c = 0;
	double i;
	for (i = 2; c < x; i++) {
		if (primenum(i)) {
			c++;
		}
	}
	return i-1;
}

int main() {
	
	int s;
	cout << "Enter a value to see the prime number you want:...";
	cin >> s;
	cout << prime(s) << endl;
	
	return 0;
}
*/
//Homework / 40. Dizideki en büyük 3 sayýnýn toplamýný bulan kod *********
/*
#include <iostream>
using namespace std;

int main() {
	int a[] = { 3,7,2,8,9,1,6 }; // 9+8+7=24 // if nubmers are negative change the zeros below to min negative number.
	
	int num1 = 0; // max
	int num2 = 0;
	int num3 = 0; // min

	for(int i = 0; i < 7; i++) {
		
		if (num1 < a[i]) {
			num3 = num2;
			num2 = num1;
			num1 = a[i];
		}
		else if (num2 < a[i]) {
			num1 = num2;
			num2 = a[i];
		}
		else if (num3 < a[i]) {
			num3 = a[i];
		}
	}

	cout << "The max 3 numbers are: " << num1<<","<<num2 <<","<< num3 << endl;
	cout << "Total = " << num1 + num2 + num3 << endl;

	return 0;
}
*/
//42.Dizideki sayýlarýn Aritmetik ort, Geometrik ort, tek sayýlarýn ort. , çift sayýlarýn EB EK ort döndüren kod.
/*
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a[] = { 5,7,2,8,9,1,4,3 };
	int total=0;
	int multiply = 1;
	int oddtotal = 0;
	int oddnum = 0;
	int evenmax = a[0];
	int evenmin = a[0];

	for (int i = 0; i < 8; i++) {
		total += a[i];
		if (a[i] % 2 == 1) {
			oddtotal += a[i];
			oddnum++;
		}
		if (a[i] % 2 == 0) {
			if (evenmax < a[i])
				evenmax = a[i];
			if (evenmin > a[i])
				evenmin = a[i];
		}
		multiply *= a[i];
	}
	cout << "Averaga is : " << (float)total / 8 << endl;
	cout << "Geometric average is : " << (float)pow(multiply,(float)1/8) << endl;
	cout << "Odd numbers average is : " << (float)(oddtotal/oddnum) << endl;
	cout << "The max even and min even numbers average is : " << (float)((evenmax+evenmin)/2) << endl;

	return 0;
}
*/
//Kullanýcýdan gelen sayýlarla oluþan Diziyi Toplama
/*
#include <iostream>
using namespace std;

int main() {
	int size;
	cout << "Enter a size valuse for a array: ... ";
	cin >> size;
	int a[size]; // ERROR!

	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += a[i];	
	}
	cout << "Total : " << total;

	return 0;
}
*/
//Toplama Oyunu / Kullanýcýdan 5 sayý alýn.Bu sayýlardan 4 tanesi ile üretilebilecek en büyük ve en küçük deðerleri basýn.
/*
#include <iostream>

using namespace std;

int main() {

	int a[5];
	cout << "Enter 5 numbers for array : ..." << endl;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}

	int max = a[0];
	int min = a[0];
	int total = a[0];

	for (int i = 1; i < 5; i++) {
		total += a[i];
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	cout << "Max : " << total - min << endl;
	cout << "Min : " << total - max << endl;

	return 0;
}
*/
//Çok Boyutlu Diziler
/*
#include <iostream>
using namespace std;

int main() {

	int a[2][2] = { {1,2},{3,4} };
	cout << a[0][1] << endl;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << a[i][j] << " ";

		}
		cout << endl;
	}

	int c[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = i + j;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	} 

	return 0;
}
*/
//Homework (Dizileri Karþýlaþtýrýp Alt Dizi olup olmadýðýný bulan kod)
/*
#include <iostream>
using namespace std;

int main() {

	int a[3] = { 1,2,3 };
	int b[10] = { 9,5,1,2,3,6,7,1,2,3};
	
	int asize = 3;
	int bsize =10;

	for (int i = 0; i < bsize; i++) {
		bool esit = true;

		for (int j = 0; j < asize; j++) {
			if (a[j] != b[i + j]) {
				esit = false;
				break;
			}
		}
		if (esit) {
			cout << "It has sub element and begins from, " << i << endl;
		}

	}
	return 0;
}
*/
//Zar oyunu *********************
/*
//2 kullanýcý 5 zar atýyor ve iki kiþi içinde bu zarlarý atan, sonra da kazananý bulan kodu yazýnýz.

#include< iostream>
#include<ctime>
using namespace std;

int main() {

	int dicetimes;
	cout << "How many dice you want to use in the game : ... " ;
	cin >> dicetimes;
	srand(time(NULL));
	cout << "Player 1\tPlayer2" << endl;
	int score=0;
	for (int i = 0; i < dicetimes; i++) {
		int p1 = rand() % 6 + 1; // zar atma iþlemi.
		int p2 = rand() % 6 + 1; // zar atma iþlemi.
		cout << p1 << "\t\t" << p2 << endl;
		
		if (p1 > p2)
			score++;
		else if (p2 > p1)
			score--;
	}
	cout << endl;
	if (score > 0)
		cout << "Player 1 Win! " << endl;
	else if (score < 0)
		cout << "Player 2 Win! " << endl;
	else
		cout << "Draw! " << endl;
	
	return 0;
}
*/
//Homework (47. Matrisin Transpozunu alan kod)
/*
#include <iostream>
using namespace std;

int main()
{
	cout << "Matrix transposition :" << endl;
	int a[3][3] = { 5,4,3,4,0,4,7,10,3 };

	//orjinal matrisin ekrana basýlmasý için
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) 
			cout << " " << a[i][j];
		cout << endl;
	}

	//transpozun yapýldýðý iç içe for döngüsü
	 // int b[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			int g = a[j][i];
			a[j][i] = a[i][j];
			a[i][j] = g;
		}
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Transpose :" << endl;

	//transpozu alýnmýþ matrisin basýlmasýný saðlýyoruz
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << " " << a[i][j];
		cout << endl;
	}
	return 0;
}
*/
//Homework (50.Matrislerin Toplamý)
/*
#include <iostream>
using namespace std;

int main() {

	int a[2][3] = { 0,1,2,9,8,7 };
	int b[2][3] = { 6,5,4,3,4,5 };
	int c[2][3];
	cout << "A + B = |" << a[0][0] <<" "<< a[0][1] << " " << a[0][2] << "| + |" << b[0][0] << " " << b[0][1] << " " << b[0][2] <<"|"<< endl;
	cout << "\t|" << a[1][0] << " " << a[1][1] << " " << a[1][2] << "|   |" << b[1][0] << " " << b[1][1] << " " << b[1][2] <<"|"<< endl;

	cout << endl;
	for(int i = 0; i < 2;i++) {//bu satýr sayýsýný verir çünkü matrislerde de satýr - sütun diye ilerlernir.
		for (int j = 0; j < 3; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}	
	}
	cout << "= ";
	for (int i = 0; i < 2;i++) {
		for (int j = 0; j < 3; j++) {
			cout << " " << c[i][j];
		}
		cout << endl;
	}

	return 0;
}
*/

//Doðukan Kaan Bozkurt