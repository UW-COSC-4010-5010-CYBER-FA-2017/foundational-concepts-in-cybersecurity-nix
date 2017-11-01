#include <iostream>
using namespace std;


class A
{
public:
    A(){}
    virtual ~A(){}
    void hop() { cout << "A is hopping" << endl; }
    void skip() {cout << "A is skipping" << endl;}
    void jump() { cout << "A is jumping" <<endl; }
};

class B
{
public:
    B() {}
    virtual ~B(){}
    void hop() { cout << "B is hopping" << endl; }
    void skip() {cout << "B is skipping" << endl;}
    void jump() { cout << "B is jumping" <<endl; }
};


void play( A& i ) {
    i.hop();
    i.skip();
    i.jump();
}

void play( B& i ) {
    i.hop();
    i.skip();
    i.jump();
}

int main(int argc, char *argv[])
{
    A a;
    B b;
    play( a );
    play( b );

    return 0;
}

