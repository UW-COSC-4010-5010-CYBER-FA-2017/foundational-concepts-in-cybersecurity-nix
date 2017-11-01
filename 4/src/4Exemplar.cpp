#include <iostream>
using namespace std;

int user;
int login() {
    int user;
    cout <<"Welcome we have two logins accounts" <<endl
         <<" 1.User" <<endl
         <<" 2.Admin" <<endl
         <<" 3.Quit" << endl
         <<"Please choose option :";
    cin >> user;
    return user;
}

int installOrExit() {
    int choice;
    cout <<"Please select task" << endl
         <<" 1.Install Package" << endl
         <<" 2.Exit" << endl
         <<"Please choose option :";
    cin >> choice;
    return choice;
}

int package() {
    int package;
    cout << "You can install the following packages" << endl;
    cout << " 1.BROWSER" << endl
         << " 2.EDITOR" << endl
         << " 3.MALWARE" << endl
         << " 4.Exit" <<endl
         << "Please choose option :";
    cin >> package;
    return package;
}

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

int main(int argc, char *argv[])
{
    loginMenu();
    return 0;
}
