#include <iostream>
#include <string>

using namespace std;

string phrase;
int SIZE;
int* key = new int[SIZE];

void crypt(string k)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << (int (k[i] + 5)) * 5 << " ";
	}
	for (int i = 0; i < SIZE; i++)
	{
		key[i] = (int(k[i] + 5)) * 5;
	}
	cout << endl;
}

void decrypt(int k[])
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << char((k[i] / 5) - 5);
	}
	cout << endl;
}




int main()
{

	cout << "Enter a phrase: ";
	getline(cin, phrase);

	SIZE = phrase.size();
	cout << "Size of Phrase: " << SIZE << endl;




	cout << "Encryption: ";
	crypt(phrase);
	cout << "\nDecyption: ";
	decrypt(key);

}