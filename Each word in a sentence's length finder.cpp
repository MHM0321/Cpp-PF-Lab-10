#include<iostream>
using namespace std;
void take(char a[], int n);
void displayLengths(char a[],int lengths[],int n);
int main()
{
	int lengths[100] = { 0 };
	char input[100] = { '\0'};
	take(input, 100);
	displayLengths(input, lengths, 100);
	system("pause");
	return 0;
}

void take(char a[], int n)
{
	cout << "Enter words/sentence :";
	cin.getline(a, n);
}

void displayLengths(char a[], int lengths[], int n)
{
	int length=0,j=-1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != ' ' && a[i] != '\n' && a[i] != '\0')
		{
			length++;	
		}
		else if(a[i] == ' ' || a[i] == '\n' || a[i] == '\0')
		{
			j++;
			lengths[j] = length;
			length = 0;
			if (a[i] == '\n' || a[i] == '\0')
			{
				break;
			}
		}
	}
	cout << "All the lengths are : ";
	for (int k = 0; k < n; k++)
	{
		if (lengths[k] != 0)
		{
			cout << lengths[k]<<" ";
		}
	}
	cout << endl;
}