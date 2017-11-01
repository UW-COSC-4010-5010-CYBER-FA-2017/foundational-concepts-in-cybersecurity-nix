# Modularity

## Exempler:
We created an interface which defines basic methods that deriving classes need
to have. we also defined a play function which takes the general interface and
calls the three methods in the interface hop() skip() and jump(). Note that
there are no real methods in the interface class they are purely
virtual. A and B are implement the same interfaces so when their individual
objects are pass ed to the play() function their indivudual methods get
invoded. The play function is modular where an object of one class can replace
an object of another class (as long as they implement the same interfaces)
then their respective code gets called.
```
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
```


## NonExample:

Here we are removing the common interface class and the general play
function. Instead we have individual play functions for each of the
objects. This goes away from the principle of modularity. where although the
interfaces are the same we are unable to substitute one for another instead we
need to use seperate functions for each individual object to achieve the same result.

```
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

```

## Image

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-nix/raw/master/5/Image/giphy.gif)
