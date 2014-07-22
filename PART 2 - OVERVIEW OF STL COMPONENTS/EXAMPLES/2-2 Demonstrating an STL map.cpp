#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, long, less<string> > directory;
    directory["bogart"] = 1234567;
    directory["bacall"] = 2345678;
    directory["cagney"] = 3456789;
    //etc

    //read some names and look up their numbers.
    string name;
    while(cin >> name)
        if(directory.find(name) != directory.end())
            cout << "the phone number for " << name << " is " << directory[name] << "\n";
        else
            cout << "Sorry, no listing for " << name << "\n";

    return 0;
}
/*we declare directory as a map with string as the key type and long as the associated type T.
the third template parameter to the map container is less<string>, which is a function object used to compare
two keys*?
