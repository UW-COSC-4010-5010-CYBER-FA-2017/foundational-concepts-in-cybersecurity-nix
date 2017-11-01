# Process Isolation

## Exempler:

Here we have a process class with an address space. We are creating two
processes i.e a wordprocessor and a browser. When we run the program we send
the program information to be stored in the relevant address space. With
proper process Isolation we the see that the wordprocessor program is stored
in the word processor address space and the browser program is stored in the
browser process address space

```
# ./2Exemplar
The address space in wordProcessor has wordProcessor program
The address space in browser has browser program
```


## NonExample:

Here too we use a similar process class however the the process class uses the
same address space. So when two object are run they will override the address
space of the other. So the wordprocessor process says that it is running the
browser program and the browser process is also running the browser program
```
# ./2NonExample
The address space in wordProcessor has browser program
The address space in browser has browser program
```

## Image

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-nix/raw/master/2/Image/ProcessIsolation.gif)


