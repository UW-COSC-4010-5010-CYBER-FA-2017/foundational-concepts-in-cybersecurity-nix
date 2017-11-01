# Data Hiding

## Exempler:
As seen in the following example the private member variables flag and upDown
are hidden and only accessible by the api calls putFlagOn(), takeFlagOff()
raiseFlag() , lowerFlag() and printStatus(). All the users have to do is use
the same API to do all the work. 
```
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
private:
    bool flag;
    bool upDown;
};

```


## NonExample:
In this example we have brought out the variables flag and upDown from outside
the class. Now the data is not longer hiden. Although the API remains the same
the access to the hiden data outside the API can compromise the system and
procuce unexpected errors if somebody should directly set the two variables.

```
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


```

