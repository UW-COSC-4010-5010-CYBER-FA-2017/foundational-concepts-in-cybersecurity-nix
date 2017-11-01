# Domain Seperation
## Exempler:

In this case we are using a domain class. The class has a private data which
belong to the object domain. Any object initialized sets the sting with a
given name say an object A has a domain name "A" and object B has a domain
name "B". 


Once the program is run the the correct objects print the correct domain names
as follows

```
Object A has domain A
Object B has domain B
```
which is correct way and domains are preserved.

## NonExample:

In the non exemplara case as well we use the same Domain class. Two objects
are created however both object refers to the same data which global variable outside
the domain class. In this example when object A sets its domain as "A" and
object B sets its domain as "B" we get.

```
Object A has domain B
Object B has domain B
```

Here the domains are not clearly seperated and both refer to the same data and
thus interfer with each others domains.

## Image
![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-nix/raw/master/1/Image/DomainSeperation.gif)

