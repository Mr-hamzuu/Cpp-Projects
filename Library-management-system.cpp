#include <iostream>
#include <string.h>
using namespace std;

struct book
{
    char title[20];
    char auther[20];
    float price;
    int year;
};

// function prototype
void input(book detail[], int size);
void output(book detail[], int size);
void search(book detail[], int size);
void sorting(book detail[], int size);

// main function
int main()
{

    int size;
    cout<<"How many Books you want to Add in Library";
    cin>>size;
    book detail[size];
    input(detail, size);
    output(detail, size);
    search(detail, size);
    sorting(detail, size);
    
    return 0;
}

// other fucntion

void input(book detail[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Detail of " << i + 1 << " book" << endl;
        cout << "Title : ";
        
        cin >> detail[i].title;
        cout << "Auther : ";
        cin >> detail[i].auther;
        cout << "Price : ";
        cin >> detail[i].price;
        cout << "Year : ";
        cin >> detail[i].year;
    }
}
void output(book detail[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "************** Book " << i + 1 << " **************" << endl;
        cout << "Title : " << detail[i].title << endl;
        cout << "Auther : " << detail[i].auther << endl;
        cout << "Price : " << detail[i].price << endl;
        cout << "Year : " << detail[i].year << endl;
    }
}
void search(book detail[], int size)
{
    char c[20];
    cout << "Enter a Book Title For Search : ";
    cin >> c;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(c, detail[i].title) == 0)
        {
            cout << "Title : " << detail[i].title << endl;
            cout << "Auther : " << detail[i].auther << endl;
            cout << "Price : " << detail[i].price << endl;
            cout << "Year of Established : " << detail[i].year << endl;
        }
        else{
            cout<<"This Book is not Available in Our Librarey"<<endl;
        }
    }
}

void sorting(book detail[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (detail[j].year > detail[j + 1].year)
            {
                book temp = detail[j];
                detail[j] = detail[j + 1];
                detail[j + 1]= temp;
            }
        }
    }
    cout<<"\nThe Book sorted by year are ::"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "************** Book " << i + 1 << " **************" << endl;
        cout << "Title : " << detail[i].title << endl;
        cout << "Auther : " << detail[i].auther << endl;
        cout << "Price : " << detail[i].price << endl;
        cout << "Year : " << detail[i].year << endl;
    }
    cout<<endl;
}
