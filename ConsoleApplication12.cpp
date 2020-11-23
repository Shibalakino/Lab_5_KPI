#include <iostream>

using namespace std;

int main()
{
	int start, end;
	cout << "Enter a lower bound and an upper bound a and b : " << endl;
	cout << "a = ";
	cin >> start;  
	cout << "b = ";
	cin >> end;
	for (int i = start; i <= end; i++)   //цисл проходить з початку до кінця на заданому інтервалі 
	{   
		int counter = 0;
		for (int j = 1; j < i; j++) // цикл проходить по кожному числу  
		{     
			if (!(i % j)) {
				counter += j;   // знаходимо суму всіх чисел, що ділять націло число
			}
		}
		if (i == counter) //якщо сума рівна початковому числу - виводить на екран число
		{  
			cout << i << endl;
		}
	}
	
	return 0;
}

