# Abstraction

## Exempler:

We here have an abstract class called the interface and an abstract function
which works on the purely virtual methods in that class. Nevertheless when we
called objects that implement the interface usng the play method it
automatically calls the relevant real methods in the corresponding objects
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
with their own specific play methods. This becomes tedious when the number of
classes begins to increase.

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

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-nix/raw/master/7/Image/giphy.gif)
