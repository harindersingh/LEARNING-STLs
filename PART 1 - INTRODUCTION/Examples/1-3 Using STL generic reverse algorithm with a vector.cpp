#include<iostream>
#include<assert.h>
#include<vector>
#include<algorithm> // for reverse algorithm
using namespace std;

vector<char> vec(char *s)
//return vector<char> containing the characters of s
// (not including the terminating null).
{
    vector<char> x;
    while(*s != '\0')
            x.push_back(*s++);
    return x;
}

int main(){
    cout << "Using reverse algorithm with vector" << endl;
    vector<char> vector1 = vec("mark twain");

    reverse(vector1.begin(), vector1.end());
    assert(vector1 == vec("niawt kram"));
    return 0;
}

/*this program defines an auxiliary function vec(), which makes a character array into a vector<char>. the function
does this by using a member function push_back, to append one character of the string at a time to the vector, which starts out empty.
*/

