## Exempler:
This example takes care that the MALWARE app which required Administrator
priviliges is not allowed to install as a user.
```
# ./4Exemplar
Welcome we have two logins accounts
 1.User
 2.Admin
 3.Quit
Please choose option :1
Please select task
 1.Install Package
 2.Exit
Please choose option :1
You can install the following packages
 1.BROWSER
 2.EDITOR
 3.MALWARE
 4.Exit
Please choose option :3
..............UNAUTHORISED
```


## NonExample:
In this case even a user can install a Malware cause an ordinary user is also
granted Admin priviliges.

```
# ./4NonExample
Welcome we have two logins accounts
 1.User
 2.Admin
 3.Quit
Please choose option :1
Please select task
 1.Install Package
 2.Exit
Please choose option :1
You can install the following packages
 1.BROWSER
 2.EDITOR
 3.MALWARE
 4.Exit
Please choose option :3
................Installing Malware
```

