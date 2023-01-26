#include <iostream>

using namespace std;

#define CONSOLE(x) cout << x << endl;

struct Person
{
    void set_first_name(char * letter)
    {
        *first_name = *letter;
    }
    char get_first_name()
    {
        return *first_name;
    }
    private:
        char * first_name;
        char last_name[30];
        short age;
        char pesel[30];
    public:
    
};

int main() 
{
    CONSOLE("Working");

    Person person1;
    const short year = 2023;
    char first_name = 'A';
    cout << person1.get_first_name() << endl;
    person1.set_first_name(&first_name);
    CONSOLE(person1.get_first_name());
    return 0;
}