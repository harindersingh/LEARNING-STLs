#include <iostream>
#include <algorithm>
#include <cstring>
#include <assert.h>
using namespace std;

int main()
{
    cout << "Demostrating generic find algorithm with " << "an array. \n";
    char *s = "C++ is better than C.";
    int len = strlen(s);

    //search for the first occurence of the letter e.
    char* where = find(&s[0], &s[len], 'e');

    assert(*where == 'e' && *(where+1) == 't');

    return 0;
}
