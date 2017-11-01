#include<iostream>
using namespace std;

#define UP   1
#define DOWN 0
#define ON   1
#define OFF  0

// ----------------------------------------------------------------------------
// This resource has five methods putFlagOn(), takeFlagOff(), raiseFlag(),
// lowerFlag() and printStatus(). The flag and the upDown resource is not
// encapsulated in the class there are direct ways to manipulate the flag
// or updown other than the variables. This can make the system inconsistent
bool flag;
bool upDown;

class FlagPollResource
{
public:
    FlagPollResource() {}
    virtual ~FlagPollResource() {}

    void putFlagOn() {
        flag = ON;
    }
    void takeFlagOff() {
        flag = OFF;
    }
    void raiseFlag() {
        if ( flag )
            upDown = UP;
        else
            cout << "=> ERROR: Flag cannot be raised if its not put" <<endl;
    }
    void lowerFlag() {
        if ( flag )
            upDown = DOWN;
        else
            cout << "=> ERROR: Flag cannot be lowered if its not put" <<endl;
    }
    void printStatus() {
        if ( flag && upDown )
            cout << "=> STATUS: Flag is on the pole and raised" << endl;
        if ( flag && !upDown )
            cout << "=> STATUS: Flag is on the pole and lowered" << endl;
        if ( !flag )
            cout << "=> STATUS: Flag is not on the pole" <<endl;
    }
};

// ----------------------------------------------------------------------------
// We will be doing a set of operation on the flagpoll resource. there is no
// toher way to manipulate the resource other than the API that encapsulates
// it.
int main(int argc, char *argv[])
{
    FlagPollResource pole;
    pole.putFlagOn();
    cout << "Putting the flag on the pole" << endl;
    pole.printStatus();

    pole.raiseFlag();
    flag=OFF;
    cout << "Raising the flag on the pole" << endl;
    pole.printStatus();

    pole.lowerFlag();
    cout << "Lowering the flag on the pole" << endl;
    pole.printStatus();

    pole.takeFlagOff();
    cout << "Taking the flag off the pole" << endl;
    pole.printStatus();

    return 0;
}
