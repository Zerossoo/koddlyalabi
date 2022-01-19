#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i;
	cout << "Введите n" << endl;
	cin >> n;
	int* a = new int[n];
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] = a[i] * a[i];
	}
	for (i = 1; i < n; i++)
	{
		int temp = a[i];
		int j = i - 1;
		for (; j > -1 && a[j] > temp; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = temp;
	}
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}