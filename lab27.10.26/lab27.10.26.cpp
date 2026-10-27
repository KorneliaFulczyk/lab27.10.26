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
*/

//zadanie 1
#include <iostream>
using namespace std;

/*
void wyswietlanie(string a);

int main ()

{ //zadanie 1
	string a = "Jan"; //nadanie stringowi wart.
	wyswietlanie(a); //utworzenie funkcji

	
}
void wyswietlanie(string a) { //uzycie tej funkcji
	cout << "Czesc, " << a << endl;
}
*/

//zadanie 2
void wyswietlanie();
void sprawdzenie(int a, int b);
void wieksza(int a, int b);
int main()
/*
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
{
	{
		int a, b;
		cout << "Podaj liczbe a: ";
		cin >> a;
		cout << "Podaj liczbe b: ";
		cin >> b;

	}
	{
		sprawdzanie();
		wieksza();
	}

	{
		void sprawdzanie(int a, int b)
		{
			if (a > b)
				cout << a << endl;
			else
				cout << b << endl;

		}

		void wieksza(int a, int b)
		{
			if (a > b)
				cout << "Wieksza liczba to: " << a << endl;
			else
				cout << "Wieksza liczba to: " << b << endl;
		}
	}
}