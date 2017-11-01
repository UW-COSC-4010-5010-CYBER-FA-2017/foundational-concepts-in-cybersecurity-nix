#include <iostream>
#include <string>

using namespace std;

// ----------------------------------------------------------------------------
// Domain class basically contains a protected data which is set when the
// object is created.However the data is no longer private or even witin the domain.
// Therefore when some objects make changes to the individual state it effects both the objects
// simultaneously.

string data;

class Domain
{
public:
    Domain(string str) {
        data = str;
    }

    virtual ~Domain() {

    }

    void printDomain() {
        cout << data << '\n';
    }
};


// ----------------------------------------------------------------------------
// we are creating two domains A and B with input strings with the same name.
// There is no way to change the data within and so when they print they print
// the relevant domain information
int main(int argc, char *argv[])
{
    Domain A( "A" );
    Domain B( "B" );

    cout << "Object A has domain " ;
    A.printDomain();

    cout << "Object B has domain ";
    B.printDomain();

    return 0;
}

