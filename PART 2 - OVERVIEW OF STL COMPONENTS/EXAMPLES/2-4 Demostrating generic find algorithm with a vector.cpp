#include <iostream>
#include <algorithm>
#include <cstring>
#include <assert.h>
#include <vector>
using namespace std;
//where = find(first, last, value)

int main()
{
    cout << "Demonstrating generic find algorithm with " << "a vector \n";
    char *s = "C++ is better than C.";
    int len = strlen(s);

    //initialize vector1 with the contents of string s.
    vector<char> vector1(&s[0], &s[len]);
    //we are using constructor member of class vector that initializes the vector using the
    //..sequence of values in an array

    //search for the first occurence of the letter e.
    vector<char>::iterator where = find(vector1.begin(), vector1.end(), 'e');
    //instead of *char, the type of where is vector<char>::iterator.
    //Iterators are pointer-like objects that can be used to traverse a sequence of objects.
    assert(*where == 'e' && *(where+1) == 't');

    return 0;
}
