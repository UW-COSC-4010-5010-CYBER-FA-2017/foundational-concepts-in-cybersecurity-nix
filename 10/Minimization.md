# Minimization

## Exempler:
We are minimizing out code in A and B to extract common methods and defining
an interface. The relationship between these methods also follow a similar
pattern (like a protocol) and we are defining it in the function play(). This
now simplifies the entire process where common patterns do not need to be
repeated and can simply be used with the generic play() function.
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

This is the non-simplified version where we have differnet classes A and B
with similar methods and also similar relationships between the
methods. However here we do no define a Virtual function and so we have to
conted with writing a seperate overridden play function and describe the same
relation in a boilerplate fashion. 

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

