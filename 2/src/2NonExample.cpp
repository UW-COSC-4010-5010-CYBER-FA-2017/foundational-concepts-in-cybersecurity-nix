#include <iostream>
#include <string>

using namespace std;

// ----------------------------------------------------------------------------
// The process has a common global address space that all processes refer to
string addressSpace;

class Process
{
public:
    Process() {
    }
    virtual ~Process() {
    }

    void run( string program ) {
        addressSpace = program;
    }

    void printAddressSpace() {
        cout << addressSpace << endl;
    }
};

// ----------------------------------------------------------------------------
// We are creating two processe objects and assigning some values to them while
// running.
int main(int argc, char *argv[])
{
    Process wordProcessor;
    Process browser;

    wordProcessor.run("wordProcessor program");
    browser.run( "browser program" );

    cout << "The address space in wordProcessor has ";
    wordProcessor.printAddressSpace();

    cout << "The address space in browser has ";
    browser.printAddressSpace();


    return 0;
}
