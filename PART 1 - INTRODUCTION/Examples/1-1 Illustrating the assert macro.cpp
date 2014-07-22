#include<iostream>
#include<assert.h>
#include<cstring>
using namespace std;
/*asser macro takes a boolean-valued expression as its single argument and does nothing if that
expression evaluates to true, but prints an informative message and terminates the program if the
expression evaluates to false
*/
int main(){
    cout << "Illustrating the assert macro." << endl;
    char string1[] = "mark twain";
    char string2[20];

    strcpy(string2, string1);

    int n1 = strlen(string1);
    int n2 = strlen(string2);

    assert(n1 == n2);

    //putthe reverse of string1 in string2
    for(int k= 0; k != n1; ++k)
            string2[k] = string1[n1-1-k];

    assert(strcmp(string2, "niawt kram") == 0);
    return 0;
}
