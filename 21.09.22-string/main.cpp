#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void ex1()
{
	string input;
	cout << "Podaj ciag znakow:\n";
	getline(cin, input);
	for (int i = 0; i < input.size(); i++)
	{
		if (input.at(i) == ' ')
		{
			continue;
		}
		cout << input.at(i) << ", ";
	}
}

void ex2()
{
	string hello = "Hello ";
	string world = " world!";
	string output;
	output.append(hello);
	output.append(world);
	cout << output;
	
}

int main()
{
	return 0;
}