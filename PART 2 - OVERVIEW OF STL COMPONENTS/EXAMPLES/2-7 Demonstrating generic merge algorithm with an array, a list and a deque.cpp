#include <iostream>
#include <assert.h>
#include <cstring>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

list<char> lst(char* s)
{
    list<char> x;
    while(*s != '\0')
        x.push_back(*s++);
    return x;
}

deque<char> deq(char* s)
{
    deque<char> x;
    while(*s != '\0')
        x.push_back(*s++);
    return x;
}

int main()
{
    cout << "Demonstrating generic merge algorithm with " << "an array, a list and deque. " << endl;
    char* s = "acegikm";
    int len = strlen(s);

    list<char> list1 = lst("bdfhjlnopqrstuvwxyz");

    //initialize deque1 with 26 copies of the letter x;
    deque<char> deque1(26, 'x');

    //merge array s and list1, putting result in deque
    merge(&s[0], &s[len], list1.begin(), list1.end(),deque1.begin());

    return 0;
}
