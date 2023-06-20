#include <iostream>
using namespace std;


int main()
{
	//a)
	int N = 5;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i >= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
	//б)

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	//в)

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			if (j >= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	//г)

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i >= j && i + j >=	N - 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	//д)

	int n = 3;

	for (int i = 0; i < n; i++)

	{

		for (int j = 0; j < i; j++)

		{

			cout << " ";

		}

		for (int j = 0; j < 2 * (n - i) - 1; j++)

		{

			cout << "*";

		}

		cout << endl;

	}

	for (int i = 1; i < n; i++)

	{

		for (int j = 0; j < n - i - 1; j++)

		{

			cout << " ";

		}

		for (int j = 0; j < 2 * i + 1; j++)

		{

			cout << "*";

		}

		cout << endl;

	}

	//e)
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			if (j <= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			cout << " ";
		}
		for (int k = 0; k <= i; ++k) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = n - 2; i >= 0; --i) {
		for (int j = 0; j < n - i - 1; ++j) {
			cout << " ";
		}
		for (int k = 0; k <= i; ++k) {
			cout << "*";
		}
		cout << endl;
	}

	//ж)
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			if (j <= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	//з)

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			cout << " ";
		}
		for (int k = 0; k <= i; ++k) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = n - 2; i >= 0; --i) {
		for (int j = 0; j < n - i - 1; ++j) {
			cout << " ";
		}
		for (int k = 0; k <= i; ++k) {
			cout << "*";
		}
		cout << endl;
	}
	
	//И)
	
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < N - i; j++)
		{
			cout << " ";
		}
		for (int j = N - 2 * i; j <= N; j++)
		{
			cout << '*';
		}
		cout << endl;

	}

}

