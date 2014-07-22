#include <iostream>
#include <algorithm>
#include <cstring>
#include <assert.h>
#include <list>
using namespace std;

int main()
{
    cout << "Demonstrating generic find algorithm with " << "a list \n";
    char *s = "C++ is better than C.";
    int len = strlen(s);

    //initialize list1 with the contents of string s.
    list<char> list1(&s[0], &s[len]);

    //search for the first occurence of the letter e.
    //where = find(first, last, value)
    list<char>::iterator where = find(list1.begin(), list1.end(), 'e');
    assert(*where == 'e' && *(++where) == 't');
    //list containers do not support the operator + used in the expression *(where+1)
    return 0;
}
