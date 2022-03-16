#include "Client.h"

int main()
{
	int a, b;
	BoardClient board;
	char option = 'y';

	board.printBoard();

	while (option != 'n')
	{
		cout << endl << "Masukkan Angka Koordinat : ";
		cout << endl << "[A] : "; 
		cin >> a;
		cout << "[B] : "; 
		cin >> b;

		board.use(a, b);
		cout << endl;
		board.printBoard();
		cout << endl;
		cout << "Main Lagi ?"; cin >> option;
	}
};