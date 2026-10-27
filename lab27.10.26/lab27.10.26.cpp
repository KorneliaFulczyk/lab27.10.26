//od zad3 staram sie zachowac porzadek
/*
#include <iostream>
using namespace std;
int dodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
void wyswietlanie(int a, int b); //funkcja bedaca procedura :)

int zmiennaGlobalna = 10;

int main() { //kod 04_05
	int a = 45, b = 25;
	int suma = dodawanie(a, b);
	cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
	a += 4;
	wyswietlanie(a, b);
	cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
	cout << "Wartosci a oraz b: " << a << " i " << b << endl;
	return 0;
}

int dodawanie(int c, int b) {
	b = c + b;
	return b;
}

void wyswietlanie(int a, int b) {
	cout << "Wynik procedury / funkcji z void: " << a + b << endl;
	zmiennaGlobalna = 20;
	a = 111;
	b = 222;
}
//program wyswietla wynik dodawania a i b oraz wynik procedury/funkcji, zmienna globalna zostaje zmieniona,
//wyswietlone zostaja takze wartosci zmiennych lokalnych a i b, gdzie a zostaje zmienione


//zadanie 1
#include <iostream>
using namespace std;


void wyswietlanie(string a);

int main ()

{ //zadanie 1
	string a = "Jan"; //nadanie stringowi wart.
	wyswietlanie(a); //utworzenie funkcji

	
}
void wyswietlanie(string a) { //uzycie tej funkcji
	cout << "Czesc, " << a << endl;
}


//zadanie 2
void wyswietlanie();
void sprawdzenie(int a, int b);
void wieksza(int a, int b);
int main()

{



	wyswietlanie();
}
void wyswietlanie() {
	int a, b;
	for (a = 1; a <= 10; a++) {


		for (b = 1; b <= 10; b++)
			cout << a * b << "\t";
		cout << endl;
	}

}
*/

//zadanie 3
#include <iostream>
using namespace std;

/*
void wyswietlanie(int a, int b) {

			if (a > b)
				cout << "Wieksza jest wartosc: "<<a << endl;
			else
				cout << "Wieksza jest wartosc: "<< b << endl;

		}
int zwracanie(int a, int b) //ona ZWRACA wartosc, wiec int
{
	if (a > b)
		return a;
	else
		return b;
}
int main ()
	{
		int a, b;
		cout << "Podaj liczbe a: ";
		cin >> a;
		cout << "Podaj liczbe b: ";
		cin >> b;

		
		wyswietlanie(a, b);

		int wieksza = zwracanie(a, b);
		cout << endl << "Zwrocony wynik: " << wieksza << endl;
	}
	
	*/

//zadanie 4
/*
void wyswietlNajmniejsza(int a, int b, int c) {
	if (a <= b && a <= c)
		cout << "Najmniejsze jest a=" << a << endl;
	else if (b <= c && b <= a)
		cout << "Najmniejsze jest b=" << b << endl;
	else
		cout << "Najmniejsze jest c=" << c << endl;
}

int zwracanieNajmniejszej(int a, int b, int c) {
	if (a <= b && a <= c)
		return a;
	else if (b <= a && b <= c)
		return b;
	else
		return c;
}

int main()
{
	int a, b, c;
	cout << "Podaj liczby a, b, c." <<endl;
	cin >> a >> b >> c;

	wyswietlNajmniejsza(a, b, c);

		int najmniejsza = zwracanieNajmniejszej(a,b,c);
	cout << "Zwrocono: " << najmniejsza; 


}
*/

/*
//zadanie 5
float trojkat(float a, float h) {
	float pole = (a * h)/2;
		cout << "Pole wynosi: " << pole << endl;
	return pole;
}
int main() {
	float a, h, p;
	cout << "Podaj a i h \n";
	cin >> a >> h;

	
	//trojkat(a, h);
	//float pp = trojkat(a, h) * 2; //wypisuje dwa razy o polu wiec lepiej
	

	p = trojkat(a, h);
	float pp = p * 2;
		cout << "Podwojone pole: " << pp;

}
*/

/*
//zadanie 6
void dzielniki(int n) {
	for (int d = 1; d <= n; d++) {
		if (n % d == 0)
			cout << d << endl;
			
	}

}

int main()
{
	int n;
	cout << "Dla jakiej liczby wypisac dzielniki? \n";
	cin >> n;

	dzielniki(n);
}
*/

/*
//zadanie7
float sredniawazona(int a, int b) {
	float s;
	float wa, wb;
	cout << "Podaj wagi.\n";
	cin >> wa >> wb;
	
	s = ((a * wa) + (b * wb)) / (wa + wb);
	return s;
	
}
int main() {
	float a, b;
	cout << "Podaj wartosc a i b: \n";
	cin >> a >> b;

	
	float wynik = sredniawazona(a, b);
	cout << "Srednia wazona tych liczb wynosi " << wynik << endl;

	return 0;
}
*/

/*
//zadanie 8
#include <math.h>

float przeciwprostokatna(int a, int b) {

	float c = sqrt((a * a) + (b * b));
		return c;
	}

int main() {
	int a, b ;
	float c;
	cout << "Podaj a i b.\n";
	cin >> a >> b;

	c = przeciwprostokatna(a, b);
	cout <<"Przeciwprostokatna wynosi: " << c << endl;
} 
*/ 

/*
//zadanie 9
double dodawanie(double a, double b) {
	double suma = a + b;
		return suma;

}
double odejmowanie(double a, double b) {
	double roznica = a - b;
	return roznica;
}

double mnozenie(double a, double b) {
	double iloczyn = a * b;
	return iloczyn;
}
double dzielenie(double a, double b) {
	if (b == 0) {
		cout << "Nie mozna dzielic przez 0.\n";
		return 0;
	}
	double iloraz = a / b;
	return iloraz;
}
int main()
 {
	 double a = 0;
	 double b = 0;
	 char znak;
	 string odpowiedz;
	 
	 while (true) { //wpisany tutaj while(true)robi ta nieskonczonosc programu
		 cout << "Podaj wartosc a: \n";
		 cin >> a;
		 cout << "Podaj wartosc b: \n";
		 cin >> b;
		 cout << "Jakie dzialanie chcesz wykonac? Podaj +, - ,*, /. \n";
		 cin >> znak;

		 cout << "Czy mam zakonczyc dzialanie tego programu? Podaj tak/nie. \n";
		 cin >> odpowiedz;
		 if (odpowiedz == "tak") {
			 cout << "Zatrzymuje program. \n";
			 return 0;
		 }

		 else if (odpowiedz == "nie") {
			 cout << "Kontynuuje dzialanie programu. \n";


			 if (znak == '+') {
				 double d = dodawanie(a,b);
				 cout << "Wynik dodawania a + b = " << d << endl;
			 }
			 else if (znak == '-') {
				 double o = odejmowanie(a, b);
				 cout << "Wynik odejmowania a - b = " << o<< endl;
			 }
			 else if (znak == '*') {
				 double m = mnozenie(a, b);
				 cout << "Wynik mnozenia a * b = " << m << endl;
			 }
			 else if (znak == '/') {
				 if (b != 0) {
					 double dz = dzielenie(a, b);

					cout << "Wynik dzielenia a / b = " << dz << endl;
				 }
				 else {
					 cout << "Nie mozna dzielic przez zero! \n";
				 }
			 }
			 else {
				 cout << "Niepoprawny znak dzialania! \n";
			 }
		 }
	 }
 }
 */

//zadanie 10
/*
int funkcja(int numer) {
	

	int suma = 0;
	for (int i = 1; i <= numer; i++) {
		int a;
		cout << "Podaj wartosc: ";
		cin >> a;

		suma = suma + a;


	}
	cout << "Wynik: " << suma;
	return suma;

}
int main() {
	int n;
	cout << "Podaj liczbe sum: ";
	cin >> n;
	funkcja(n);
}


void funkcja2(int numer) {
	int suma = 0;
	for (int i = 1; i <= numer; i++) {
		int a;
		cout << "Podaj wartosc: ";
		cin >> a;

		suma = suma + a;


	}
	cout << "Wynik: " << suma;
}
int main() {
	int n;
	cout << "Podaj liczbe sum: ";
	cin >> n;
	funkcja2(n);
}
*/

//zadanie 11