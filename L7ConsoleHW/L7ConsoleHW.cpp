#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	srand(time(0));

	// Task 1
	int randArray1[10] = {};
	int sum = 0;
	float avg;

	for (int i = 0; i < 10; i++)
	{
		randArray1[i] = rand() % 41 - 20;
	}

	cout << "Array:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << randArray1[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < 10; i++)
	{
		sum += randArray1[i];
	}

	avg = (float)sum / 10;

	cout << "Sum: " << sum << "\n" << "Average: " << avg << "\n\n";

	// Task 2
	int randArray2[100] = {};
	int userNum;
	int sameNum = 0;

	for (int i = 0; i < 100; i++)
	{
		randArray2[i] = rand() % 100 + 1;
	}

	cout << "Array:\n";
	for (int i = 0; i < 100; i++)
	{
		cout << randArray2[i] << " ";
	}
	cout << "\n";

	cout << "Enter a number (from 1 to 100): ";
	cin >> userNum;

	for (int i = 0; i < 100; i++)
	{
		if (userNum == randArray2[i])
		{
			sameNum++;
		}
	}

	cout << "Your number appears " << sameNum << " times\n\n";

	// Task 3
	int randArray3[20] = {};

	for (int i = 0; i < 20; i++)
	{
		randArray3[i] = rand() % 201 - 100;
	}

	cout << "Array:\n";
	for (int i = 0; i < 20; i++)
	{
		cout << randArray3[i] << " ";
	}
	cout << "\n";

	int minIndex = distance(randArray3, min_element(randArray3, randArray3 + 20));
	int maxIndex = distance(randArray3, max_element(randArray3, randArray3 + 20));
	
	cout << "Min number: " << randArray3[minIndex] << ", index: " << minIndex << "\n";
	cout << "Max number: " << randArray3[maxIndex] << ", index: " << maxIndex << "\n\n";

	// Task 4
	int randArray4[200] = {};
	int digits = 0;
	int tens = 0;
	int hundreds = 0;

	for (int i = 0; i < 200; i++)
	{
		randArray4[i] = rand() % 200 + 1;
	}

	cout << "Array:\n";
	for (int i = 0; i < 200; i++)
	{
		cout << randArray4[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < 200; i++)
	{
		if (randArray4[i] < 10)
		{
			digits++;
		}
		else if (randArray4[i] >= 10 && randArray4[i] < 100)
		{
			tens++;
		}
		else
		{
			hundreds++;
		}
	}

	cout << "Digits: " << (float)digits / 200 * 100 << "%\nTens: " << (float)tens / 200 * 100 << "%\nHundreds: " << (float)hundreds / 200 * 100 << "%\n\n";
}