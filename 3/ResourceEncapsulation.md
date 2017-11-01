# Resource Encapsulation

## Exempler:
We are using a FlagPollResource class which encapsulates the underlying
functionality and provides only an API access to manipulate the resource in
the object. This leads to consistent states and leaves no room for other ways
to manipulate the object. We are doing and opetation and printing the status
of the object after each operation. We see that the status matches the task
performed.
```
# ./3Exemplar
Putting the flag on the pole
=> STATUS: Flag is on the pole and lowered
Raising the flag on the pole
=> STATUS: Flag is on the pole and raised
Lowering the flag on the pole
=> STATUS: Flag is on the pole and lowered
Taking the flag off the pole
=> STATUS: Flag is not on the pole
```


## NonExample:
In this example although there is a similar API there is no encapsulation of
the data. The data can be accessed from outside and manipulated. This can
cause inconsistent states as seen below. At one point we are deliberating
taking off the flag which leads to inconsistent states and errors.

```
# ./3NonExample
Putting the flag on the pole
=> STATUS: Flag is on the pole and lowered
Raising the flag on the pole
=> STATUS: Flag is not on the pole
=> ERROR: Flag cannot be lowered if its not put
Lowering the flag on the pole
=> STATUS: Flag is not on the pole
Taking the flag off the pole
=> STATUS: Flag is not on the pole
```

## Image

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-nix/raw/master/3/Image/giphy.gif)

