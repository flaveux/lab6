#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	const int ROWS = 5, COLUMNS = 10;
	int matrix[ROWS][COLUMNS];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			matrix[i][j] = rand() % 10;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Удаляем первый столбец" << endl;
	
	const int COLUMNS2 = COLUMNS - 1;
	int matrix2[ROWS][COLUMNS2];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS2; j++) {
			matrix2[i][j] = matrix[i][j+1];
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
		
}