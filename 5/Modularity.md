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
# ./5Exemplar
A is hopping
A is skipping
A is jumping
B is hopping
B is skipping
B is jumping

```


## NonExample:

Here we are removing the common interface class and the general play
function. Instead we have individual play functions for each of the
objects. This goes away from the principle of modularity. where although the
interfaces are the same we are unable to substitute one for another instead we
need to use seperate functions for each individual object to achieve the same result.

```
# ./5NonExample
A is hopping
A is skipping
A is jumping
B is hopping
B is skipping
B is jumping

```

