#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct Starter
{
    int soup = 400;
    int kabab = 250;
    int samosa = 150;
    int golgappay = 300;
};
struct BBQ
{
    int kabab = 650;
    int Beef = 750;
    int malai = 700;
    int chicken = 600;
};
struct Main
{
    int chicken = 1200;
    int korma = 1500;
    int biryani = 1200;
    int haleem = 800;
};
struct Vegetarian
{
    int palak = 700;
    int Daal = 600;
    int Gobi = 600;
};
struct Breads
{
    int Naan = 50;
    int Garlic_Naan = 80;
    int Paratha = 100;
    int Raita = 100;
};
struct Desserts
{
    int Gulab_Jamun = 150;
    int Kheer = 250;
    int Rabri = 300;
};
struct Beverages
{
    int Lassi = 200;
    int Chai = 100;
    int Drinks = 120;
    int Lemonade = 250;
};

// Prototype
void names();
void first_menu(float* balance, int subchoice);
void sec_menu(float* balance, int subchoice);
void third_menu(float* balance, int subchoice);
void fourth_menu(float* balance, int subchoice);
void fifth_menu(float* balance, int subchoice);
void sixth_menu(float* balance, int subchoice);
void seven_menu(float* balance, int subchoice);

// main
int main()
{
    float discount, gst, balance;
    int choice, subchoice;
    char continues, addmore;
    string filedata;
    ofstream onfile("PF-Project.txt", ios::app);
    ifstream infile("PF-Project.txt", ios::app);
    cout << "\n\n-------------> PAKHTUNKHWA PRIDE - A TASTE OF HOME <-------------" << endl;
    cout << "------------->     PAKHAIR RAGHLAY   <-------------" << endl
         << endl;
    cout << "20% Discount on Order Upto 2000 Rupees. " << endl;

    onfile << "\t************************************************************" << endl;
    onfile << "\t\t\t\tPAKHTUNKHWA PRIDE - A TASTE OF HOME " << endl;
    onfile << "\t************************************************************" << endl;
    onfile << "\t\t\t\t****** PAKHAIR RAGHLAY *******" << endl
           << endl;
    onfile << "---------------------------------------- " << endl;
    onfile << "| 20% Discount on Order Upto Rs. 2000  |" << endl;
    onfile << "----------------------------------------" << endl
           << endl;
    onfile << "============================================================= " << endl;
    onfile <<setw(40)<< "| BILL RECEIPT |" << endl;
    onfile << setw(40)<<"============== " << endl<<endl;
    onfile << "Your Order : " << endl;
    do
    {
        names();
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            do
            {
                cout << "*****  Starters : ***** " << endl;
                cout << "1. Chicken Corn Soup - Rs. 400" << endl;
                cout << "2. Shami Kebab (2 pcs) - Rs. 250" << endl;
                cout << "3. Samosas (2 pcs) - Rs. 150" << endl;
                cout << "4. Gol Gappay - Rs. 300" << endl;
                cout << "5. Skip This Menu" << endl;
                cin >> subchoice;
                first_menu(&balance, subchoice);
                cout << endl;
                cout << "Do you want to Add More Starter Dishes (Y/N): ";
                cin >> continues;
            } while (continues == 'y' || continues == 'Y');

            break;
        case 2:
            do
            {
                cout << "*****  BBQ Specialties : ***** " << endl;
                cout << "1. Chicken Seekh Kebab (4 pcs) - Rs. 650" << endl;
                cout << "2. Beef Boti - Rs. 750" << endl;
                cout << "3. Malai Boti - Rs. 700" << endl;
                cout << "4. Tandoori Chicken (Half) - Rs. 600" << endl;
                cout << "5. Skip This Menu" << endl;
                cin >> subchoice;
                sec_menu(&balance, subchoice);
                cout << endl;
                cout << "Do you want to Add More BBQ Dishes (Y/N): ";
                cin >> continues;
            } while (continues == 'y' || continues == 'Y');

            break;
        case 3:
            do
            {
                cout << "*****  Main Course : ***** " << endl;
                cout << "1. Chicken Karahi - Rs. 1200" << endl;
                cout << "2. Mutton Korma - Rs. 1500" << endl;
                cout << "3. Biryani (Chicken) - Rs. 1200" << endl;
                cout << "4. Haleem - Rs. 800" << endl;
                cout << "5. Skip This Menu" << endl;
                cin >> subchoice;
                third_menu(&balance, subchoice);
                cout << endl;
                cout << "Do you want to Add More Main Course Dishes (Y/N): ";
                cin >> continues;
            } while (continues == 'y' || continues == 'Y');

            break;
        case 4:
            do
            {
                cout << "*****  Vegetarian Delights : ***** " << endl;
                cout << "1. Palak Paneer - Rs. 700" << endl;
                cout << "2. Daal Tadka - Rs. 600" << endl;
                cout << "3. Aloo Gobi - Rs. 600" << endl;
                cout << "4. Skip This Menu" << endl;
                cin >> subchoice;
                fourth_menu(&balance, subchoice);
                cout << endl;
                cout << "Do you want to Add More Vegetarian Dishes (Y/N): ";
                cin >> continues;
            } while (continues == 'y' || continues == 'Y');

            break;
        case 5:
            do
            {
                cout << "*****  Breads & Sides : ***** " << endl;
                cout << "1. Naan - Rs. 50" << endl;
                cout << "2. Garlic Naan - Rs. 80" << endl;
                cout << "3. Paratha - Rs. 100" << endl;
                cout << "4. Raita - Rs. 100" << endl;
                cout << "5. Skip This Menu" << endl;
                cin >> subchoice;
                fifth_menu(&balance, subchoice);
                cout << endl;
                cout << "Do you want to Add More Breads & Sides (Y/N): ";
                cin >> continues;
            } while (continues == 'y' || continues == 'Y');

            break;
        case 6:
            do
            {
                cout << "*****  Desserts : ***** " << endl;
                cout << "1. Gulab Jamun (2 pcs) - Rs. 150" << endl;
                cout << "2. Kheer - Rs. 250" << endl;
                cout << "3. Rabri - Rs. 300" << endl;
                cout << "4. Skip This Menu" << endl;
                cin >> subchoice;
                sixth_menu(&balance, subchoice);
                cout << endl;
                cout << "Do you want to Add More Desserts (Y/N): ";
                cin >> continues;
            } while (continues == 'y' || continues == 'Y');

            break;
        case 7:
            do
            {
                cout << "*****  Beverages : ***** " << endl;
                cout << "1. Lassi (Sweet/Salted) - Rs. 200" << endl;
                cout << "2. Chai - Rs. 100" << endl;
                cout << "3. Soft Drinks - Rs. 120" << endl;
                cout << "4. Mint Lemonade - Rs. 250" << endl;
                cout << "5. Skip This Menu" << endl;
                cin >> subchoice;
                seven_menu(&balance, subchoice);
                cout << endl;
                cout << "Do you want to Add More Beverages (Y/N): ";
                cin >> continues;
            } while (continues == 'y' || continues == 'Y');

            break;
        case 8:
        cout<<"Successfully Exited.";
            exit(1);
        default:
            cout << "invalid choice" << endl;
            break;
        }
        cout << "Do you want to Add More Dishes in your Menu (Y/N): ";
        cin >> addmore;
        cout << endl;
    } while (addmore == 'y' || addmore == 'Y');

    system("cls");
    onfile << "=============================================================" << endl;
    if (balance > 2000)
    {
        discount = balance * 0.2;
        onfile << setw(20) << "Discount : " << discount << endl;
        onfile << "-------------------------------------------------------------" << endl;
    }
    gst = balance * 1.1;
    gst -= balance;

    onfile << setw(20) << "GST Tax. : " << gst << endl;
    onfile << "-------------------------------------------------------------" << endl;
    balance += gst - discount;

    onfile << setw(20) << " TOTAL BILL : " << balance << endl;
    onfile << "=============================================================" << endl;
    onfile << ":) Thank you for dining with us!" << endl;

    while (getline(infile, filedata))
    {
        cout << filedata << endl;
    }
    return 0;
}

// Function
void names()
{
    cout << "Select The Menu" << endl;
    cout << "1. Starters" << endl;
    cout << "2. BBQ Specialties" << endl;
    cout << "3. Main Course" << endl;
    cout << "4. Vegetarian Delights" << endl;
    cout << "5. Breads & Sides" << endl;
    cout << "6. Desserts" << endl;
    cout << "7. Beverages" << endl;
    cout << "8. Exit." << endl;
    cout << "Please Select an Option : ";
}

void first_menu(float* balance, int subchoice)
{
    ofstream onfile("PF-Project.txt", ios::app);
    Starter n;
    switch (subchoice)
    {
    case 1:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Chicken Corn Soup - Rs. 400" << endl;
        cout << "A hearty and flavorful soup with chicken, sweet corn, and a blend of spices." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Chicken Corn Soup - Rs. 400" << endl;
        onfile << "\tA hearty and flavorful soup with chicken, sweet corn, and a blend of spices." << endl;
        *balance += n.soup;
        break;
    case 2:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Shami Kebab (2 pcs) - Rs. 250" << endl;
        cout << "Spiced minced meat patties served with mint chutney." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Shami Kebab (2 pcs) - Rs. 250" << endl;
        onfile << "\tSpiced minced meat patties served with mint chutney." << endl;
        *balance += n.kabab;
        break;
    case 3:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Samosas (2 pcs) - Rs. 150" << endl;
        cout << "\tCrispy pastries filled with spiced potatoes or minced meat." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Samosas (2 pcs) - Rs. 150" << endl;
        onfile << "\tCrispy pastries filled with spiced potatoes or minced meat." << endl;
        *balance += n.samosa;
        break;
    case 4:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Gol Gappay - Rs. 300" << endl;
        cout << "Crispy puris filled with tangy tamarind water, chickpeas, and spices." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Gol Gappay - Rs. 300" << endl;
        onfile << "\tCrispy puris filled with tangy tamarind water, chickpeas, and spices." << endl;
        *balance += n.golgappay;
        break;
    case 5:
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }
   
}

void sec_menu(float* balance, int subchoice)
{
    ofstream onfile("PF-Project.txt", ios::app);
    BBQ n;
    switch (subchoice)
    {
    case 1:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Chicken Seekh Kebab (4 pcs) - Rs. 650" << endl;
        cout << "Minced chicken skewers seasoned with traditional spices, grilled to perfection." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Chicken Seekh Kebab (4 pcs) - Rs. 650" << endl;
        onfile << "\tMinced chicken skewers seasoned with traditional spices, grilled to perfection." << endl;
        *balance += n.kabab;
        break;
    case 2:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Beef Boti - Rs. 750" << endl;
        cout << "Marinated beef chunks grilled over charcoal." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Beef Boti - Rs. 750" << endl;
        onfile << "\tMarinated beef chunks grilled over charcoal." << endl;
        *balance += n.Beef;
        break;
    case 3:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Malai Boti - Rs. 700" << endl;
        cout << "Tender chicken cubes marinated in creamy spices and grilled." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Malai Boti - Rs. 700" << endl;
        onfile << "\tTender chicken cubes marinated in creamy spices and grilled." << endl;
        *balance += n.malai;
        break;
    case 4:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Tandoori Chicken (Half) - Rs. 600" << endl;
        cout << "Chicken marinated in tandoori spices and cooked in a clay oven." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Tandoori Chicken (Half) - Rs. 600" << endl;
        onfile << "\tChicken marinated in tandoori spices and cooked in a clay oven." << endl;
        *balance += n.chicken;
        break;
    case 5:
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }
}
void third_menu(float* balance, int subchoice)
{
    ofstream onfile("PF-Project.txt", ios::app);
    Main n;
    switch (subchoice)
    {
    case 1:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Chicken Karahi - Rs. 1200" << endl;
        cout << "A spicy and aromatic chicken curry cooked in a wok with tomatoes and green chilies." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Chicken Karahi - Rs. 1200" << endl;
        onfile << "\tA spicy and aromatic chicken curry cooked in a wok with tomatoes and green chilies." << endl;
        *balance += n.chicken;
        break;
    case 2:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Mutton Korma - Rs. 1500" << endl;
        cout << "A rich and flavorful curry made with tender mutton pieces and aromatic spices." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Mutton Korma - Rs. 1500" << endl;
        onfile << "\tA rich and flavorful curry made with tender mutton pieces and aromatic spices." << endl;
        *balance += n.korma;
        break;
    case 3:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Biryani (Chicken) - Rs. 1200" << endl;
        cout << "Fragrant basmati rice cooked with meat, saffron, and traditional spices." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Biryani (Chicken) - Rs. 1200" << endl;
        onfile << "\tFragrant basmati rice cooked with meat, saffron, and traditional spices." << endl;
        *balance += n.biryani;
        break;
    case 4:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Haleem - Rs. 800" << endl;
        cout << "A slow-cooked stew made with lentils, wheat, and meat, garnished with fried onions and lemon." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Haleem - Rs. 800" << endl;
        onfile << "\tA slow-cooked stew made with lentils, wheat, and meat, garnished with fried onions and lemon." << endl;
        *balance += n.haleem;
        break;
    case 5:
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }
}
void fourth_menu(float* balance, int subchoice)
{
    ofstream onfile("PF-Project.txt", ios::app);
    Vegetarian n;
    switch (subchoice)
    {
    case 1:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Palak Paneer - Rs. 700" << endl;
        cout << "Spinach curry cooked with paneer and traditional spices." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Palak Paneer - Rs. 700" << endl;
        onfile << "\tSpinach curry cooked with paneer and traditional spices." << endl;
        *balance += n.palak;
        break;
    case 2:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Daal Tadka - Rs. 600" << endl;
        cout << "Yellow lentils cooked with a flavorful tempering of garlic and spices." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Daal Tadka - Rs. 600" << endl;
        onfile << "\tYellow lentils cooked with a flavorful tempering of garlic and spices." << endl;
        *balance += n.Daal;
        break;
    case 3:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Aloo Gobi - Rs. 600" << endl;
        cout << "Potatoes and cauliflower cooked with a blend of spices." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Aloo Gobi - Rs. 600" << endl;
        onfile << "\tPotatoes and cauliflower cooked with a blend of spices." << endl;
        *balance += n.Gobi;

        break;
    case 4:
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }
 
}
void fifth_menu(float* balance, int subchoice)
{
    ofstream onfile("PF-Project.txt", ios::app);
    Breads n;
    switch (subchoice)
    {
    case 1:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Naan - Rs. 50" << endl;
        cout << "Traditional oven-baked bread." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Naan - Rs. 50" << endl;
        onfile << "\tTraditional oven-baked bread." << endl;
        *balance += n.Naan;
        break;
    case 2:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Garlic Naan - Rs. 80" << endl;
        cout << "Naan topped with garlic and butter." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Garlic Naan - Rs. 80" << endl;
        onfile << "\tNaan topped with garlic and butter." << endl;
        *balance += n.Garlic_Naan;
        break;
    case 3:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Paratha - Rs. 100" << endl;
        cout << "Flaky, buttery flatbread." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Paratha - Rs. 100" << endl;
        onfile << "\tFlaky, buttery flatbread." << endl;
        *balance += n.Paratha;
        break;
    case 4:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Raita - Rs. 100" << endl;
        cout << "Yogurt mixed with cucumbers, onions, and spices." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Raita - Rs. 100" << endl;
        onfile << "\tYogurt mixed with cucumbers, onions, and spices." << endl;
        *balance += n.Raita;
        break;
    case 5:
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }
 
}
void sixth_menu(float* balance, int subchoice)
{
    ofstream onfile("PF-Project.txt", ios::app);
    Desserts n;
    switch (subchoice)
    {
    case 1:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Gulab Jamun (2 pcs) - Rs. 150" << endl;
        cout << "Milk-based dumplings soaked in sugar syrup." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Gulab Jamun (2 pcs) - Rs. 150" << endl;
        onfile << "\tMilk-based dumplings soaked in sugar syrup." << endl;
        *balance += n.Gulab_Jamun;
        break;
    case 2:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Kheer - Rs. 250" << endl;
        cout << "Rice pudding flavored with cardamom and garnished with nuts." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Kheer - Rs. 250" << endl;
        onfile << "\tRice pudding flavored with cardamom and garnished with nuts." << endl;
        *balance += n.Kheer;
        break;
    case 3:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Rabri - Rs. 300" << endl;
        cout << "Sweetened condensed milk with a creamy texture." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Rabri - Rs. 300" << endl;
        onfile << "\tSweetened condensed milk with a creamy texture." << endl;
        *balance += n.Rabri;
        break;
    case 4:
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }
 
}
void seven_menu(float* balance, int subchoice)
{
    ofstream onfile("PF-Project.txt", ios::app);
    Beverages n;
    switch (subchoice)
    {
    case 1:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Lassi (Sweet/Salted) - Rs. 200" << endl;
        cout << "Refreshing yogurt-based drink." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Lassi (Sweet/Salted) - Rs. 200" << endl;
        onfile << "\tRefreshing yogurt-based drink." << endl;
        *balance += n.Lassi;
        break;
    case 2:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Chai - Rs. 100" << endl;
        cout << "Traditional Pakistani tea brewed with milk and spices." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Chai - Rs. 100" << endl;
        onfile << "\tTraditional Pakistani tea brewed with milk and spices." << endl;
        *balance += n.Chai;
        break;
    case 3:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Soft Drinks - Rs. 120" << endl;
        cout << "Coke, Sprite, and more." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Soft Drinks - Rs. 120" << endl;
        onfile << "\tCoke, Sprite, and more." << endl;
        *balance += n.Drinks;
        break;
    case 4:
        cout << "--------------------------------------------------------------------" << endl;
        cout << "--> Mint Lemonade - Rs. 250" << endl;
        cout << "A tangy, mint-infused lemonade." << endl;
        cout << "--------------------------------------------------------------------" << endl;

        onfile << "--> Mint Lemonade - Rs. 250" << endl;
        onfile << "\tA tangy, mint-infused lemonade." << endl;
        *balance += n.Lemonade;
        break;
    case 5:
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }

}