#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string input;
	cout << "Podaj ciag znakow:\n";
	getline(cin, input);
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == ' ')
		{
			continue;
		}
		cout << input[i] << ", ";
	}
	return 0;
}