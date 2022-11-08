#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

// ------ GLOBAL VARIABLES ----
int i;

class Laptops
{
public:
    string M1[10];
    string M2[10];

    string colours_m1[5];
    string colours_m2[5];

    float screenSize_m1[10];
    float screenSize_m2[10];

    int unifiedMemory[10];
    int Storage[10];
    int i;
    Laptops()
    {
        for (i = 0; i < 10; i++)
        {
            M1[i] = " ";
            M2[i] = " ";
            colours_m1[i] = " ";
            colours_m2[i] = " ";

            screenSize_m1[i] = 0;
            screenSize_m2[i] = 0;

            unifiedMemory[i] = 0;
            Storage[i] = 0;
        }
    }
};
class Macos : public Laptops
{
public:
    // Macos() : Laptops()
    // {
    // }
    // DATA MEMBERS

    int m1 = 2, m1_c = 2, m1_s = 3;

    float m2 = 4, m2_c = 4, m2_s = 4;

    string M1[10] = {"Apple MacBook Air 2020", "Apple MacBook Air 2022"};
    string M2[10] = {"Apple MacBook Pro 2020", "Apple MacBook Pro 2022", "Apple MacBook Pro 14", "Apple MacBook Pro 16 2021"};
    string colour_m1[5] = {"Space Grey", "Silver"};
    string colour_m2[5] = {"Space Grey", "Silver", "Midnight", "Starlight"};
    float screenSize_m1[10] = {13.3, 13.6, 14.2};
    float screenSize_m2[10] = {13.3, 13.6, 14.2, 16.2};
    int unifiedMemory[10] = {8, 16, 32};
    int Storage[10] = {256, 512, 1000};

    // MEMBER FUNCTIONS

    friend void printmac(Macos a);
    friend void mac(Macos a);
    friend void mac(Macos a);
    friend void mac_colours(Macos a, int m1_c);
    friend void mac_colours(Macos a, float m2_c);
};

class Windows
{
public:
};
class Dell : public Windows, public Laptops
{
};
class HP : public Windows, public Laptops
{
};
class Lenovo : public Windows, public Laptops
{
};
class ChromeBook
{
public:
};
void mac(Macos a, int m1)
{
    for (i = 0; i < m1; i++)
    {
        cout << setw(228) << a.M1[i] << endl;
    }
}
void mac(Macos a, float m2)
{
    for (i = 0; i < m2; i++)
    {
        cout << setw(228) << a.M2[i] << endl;
    }
}
void mac_colours(Macos a, int m1c)
{
    for (i = 0; i < m1c; i++)
    {
        cout << a.colour_m1[i] << "      ";
    }
    cout << endl;
}
void mac_colours(Macos a, float m2c)
{
    for (i = 0; i < m2c; i++)
    {
        cout << a.colour_m2[i] << "     ";
    }
    cout << endl;
}
void mac_size(Macos a, int m1c)
{
    for (i = 0; i < m1c; i++)
    {
        cout << a.screenSize_m1[i] << "      ";
    }
    cout << endl;
}
void mac_size(Macos a, float m2c)
{
    for (i = 0; i < m2c; i++)
    {
        cout << a.screenSize_m2[i] << "      ";
    }
    cout << endl;
}

void printmac(Macos a)
{

    while (1)
    {
        cout << " ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << setw(228) << "PROCESSOR ->" << endl;
        cout << setw(228) << "1 ->M1" << endl;
        cout << setw(228) << "2 ->M2" << endl;
        cout << setw(256) << "TO RETURN TO THE MAIN MENU PRESS 0" << endl;
        int c;
        cout << setw(228) << "--> Enter Your Choice -> ";
        cin >> c;
        if (c == 0)
        {
            return;
        }
        switch (c)
        {
        case 1:
            cout << setw(247) << "MACBOOKS AVAILABLE IN THIS CATEGORY ARE ->" << endl;
            mac(a, a.m1);
            cout << endl;
            cout << "PRESS 3 TO SEE THE COLOURS AVAILABLE      ---> ";
            cout << endl;
            cout << "PRESS 4 TO SEE THE SCREEN SIZES AVAILABLE ---> ";
            cout << endl;
            cout << "PRESS ANY OTHER KEY TO RETURN             ---> ";
            int x;
            cin >> x;
            if (x == 3)
            {
                mac_colours(a, a.m1_c);
            }
            else if (x == 4)
            {
                mac_size(a, a.m1_s);
            }
            else
            {
                break;
            }
            break;
        case 2:
            cout << setw(247) << "MACBOOKS AVAILABLE IN THIS CATEGORY ARE ->" << endl;
            mac(a, a.m2);
            cout << endl;
            cout << "PRESS 3 TO SEE THE COLOURS AVAILABLE ---> ";
            cout << endl;
            cout << "PRESS 4 TO SEE THE SCREEN SIZES AVAILABLE ---> ";
            cout << endl;
            cout << "PRESS ANY OTHER KEY TO RETURN        ---> ";
            cout << endl;
            int y;
            cin >> y;
            if (y == 3)
            {
                mac_colours(a, a.m2_c);
            }
            else if (y == 4)
            {
                mac_size(a, a.m2_s);
            }
            else
            {
                break;
            }
            break;
        case 3:

            break;
        default:
            cout << "PRESS THE CORRECT KEY" << endl;
            break;
        }
    }
}
int main()
{
    while (1)
    {
        int c;
        cout<<endl;
        cout  <<setw(300)<< "--> WELCOME TO CHROMA DIGITAL STORE <--" << endl;
        cout<<endl;
        cout  <<setw(290)<< " 1 -> MACBOOKS              " << endl;
        cout  <<setw(290)<< " 2 -> CHROMEBOOKS           " << endl;
        cout  <<setw(290)<< " 3 -> WINDOWS               " << endl;
        cout  <<setw(290)<< " 4 -> PROCEED FOR INVOICE   " << endl;
        cout  <<setw(290)<< " 5 -> TERMINATE THE PROGRAM " << endl;
        cout  <<setw(290)<< "--> Enter Your Choice -> ";
        cin >> c;
        cout << endl;
        switch (c)
        {
        case 1:
        {
            Macos m;
            printmac(m);
            break;
        }
        case 2:
        {
            Macos m;
            printmac(m);
            break;
        }
        case 3:
        {
            Macos m;
            printmac(m);
            break;
        }
        case 4:
        {
            Macos m;
            printmac(m);
            break;
        }
        case 5:
        {
            return 0;
            break;
        }
        default:
        {
            cout << "Press The Correct Key" << endl;
        }
        }
    }

    return 0;
}