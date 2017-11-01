# Layering

## Exempler:

The system is layered into three layers of menus the loginMenu(), the
installOrExitMenu() and the packageMenu(); The loginMenu() is the top level
that invoked the installOrExitMenu() which then invokes the packageMenu(). we
can see the clear layerin of code which and return from the menu to the top
level.
```
void packageMenu() {
    while (1) {
        switch( package() ) {
        case 1:
            cout << ".................Installing Browser" << endl;
            break;
        case 2:
            cout << ".................Installing Editor" <<endl;
            break;
        case 3:
            if ( user==1 ) {
                cout << "..............UNAUTHORISED" <<endl;
            }
            if ( user==2 ) {
                cout << "................Installing Malware" << endl;
            }
            break;
        default:
            return;
        }
    }
}

void installOrExitMenu() {
    while ( 1 ) {
        switch( installOrExit() ) {
        case 1:
            packageMenu();
            break;
        default:
            return;
        }
    }
}

void loginMenu() {
    while ( 1 ) {
        switch( user=login() ) {
        case 1:
        case 2:
            installOrExitMenu();
            break;
        default:
            return;
        }
    }
}

```


## NonExample:

In the follwing code we can see that we are clearly not layering the code into
different modules and it becomes one big spegetti mess all in the main()
function. Althought it does the same things but this is much more difficult to
debug, maintain and undersand.

```
int main(int argc, char *argv[])
{
    bool quit = 0;

    while ( !quit ) {
        switch( user=login() ) {
        case 1:
        case 2:
        {
            bool exitInstallMenu = 0;

            while ( !exitInstallMenu ) {
                switch( installOrExit() ) {
                case 1:
                {
                    bool exitPackageMenu = 0;
                    while (!exitPackageMenu) {
                        switch( package() ) {
                        case 1:
                            cout << ".................Installing Browser" << endl;
                            break;
                        case 2:
                            cout << ".................Installing Editor" <<endl;
                            break;
                        case 3:
                            if ( user==1 ) {
                                cout << "..............UNAUTHORISED" <<endl;
                            }
                            if ( user==2 ) {
                                cout << "................Installing Malware" << endl;
                            }
                            break;
                        default:
                            exitPackageMenu = 1;
                            break;
                        }
                    }
                    break;
                }
                default:
                    exitInstallMenu=1;
                    break;
                }
            }
            break;
        }
        default:
            quit = 1;
            break;
        }
    }
    return 0;
}

```

## Image

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-nix/raw/master/6/Image/giphy.gif)
