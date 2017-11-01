#include <iostream>
using namespace std;

class Interface
{
public:
    Interface(){}
    virtual ~Interface(){}
    virtual void hop()=0;
    virtual void skip()=0;
    virtual void jump()=0;
};

class A : public Interface
{
public:
    A(){}
    virtual ~A(){}
    void hop() { cout << "A is hopping" << endl; }
    void skip() {cout << "A is skipping" << endl;}
    void jump() { cout << "A is jumping" <<endl; }
};

class B : public Interface
{
public:
    B() {}
    virtual ~B(){}
    void hop() { cout << "B is hopping" << endl; }
    void skip() {cout << "B is skipping" << endl;}
    void jump() { cout << "B is jumping" <<endl; }
};


void play( Interface& i ) {
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

