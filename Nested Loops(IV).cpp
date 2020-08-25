//Ýç içe birden fazla döngü
/*
#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << i << " " << j << " , ";
		}
		cout << endl;
	}
	return 0;
}
*/
//Example 2 
/*
//Kullanýcýdan bir sayý alarak verilen sayý kadar ekrana ters dik ucgen bastýrma.

#include < iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter an integer as a size ..." << endl;
    cin >> size;

    for (int a = 1; a <= size; a++) 
    {

        for (int b = 1; b < a; b++) //ilk for döngüsü boþluk sayýsýný belirleyecek
        {
            cout << " ";
        }

        for (int c = 1; c <= size - a + 1; c++) //ikinci for döngüsü ise yýldýz sayýsýný belirleyecektir
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;

}
*/
//Homeworok , Ýç içe döngüler,matrisler

//diagonal matrix
/*

#include<iostream>
using namespace std;
int main() {

    int a = 0, b = 0;

    cout << "Enter the size values : ..." << endl;
    cin >> a;
    cin >> b;
    cout << a << " x " << b << " matrix." <<endl;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (i == j)
                cout << "1";
            else
                cout << "0";

        }
        cout << endl;
    }

    return 0;
}
*/
//inverse-diagonal matrix
/*
#include<iostream>
using namespace std;
int main() {

    int size=0;

    cout << "Enter the size value : ..." << endl;
    cin >> size;
    cout << size << " x " << size << " matrix. " << endl;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i + j == size - 1)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
    

    return 0;
}
*/
//Homework(Yýldýzlardann ters dik üçgen)

//Girilen bir sayý kadar satýr ve sütünu olan ve sað kenara dayalý üçgeni basan kodu yazýnýz.(15.2)
/*
#include <iostream>
using namespace std;

int main() {
    cout << "Enter a size value : ..." << endl;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            if (j+i>=size-1)
                cout << "*";
            else
                cout << " ";
            
        }
        cout << endl;
    }

    return 0;
}
//kendi algoritmam çözmümden farklý,
*/
//Homework (Yýldýzlarla eþkenar dörtgen basan kod)
/*
//Kullanýcýdan okunan bir sayý kadar kenar uzunluðu olan eþkenar dörtgeni, yýldýz sembolleri ile oluþturunuz.(15.3)
#include<iostream>
using namespace std;
//n=5,2n+y --> n=2b+y, b= (n-y/)2
//              i
//  *   b2,y1   0 ,b= 2*(i-1)+1 , y= 2*i+1 : n/2=2
// ***  b1,y3   1 ,b= 2*(i-1)+1 , y= 2*i+1 : n/2=2   
//***** b0,y5   2 ,b= 2*(i-1)+1 , y= 2*i+1 : n/2=2
// ***  b1,y3   3 ,b= 2*(n-i)+1 ,
//  *   b2,y1   4 ,b= 2*(n-i)+1 ,

int main() {

    int size=0;
    cout << "Enter an odd size value :..." << endl;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int y, b;
        if (i <= size / 2) {
            y = 2 * i + 1;
        }
        else {
            y = 2 * (size - i-1) + 1;

        }
        b = (size - y) / 2;
        for (int j = 0; j < b; j++) { // space
            cout << " ";
        }
        for (int j = 0; j < y; j++) { // star
            cout << "*";

        }
        cout << endl;
    }

    return 0;
}
*/
//Homework (Harf piramidi) (65.)
/*
//Kullanýcýdan A'dan Z'ye kadar bir harf girmesini isteyin ve girilen harflere kadar olan harflerden oluþan bir piramit þeklinde çýktý oluþturun.

#include <iostream>
using namespace std;

int main() {
    
    char key ;
    
    cout << " Enter a capital limit key :..." << endl;
    cin >> key;
    
    for (int i = key-65; i < 26; i++) {
        for (int j = key-65; j <= i; j++) {
            cout << (char)(j + 65)<< " " ;
        }
        for (int j = i-1; j >= key - 65; j--) {
            cout <<(char)( j +65) << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

//Doðukan Kaan Bozkurt