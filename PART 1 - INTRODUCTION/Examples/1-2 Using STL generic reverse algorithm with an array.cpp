#include<iostream>
#include<assert.h>
#include<cstring>
#include<algorithm> // for reverse algorithm
using namespace std;
/*the arguments to reverse are pointers to the beginning and aend of the string
where by "end" we mean the first positionpast the actual string contents.
*/

int main(){
    cout << "Using reverse algorithm with an array" << endl;
    char string1[] = "mark twain";

    int n1 = strlen(string1);
    reverse(&string1[0], &string1[n1]);         //[first index, last index)
    assert(strcmp(string1, "niawt kram") == 0);
    return 0;
}
