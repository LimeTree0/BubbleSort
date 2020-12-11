#include <iostream>
#include<algorithm>
using namespace std;

void BubbleSort(int* Array, int size, bool reverse);

int main()
{
	int a[5] = { 2,1,4,6,5 };
	BubbleSort(a, 5, false);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
}

void BubbleSort(int* Array, int size, bool reverse)
{
	for (int i = reverse ? 0 : 1; i < size - 1; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (Array[j] > Array[j + 1] && !reverse)
			{
				int temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
			else if (Array[j] < Array[j + 1] && reverse)
			{
				int temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
		}
	}
}