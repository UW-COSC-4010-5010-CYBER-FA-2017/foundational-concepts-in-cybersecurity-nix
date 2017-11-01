#include <iostream>
#include <string>

using namespace std;

// ----------------------------------------------------------------------------
// Domain class basically contains a protected data which is set when the
// object is created.Once the data is assigned it is only accessed within the
// domain nothing from outside can change it since the data is private

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
private:
    std::string data;
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

