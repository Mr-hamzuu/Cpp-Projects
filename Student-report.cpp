#include <iostream>
#include <cstring>
using namespace std;

struct student
{
    char name[20];
    int rollno;
    char Degree[20];
    float attendence;
    int marks[4];
};

int main()
{
    int n, rollno;
    char name[20];
    cout << "Enter the numbers of student you want to Enter Data: ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\t\t\tStudent :" << i + 1 << endl;
        cout << "Name : ";
        cin.ignore();
        cin.getline(s[i].name, 20);
        cout << "Roll no : ";
        cin >> s[i].rollno;
        cout << "Degree : ";
        cin.ignore();
        cin.getline(s[i].Degree, 20);
        cout << "Attendance : ";
        cin >> s[i].attendence;
        cout << endl;
        cout << "Enter your Marks" << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << "Subject " << j + 1 << " : ";
            cin >> s[i].marks[j];
        }
    }

    cout << "\t\t\t\tSearch Student : " << endl;
    cout << "Name : ";
    cin.ignore();
    cin.getline(name, 20);
    cout << "Roll no : ";
    cin >> rollno;

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(name, s[i].name) == 0 && rollno == s[i].rollno)
        {
            flag = 1;
            cout << "\t\t\t\tStudent Detail " << endl;
            cout << "Name : " << s[i].name << endl;
            cout << "Roll no : " << s[i].rollno << endl;
            cout << "Attendance : " << s[i].attendence << endl;
            for (int j = 0; j < 4; j++)
            {
                cout << "Subject " << j + 1 << s[i].marks[i] << endl;
            }
        }
    }
    if (flag == 0)
    {
        cout << "The student Data is Not Availaible in our system";
    }

    return 0;
}
