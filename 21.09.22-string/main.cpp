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
    string str;
    string str2 = "Writing ";
    string str3="print 10 and then 5 more";
    str.append(str2);
    str.append(str3,6,3);
    str.append("dots are cool",5);
    str.append("here: ");
    str.append(10u,'.');
    str.append(str3.begin()+8,str3.end());
    str.append(5,0x2E);
	cout << str;
}

int main()
{
    ex2();
	return 0;
}
