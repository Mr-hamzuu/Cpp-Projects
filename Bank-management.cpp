//************ Bank system*********** */
#include <iostream>
#include <string.h>
using namespace std;

void account(string &username, string &password);
bool login(const string &username, const string &password);
int withdraw(int &balance);
int deposit(int &balance);
void check(int &balance);
int main()
{
    int balance = 10000;
    string username, password;
    string loginname, loginpassword;
    int choice;
    char c;

    cout << "\nBank Account Management System :" << endl;
    cout << "********************************************* Create account ********************************************* " << endl;
    account(username, password);

    cout << "\n********************************************* Login account *********************************************" << endl;
    if (login(username, password))
    {
        while (true)
        {

            // system("cls");
            cout << "********************************************* Enter your Choice ********************************************* " << endl;
            cout << "1.Deposit " << endl;
            cout << "2.Withdraw " << endl;
            cout << "3.Check Balance " << endl;
            cout << "4.Exit " << endl;
            cin >> choice;
            switch (choice)
            {

            case 1:

                deposit(balance);

                break;
            case 2:

                withdraw(balance);

                break;
            case 3:

                check(balance);

                break;
            case 4:

                exit(1);

                break;

            default:

                break;
            }
        }
    }
    else
    {
        cout << "--> Invalid Password or Username! Please Enter the Correct User name and Password <--" << endl;
    }

    return 0;
}
void account(string &username, string &password)
{
    cout << "Create username:";
    cin >> username;
    cout << "Create Password:";
    cin >> password;
    cout << "Congragulation! Your account is Successfully Created. Now You can Login to your account" << endl
         << endl;
}
bool login(const string &username, const string &password)
{
    string inuser, inpass;
    cout << "Username:";
    cin >> inuser;
    cout << "Password:";
    cin >> inpass;
    return (inuser == username && inpass == password);
}
int deposit(int &balance)
{
    double deposit;
    cout << "Enter the amount you want to Deposit : ";
    cin >> deposit;
    balance += deposit;
    cout << "Your New Balance is " << balance << endl;
    return 1;
}
int withdraw(int &balance)
{
    double withdraw;
    cout << "Enter the amount you want to withdraw :";
    cin >> withdraw;
    if (withdraw > 0 && withdraw <= balance)
    {
        balance -= withdraw;
        cout << "Your New balance is :" << balance << endl;
    }
    else
    {
        cout << "Invalid amount" << endl;
    }
    return 1;
}
void check(int &balance)
{
    cout << "Your Current Balance is " << balance << endl;
}
