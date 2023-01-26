#include <iostream>
#include <cstring>

using namespace std;

#define CONSOLE(x) cout << x << endl;

const short year = 2023;

struct Person
{
    void set_first_name(char * letter)
    {
        *first_name = *letter;
    }

    void set_last_name(char text[])
    {
        strcpy(last_name, text);
    }

    void set_pesel(char text[])
    {
        strcpy(pesel, text);
        string s_year_of_born = text;
        short short_year_of_born;
        s_year_of_born = s_year_of_born.substr(0, 2);
        short_year_of_born = stoi(s_year_of_born);
        if (pesel[3] == 0)
        {
            age = year - (short_year_of_born + 1900); 
        } else 
        {
            age = year - (short_year_of_born + 2000);
        }
    }

    char get_first_name()
    {
        return *first_name;
    }

    char* get_last_name()
    {
        return last_name;
    }

    char* get_pesel()
    {
        return pesel;
    }

    short get_age()
    {
        return age;
    }

    private:
        char * first_name;
        char last_name[30];
        short age;
        char pesel[10];
};

int main() 
{
    Person person1;
    char first_name;
    char c_last_name[30];
    char c_pesel[10];
    string s_last_name;
    string s_pesel;


    CONSOLE("Podaj swoj inicjal imienia:");
    cin >> first_name;
    CONSOLE("Podaj swoje nazwisko:");
    cin.ignore();
    getline(cin, s_last_name);
    strncpy(c_last_name, s_last_name.c_str(), 30);
    CONSOLE("Podaj swoj PESEl (spokojnie bedzie u nas bezpieczny):");
    cin >> s_pesel;
    strcpy(c_pesel, s_pesel.c_str());

    person1.set_first_name(&first_name);
    person1.set_last_name(c_last_name);
    person1.set_pesel(c_pesel);
    CONSOLE(person1.get_first_name());
    CONSOLE(person1.get_last_name());
    CONSOLE(person1.get_pesel());
    CONSOLE(person1.get_age());
    return 0;
}