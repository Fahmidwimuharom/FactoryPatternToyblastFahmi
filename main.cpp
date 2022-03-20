#include "BoardClient.h"

int main()
{
	int x, y;
	BoardClient board;
	char option = 'y';

	board.printBoard();

	while (option != 'n')
	{
		cout << endl << "Masukkan angka Koordinat : ";
		cout << endl << "[X] : "; 
		cin >> x;
		cout << "[Y] : "; 
		cin >> y;

		board.use(x, y);
		cout << endl;
		board.printBoard();
		cout << endl;
		cout << "Main Lagi?"; 
		cin >> option;
	}
}
