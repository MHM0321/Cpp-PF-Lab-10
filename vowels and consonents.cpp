#include<iostream>
using namespace std;
void take(char a[], int n);
int vowels(char a[], int n);
int consonants(char a[], int n);
char askAgain();
int main()
{
	int v = 0, c = 0;
	char array[100] = { '\0' };
	take(array, 100);
	char q = askAgain();
	for (q; q != 'e';)
	{
		if (q == 'a' || q == 'A')
		{
			v = vowels(array, 100);
			cout <<"vowels : "<< v << endl;
			q = askAgain();
		}
		else if (q == 'b' || q== 'B')
		{
			c = consonants(array, 100);
			cout << "consonants : " << c << endl;
			q = askAgain();
		}
		else if (q == 'c' || q == 'C')
		{
			v = vowels(array, 100);
			c = consonants(array, 100);
			cout << "Vowels : " << v << endl;
			cout << "Consonants : " << c << endl;
			q = askAgain();
		}
		else if (q == 'd' || q == 'D')
		{
			take(array, 100);
			cin.getline(array, 100);
			q = askAgain();
		}
		else if (q == 'e' || q == 'E')
		{
			break;
		}
	}
	system("pause");
	return 0;
}

void take(char a[], int n)
{
	cout << "Enter the sentence/word : " << endl;
	cin.getline(a, n);
}

char askAgain()
{
	char q;
	cout << "A) Count the number of vowels in the string" << endl << "B) Count the number of consonants in the string" << endl << "C) Count both the vowels and consonants in the string" << endl << "D) Enter another string" << endl << "E) Exit the program" << endl;
	cin>>q;
	return q;
}

int vowels(char a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == '\n')
		{
			break;
		}
		else if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
		{
			count++;
		}
	}
	return count;
}

int consonants(char a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == '\n')
		{
			break;
		}
		else if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u' && a[i] != '\0')
		{
			count++;
		}
	}
	return count;
}