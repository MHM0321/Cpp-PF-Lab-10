#include<iostream>
using namespace std;
void take(char a[], int n);
void frequency(char a[], int n);
int main()
{
	char array[100] = { '\0' };
	take(array, 100);
	frequency(array, 100);
	system("pause");
	return 0; 
}

void take(char a[], int n)
{
	cout << "Enter the sentence/word : " << endl;
	cin.getline(a, n);
}

void frequency(char a[], int n)
{
	int temp1 = 0, temp2 = 0,count=0, max=0;
	char max_char;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != '\n' && a[i] != '\0')
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i] == a[j])
				{
					count++;
				}
			}
			temp1 = count;
			count =0;
			if (temp1 > temp2)
			{
				max = temp1;
				max_char = a[i];
				temp2 = temp1;
			}
		}
		else if (a[i] == '\n' || a[i] == '\0')
		{
			break;
		}
	}
	cout << "The charactar " << max_char << " has highest frequency " << max << endl;
}