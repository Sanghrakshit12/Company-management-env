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
    string Dell[10];
    string Hp[10];

    string Processor[10];
    string OS[10];

    string colours_m1[5];
    string colours_m2[5];

    float screenSize_m1[10];
    float screenSize_m2[10];

    int unifiedMemory[10];
    int Storage[10];
    int i;
    Laptops() // DEFAULT CONSTRUCTOR
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

            Processor[10] = " ";
            OS[10] = " ";
        }
    }
};
class Macos : public Laptops
{
public:
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
    friend void mac_colours(Macos a);
    friend void mac_Memory(Macos a);
    friend void mac_Storage(Macos a);
};

class Windows
{
public:
    string Processor[10] = {"i3", "i5", "i7"};
    string OS[10] = {"Windows 10", "Windows 11", "Windows 11 Pro"};
    friend void print_OS(Windows w);
};

class Dell : public Windows, public Laptops
{
public:
    int de = 4;
    string dell[10] = {"Dell XPS 13 Plus       ", "Dell Latitude 7330     ", "Dell Inspiron 14 2-in-1", "Dell Precision 7770    "};
    friend void dell_list(Dell q);
    friend void printwindows(Windows w);
    friend void print_Processor(Windows w);
};

class HP : public Windows, public Laptops
{
public:
    int hpp = 4;
    string hp[10] = {"HP Omen 17           ", "HP Elite Dragonfly G3", "HP Spectre x360 16   ", "HP Envy 17           "};
    friend void printwindows(Windows w);
};

// WINDOWS MEMBER FUNCTIONS

inline void print_OS(Windows q)
{
    for (i = 0; i < 3; i++)
    {
        cout << setw(228) << "--> " << q.OS[i] << endl;
    }
}
inline void print_Processor(Windows q)
{
    for (i = 0; i < 3; i++)
    {
        cout << setw(228) << "--> " << q.Processor[i] << endl;
    }
}
inline void dell_list(Dell q)
{
    for (i = 0; i < 4; i++)
    {
        cout << setw(247) << q.dell[i] << endl;
    }
}
inline void hp_list(HP q)
{
    for (i = 0; i < 4; i++)
    {
        cout << setw(247) << q.hp[i] << endl;
    }
}
void printdell(Dell d, int n)
{
    while (1)
    {

        cout << setw(247) << "PRESS 1 TO SEE THE LAPTOPS AVAILABLE           ---> ";
        cout << setw(247) << endl;
        cout << setw(247) << "PRESS 2 TO SEE THE PROCESSOR AVAILABLE         ---> ";
        cout << setw(247) << endl;
        cout << setw(247) << "PRESS 3 TO SEE THE OPERATING SYSTEM AVAILABLE  ---> ";
        cout << setw(247) << endl;
        cout << setw(247) << "PRESS ANY OTHER KEY TO RETURN                  ---> ";
        int f;
        cin >> f;
        if (f == 1)
        {
            dell_list(d);
        }
        else if (f == 2)
        {
            print_Processor(d);
        }
        else if (f == 3)
        {
            print_OS(d);
        }
        else
        {
            break;
        }
    }
}
void printhp(HP h, int n)
{
    while (1)
    {
        cout << setw(247) << "PRESS 1 TO SEE THE LAPTOPS AVAILABLE          ---> ";
        cout << setw(247) << endl;
        cout << setw(247) << "PRESS 2 TO SEE THE PROCESSOR AVAILABLE        ---> ";
        cout << setw(247) << endl;
        cout << setw(247) << "PRESS 3 TO SEE THE OPERATING SYSTEM AVAILABLE ---> ";
        cout << setw(247) << endl;
        cout << setw(247) << "PRESS ANY OTHER KEY TO RETURN                 ---> ";
        int G;
        cin >> G;
        if (G == 1)
        {
            hp_list(h);
        }
        else if (G == 2)
        {
            print_Processor(h);
        }
        else if (G == 3)
        {
            print_OS(h);
        }
        else
        {
            break;
        }
    }
}

void printwindows()
{
    while (1)
    {
        cout << setw(247) << "PRESS 1 TO VISIT THE DELL PORTAL " << endl;
        cout << setw(247) << "PRESS 2 TO VISIT THE HP PORTAL   " << endl;
        cout << setw(247) << "--> Enter Your Choice -> ";
        int ch;
        cin >> ch;
        Dell d;
        int p = d.de;
        cout << p << endl;
        HP h;

        switch (ch)
        {
        case 1:
            printdell(d, p);
            break;
        case 2:
            printhp(h, h.hpp);
            break;
        default:
            cout << "PRESS THE CORRECT KEY" << endl;
            break;
        }
    }
}

// MACBOOK MEMBER FUNCTIONS

inline void mac(Macos a, int m1)
{
    for (i = 0; i < m1; i++)
    {
        cout << setw(228) << a.M1[i] << endl;
    }
}
inline void mac(Macos a, float m2)
{
    for (i = 0; i < m2; i++)
    {
        cout << setw(228) << a.M2[i] << endl;
    }
}
inline void mac_colours(Macos a, int m1c)
{
    cout << setw(227) << "COLOURS AVAILABLE ARE ---->" << endl;
    for (i = 0; i < m1c; i++)
    {
        cout << setw(230) << a.colour_m1[i] << endl;
    }
    cout << endl;
}
inline void mac_colours(Macos a, float m2c)
{
    cout << setw(227) << "COLOURS AVAILABLE ARE ---->" << endl;
    for (i = 0; i < m2c; i++)
    {
        cout << setw(230) << a.colour_m2[i] << endl;
    }
    cout << endl;
}
inline void mac_size(Macos a, int m1c)
{
    cout << setw(227) << "SIZE AVAILABLE ARE ---->" << endl;
    for (i = 0; i < m1c; i++)
    {
        cout << setw(230) << a.screenSize_m1[i] << " inch" << endl;
    }
    cout << endl;
}
inline void mac_size(Macos a, float m2c)
{
    cout << setw(227) << "SIZE AVAILABLE ARE ---->" << endl;
    for (i = 0; i < m2c; i++)
    {
        cout << setw(230) << a.screenSize_m2[i] << " inch" << endl;
    }
    cout << endl;
}
inline void mac_Memory(Macos a, int n)
{
    cout << setw(227) << "UNIFIED MEMORY AVAILABLE ARE ---->" << endl;
    for (i = 0; i < n; i++)
    {
        cout << setw(230) << a.unifiedMemory[i] << endl;
    }
}
inline void mac_Storage(Macos a, int n)
{
    cout << setw(227) << "INTERNAL STORAGE AVAILABLE ARE ---->" << endl;
    for (i = 0; i < n; i++)
    {
        cout << setw(230) << a.Storage[i] << endl;
    }
}

void printmac(Macos a)
{

    while (1)
    {
        cout << " -------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << setw(228) << "SELECT THE PROCESSOR ->" << endl;
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
            while (1)
            {
                cout << setw(247) << "MACBOOKS AVAILABLE IN THIS CATEGORY ARE ->" << endl;
                mac(a, a.m1);
                cout << endl;
                cout << setw(247) << "PRESS 3 TO SEE THE COLOURS AVAILABLE          ---> ";
                cout << setw(247) << endl;
                cout << setw(247) << "PRESS 4 TO SEE THE SCREEN SIZES AVAILABLE     ---> ";
                cout << endl;
                cout << setw(247) << "PRESS 5 TO SEE THE UNIFIED MEMORY AVAILABLE   ---> ";
                cout << endl;
                cout << setw(247) << "PRESS 6 TO SEE THE INTERNAL STORAGE AVAILABLE ---> ";
                cout << endl;
                cout << setw(247) << "PRESS ANY OTHER KEY TO RETURN                 ---> ";
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
                else if (x == 5)
                {
                    mac_Memory(a, 3);
                }
                else if (x == 6)
                {
                    mac_Storage(a, 3);
                }
                else
                {
                    break;
                }
            }
            break;
        case 2:
            while (1)
            {
                cout << setw(247) << "MACBOOKS AVAILABLE IN THIS CATEGORY ARE ->" << endl;
                mac(a, a.m2);
                cout << endl;
                cout << setw(247) << "PRESS 3 TO SEE THE COLOURS AVAILABLE          ---> ";
                cout << setw(247) << endl;
                cout << setw(247) << "PRESS 4 TO SEE THE SCREEN SIZES AVAILABLE     ---> ";
                cout << endl;
                cout << setw(247) << "PRESS 5 TO SEE THE UNIFIED MEMORY AVAILABLE   ---> ";
                cout << endl;
                cout << setw(247) << "PRESS 6 TO SEE THE INTERNAL STORAGE AVAILABLE ---> ";
                cout << endl;
                cout << setw(247) << "PRESS ANY OTHER KEY TO RETURN                 ---> ";
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
                else if (y == 5)
                {
                    mac_Memory(a, 3);
                }
                else if (y == 6)
                {
                    mac_Storage(a, 3);
                }
                else
                {
                    break;
                }
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

// MAIN FUNCTION

int main()
{
    cout << setw(300) << "--> WELCOME TO CROMA DIGITAL STORE <--" << endl;
    while (1)
    {
        int c;
        cout << endl;
        cout << setw(300) << " 1 -> MACBOOKS              " << endl;
        cout << setw(300) << " 2 -> WINDOWS               " << endl;
        cout << setw(300) << " 3 -> PROCEED FOR INVOICE   " << endl;
        cout << setw(300) << " 4 -> TERMINATE THE PROGRAM " << endl;
        cout << setw(300) << "--> Enter Your Choice -> ";
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
            Windows w;
            printwindows();
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