# Simplicity

## Exempler:
Abstractions can be a double edged sword sometimes it can get overly complex
but when used properly it becomes a great way to simplify ones code. We will
go back to the interface class with the play function. The play function is
now generic and can take in any object which implements the Interface. It
defines a protocol as such and every object that is derived from interface
follows the same protocol. We could add hundreds of classes that derive from
Interface without having to rewrite the play function.
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

void play( Interface& i ) {
    i.hop();
    i.skip();
    i.jump();
}

```


## NonExample:

In this example we have gotten rid of the abstract class and the abstract
function working on the abstract class. Instead we have two seperate classes
with their own specific play methods. Here we see how the play function needs
to be repeated again and again for every class that is defined. Say we have a
100 new classes of similar functionality then we would have to write 100
different play functions which will time consuming, tedious and introduce
scope for many mistakes and possible bugs.

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

