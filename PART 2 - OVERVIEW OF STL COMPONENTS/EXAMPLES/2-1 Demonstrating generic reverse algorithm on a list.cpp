#include <iostream>
#include <algorithm>
#include <list>
#include <assert.h>
using namespace std;

list<char> lst(char* s)
//return list<char> containing the characters of s
//(not including the terminating null).
{
    list<char> x;
    while(*s != '\0')
        x.push_back(*s++);
    return x;
}

int main()
{
    cout << "Demonstrating generic reverse algorithm on a list\n";

    list<char> list1 = lst("alan turing");
    reverse(list1.begin(), list1.end());

    assert(list1 == lst("gnirut nala"));
    return 0;
}
