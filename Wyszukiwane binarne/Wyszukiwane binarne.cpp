#include<iostream>
using namespace std;

int main()
{
	int tablica[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	int liczba, n = 15, l, p, s;
	cout << "Zawartosc tablicy:\n";
	for (int i = 0; i < n; i++)
		cout << "tablica [" << i + 1 << "] = " << tablica[i] << endl;
	cout << "Podaj liczbe ktora chcesz znalezc: ";
	cin >> liczba;
	l = 0;
	p = n - 1;
	while (true)
	{
		if (l > p)
		{
			cout << "Nie odnaleziono szukanej liczby" << endl;
			break;
		}
		s = (l + p) / 2;
		if (tablica[s] == liczba)
		{
			cout << " liczba " << liczba << " wystepuje w zbiorze w komorce o indeksie: " << s + 1 << endl;
			break;
		}
		else if (tablica[s] < liczba)
			l = s + 1;
		else
			p = s - 1;
	}
	return 0; 
}