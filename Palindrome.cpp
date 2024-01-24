#include<iostream>
using namespace std;
void take(char a[], int n);
void check(char a[], int n);
int main()
{
	char array[100] = { '\0' };
	take(array, 100);
	check(array, 100);
	system("pause");
	return 0;
}

void take(char a[], int n)
{
	cout << "Enter the sentence/word : " << endl;
	cin.getline(a, n);
}

void check(char a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == '\0' || a[i] == '\n')
		{
			break;
		}
		else if (a[i] != ' ')
		{
			count++;
		}
	}
	for (int j = 0; j < n; j++)
	{
		if (a[j] == a[count - 1])
		{
			cout << "It is a Palindrom" << endl;
			break;
		}
		else
		{
			cout << "It is not a Palindrom" << endl;
			break;
		}
	}
}