#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <assert.h>
using namespace std;
//accumulate (start,end,initial value,operation)
//default operation is sum

/*with floating-point numbers, round-off errors are usually smaller if numbers are added in order of increasing size
*/
int main()
{
    cout << "Demonstrating generic accumulate algorithm with a reverse iterator.\n";
    float small = 1.0F/(1 << 26);
    float x[5] = {1.0F, 3*small, 2*small, small, small};

    //initialize vector1 to x[0] through x[4]
    vector<float> vector1(&x[0], &x[5]);

    cout << "Values to be added : \n";

    vector<float>::iterator i;
    cout.precision(10);
    for(i = vector1.begin(); i != vector1.end(); ++i)
        cout << *i <<endl;
    cout<<endl;

    float sum = accumulate(vector1.begin(), vector1.end(), 0.0F);

    cout << "Sum accumulated from left = " << sum << endl;

    float sum1 = accumulate(vector1.rbegin(), vector1.rend(), 0.0F);
    cout << "Sum accumulated from right = " << (double)sum << endl;

    return 0;
}
