#include <iostream> 
using namespace std;


void showMenu() {
    cout << "*******Menu*******"<< endl;
    cout << "1. Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "******************"<< endl;

}


int main() {
    int option;
    double balance = 500;
    do
    {
        showMenu();
        
        cout << "Enter an option: ";
        cin >> option;
        system("clear");
        switch (option) {
        case 1: cout << "Balance is $"<< balance<< endl; break;
        case 2: cout << "Deposit amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            cout << "Your balance is now: $"<< balance << endl; break;
        case 3: cout << "Withdraw amount: ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance){
                balance -= withdrawAmount;
                cout << "Your balance is now: $"<< balance << endl; break;
            }
            else {
                cout << "Not enough money" << endl;
                break;
            }
    }
    } while (option!=4);
    
}