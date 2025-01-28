#include <iostream>
#include <fstream>
using namespace std;

struct Bug
{
    int id;
    string title;
    string status;
    int severity;
    string discription;
};

void input(Bug b[], int size);
void store(Bug b[], int size);
void status(Bug b[], int size);
void severity(Bug b[], int size);
void Display(Bug b[], int size);

int main()
{
    int size = 2;
    cout << "How many Bug Data You want to Enter :";
    cin >> size;
    Bug b[size];
    char choice;
    int m;
    do
    {
        cout << "Select an option" << endl;
        cout << "1.Input" << endl;
        cout << "2.Store" << endl;
        cout << "3.Status" << endl;
        cout << "4.Severity" << endl;
        cout << "5.Display" << endl;
        cout << "6.Exit" << endl;
        cin >> m;
        switch (m)
        {
        case 1:
            input(b, size);
            break;
        case 2:
            store(b, size);
            break;
        case 3:
            status(b, size);
            break;
        case 4:
            severity(b, size);
            break;
        case 5:
            Display(b, size);
            break;
        case 6:
            exit(1);
            break;

        default:
            break;
        }
        cout << "Do you want to Continue(Y/N)";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
void input(Bug b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Bug ID:";
        cin >> b[i].id;
        cin.ignore();
        cout << "Title:";
        getline(cin, b[i].title);

        cout << "Status:";
        getline(cin, b[i].status);
        cout << "Severity (1-5):";
        cin >> b[i].severity;
        cin.ignore();
        cout << "Discription:";
        getline(cin, b[i].discription);
    }
    cout << "The Input is Successfully completed" << endl;
}

void store(Bug b[], int size)
{
    ofstream onfile("Bug-system.txt", ios::app);
    for (int i = 0; i < size; i++)
    {

        onfile << "Bug ID : " << b[i].id << endl;
        onfile << "Title : " << b[i].title << endl;
        onfile << "Status : " << b[i].status << endl;
        onfile << "Severity : " << b[i].severity << endl;
        onfile << "Discription : " << b[i].discription << endl;
        onfile << "----------------------------------------------" << endl;
    }
}

void status(Bug b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (b[i].status == "Open" || b[i].status == "open")
        {
            cout << "Bug id : " << b[i].id << endl;
            cout << "Title : " << b[i].title << endl;
            cout << "Status : " << b[i].status << endl;
            cout << "Severity : " << b[i].severity << endl;
            cout << "Discription : " << b[i].discription << endl;
        }
    }
}
void severity(Bug b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (b[i].severity >= 1 && b[i].severity <= 5)
        {
            cout << "Bug id : " << b[i].id << endl;
            cout << "Title : " << b[i].title << endl;
            cout << "Status : " << b[i].status << endl;
            cout << "Severity : " << b[i].severity << endl;
            cout << "Discription : " << b[i].discription << endl;
        }
    }
}

void Display(Bug b[], int size)
{
    ifstream infile("Bug-system.txt", ios::app);
    string Data_From_File;
    while (getline(infile, Data_From_File))
    {
        cout << Data_From_File << endl;
    }
}
