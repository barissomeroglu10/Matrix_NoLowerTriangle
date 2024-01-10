/*
In this code, we will assign values of 0 to the lower triangle of matrix A and write the result to matrix B.

Developer: Barış Someroğlu
Date: 10.01.2024 / 3:00 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	
	cout << "Please Enter Size of Matrix: ";
	cin >> n;

	cout << "\n";

	vector<vector<int>> A(n, vector<int>(n));
	vector<vector<int>> B(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Please Enter A[" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}

		cout << "\n";
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				B[i][j] = 0;
			}

			else
			{
				B[i][j] = A[i][j];
			}
		}
	}

	cout << "Old Matix is: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}

		cout << "\n";
	}

	cout << "\n";

	cout << "New Matix is: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << " ";
		}

		cout << "\n";
	}

	return 0;
}