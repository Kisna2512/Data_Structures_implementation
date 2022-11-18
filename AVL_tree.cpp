

#include <iostream>

using namespace std;

class Telephone
{
public:
    long long key;
    int size;
    string name[10];
    long long contact[10];
    int address;
    int flag = 0;
    string ot;

    Telephone()
    {
        for (int i = 0; i < 10; i++)
        {
            name[i] = "-";
        }
        for (int i = 0; i < 10; i++)
        {
            contact[i] = 0;
        }
    }

    void insert()
    {
        cout << "Enter the number of records you want to insert in Directory: " << endl;
        cin >> size;

        while (size--)
        {
            cout << "Enter the telephone no: " << endl;
            cin >> key;

            address = hash_fun(key);
            if (contact[address] == 0)
            {
                contact[address] = key;
                cout << "\n Enter the name of the person: " << endl;
                cin >> name[address];
                cout << "\n";
            }
            else
            {
              

                if (flag == 0)
                {

                    cout << "Which collosion techinque you want to perform ? " << endl;
                    cout << "Type 'L' for Linear Probing and 'Q' for Quadrating Probing " << endl;
                    cin >> ot;
                    flag = 1;
                }

                if (ot == "L")
                {
                    linear_probing();
                }
                else
                {
                    quadratic_probing();
                }
            }
        }
    }

    void linear_probing()
    {
        int add = (key % 10);
        while (contact[add % 10] != 0)
        {
            add++;
        }
        contact[add % 10] = key;
        cout << "Enter the name of the person: " << endl;
        cin >> name[add % 10];
    }

    void quadratic_probing()
    {
        int add = (key % 10);
        int i = 0;
        while (contact[add % 10] != 0 && i < 10)
        {
            add = ((key + i * i) % 10);
            i++;
        }
        contact[add % 10] = key;
        cout << "Enter the name of the person: " << endl;
        cin >> name[add % 10];
    }

    void display()
    {
        cout << "\nIndex\tName\tTelephone No" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << i << "\t" << name[i] << "\t" << contact[i] << endl;
        }
    }

    int hash_fun(long long key)
    {
        return (key % 10);
    }
};

int main(int argc, char const *argv[])
{

    int choice;
    Telephone t;
    do
    {
        cout << "Choose from this option: " << endl;
        cout << "1.Insert" << endl;
        ;
        cout << "2.Display" << endl;
        cout << "3.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.insert();
            break;

        case 2:
            t.display();
            break;

        default:
            break;
        }

    } while (choice < 3);

    return 0;
}
