#include<iostream>
using namespace std;

//bubble sort
void bubble_sort(int ar[], int s)
{
	for (int i = 0; i < s-1; i++)
	{
		bool is_swap = false;
		for (int j = 0; j < s-i-1; j++)
		{
			if (ar[j] > ar[j + 1])
			{
				swap(ar[j], ar[j + 1]);
				is_swap = true;
			}
		}
		if (!is_swap)
		{
			break;
		}
	}
}
void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void print_list(int ar[], int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << ar[i] << ", ";
	}
	cout << endl;
}

int main()
{
	int ar[] = { 5,2,1,4,7,8,5,9};
	int n = sizeof(ar) / sizeof(ar[0]);
	cout << "Array before sorting"<<endl;
	print_list(ar, n);
	bubble_sort(ar, n);
	cout << "Array after sorting"<<endl;
	print_list(ar, n);

}