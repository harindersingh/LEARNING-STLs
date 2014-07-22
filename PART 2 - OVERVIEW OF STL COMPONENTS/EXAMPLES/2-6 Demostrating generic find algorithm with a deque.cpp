#include <iostream>
#include <algorithm>
#include <cstring>
#include <assert.h>
#include <deque>
using namespace std;

int main()
{
    cout << "Demonstrating generic find algorithm with " << "a deque. \n";
    char *s = "C++ is better than C.";
    int len = strlen(s);

    //initialize vector1 with the contents of string s.
    deque<char> deq1(&s[0], &s[len]);

    //search for the first occurence of the letter e.
    //where = find(first, last, value)
    deque<char>::iterator where = find(deq1.begin(), deq1.end(), 'e');

    assert(*where == 'e' && *(where+1) == 't');

    return 0;
}
