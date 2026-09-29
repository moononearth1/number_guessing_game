#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<ctime>

int randomz();
int bank();
int entry();

int n = 0;
int k;

using namespace std;

int randomz()
{
    time_t x = time(0);
    tm* y = localtime(&x);

    return y->tm_sec;
};

int bank()
{
    int x = randomz();
    int a[60] = { 53, 37, 40, 52, 82, 28, 83, 37, 77, 31, 68, 69, 6, 84, 35, 54, 70, 71, 87, 0,
                  24, 24, 48, 65, 49, 29, 22, 3, 77, 61, 28, 30, 37, 82, 8, 85, 18, 90, 48, 92,
                  3, 20, 51, 85, 38, 31, 9, 13, 75, 62, 9, 6, 80, 85, 53, 35, 85, 13, 34, 87 };

    return a[x];
};

int entry()
{   
    n++;
    int x;

    if (n > 5)
    {
        x = 999;
    }
    else
    {
    re:
        cout << "GUESS NUMBER : " << n << endl;
        cout << "\t \t \t \t ________________________________________________ \t \t \t \t \n";
        cout << "\t \t \t \t |                TAKE A GUESS                  | \t \t \t \t \n";
        cout << "\t \t \t \t ------------------------------------------------ \t \t \t \t \n \n";
        cout << "\t \t \t \t \t \t \t";
        cin >> x;
        if (x < 1 || x > 100)
        {
            system("cls");
            cout << "\t \t \t \t ________________________________________________ \t \t \t \t \n";
            cout << "\t \t \t \t |     DUH THE NUMBER IS BETWEEN 0 AND 100      | \t \t \t \t \n";
            cout << "\t \t \t \t ------------------------------------------------ \t \t \t \t \n \n";
            goto re;
        }
    }
    return x;
};

int main()
{
    k = bank();

    cout << "\t \t \t \t ________________________________________________ \t \t \t \t \n";
    cout << "\t \t \t \t | WELCOME TO GUESS THE NUMBER (impossible lvl) | \t \t \t \t \n";
    cout << "\t \t \t \t |   YOU HAVE 5 CHANCES TO GUESS THE NUMBER :]  | \t \t \t \t \n";
    cout << "\t \t \t \t |      THE NUMBER IS BETWEEN 0 AND 100         | \t \t \t \t \n";
    cout << "\t \t \t \t ------------------------------------------------ \t \t \t \t \n \n";
                         
    re:

    int x;

    x = entry();


    if (x == 999)
    {
        cout << "\t \t \t \t ________________________________________________ \t \t \t \t \n";
        cout << "\t \t \t \t |   BETTER LUCK NEXT TIME ; THE NUMBER WAS " << k << "  | \t \t \t \t \n";
        cout << "\t \t \t \t ------------------------------------------------ \t \t \t \t \n \n";
    }
    else if (k == x)
    {
        system("cls");
        cout << "\t \t \t \t ________________________________________________ \t \t \t \t \n";
        cout << "\t \t \t \t |   KUDOS!GETTING IT RIGHT IS REAL IMPRESSIVE  | \t \t \t \t \n";
        cout << "\t \t \t \t ------------------------------------------------ \t \t \t \t \n \n";
    }
    else if (k < x)
    {   
        system("cls");
        if (n != 5)
        {
            cout << "\t \t \t \t ________________________________________________ \t \t \t \t \n";
            cout << "\t \t \t \t |THE NUMBER IS SMALLER THAN YOUR PREVIOUS GUESS| \t \t \t \t \n";
            cout << "\t \t \t \t ------------------------------------------------ \t \t \t \t \n \n";
        }
        goto re;
    }
    else
    {
        system("cls");
        if (n != 5)
        {
            cout << "\t \t \t \t ________________________________________________ \t \t \t \t \n";
            cout << "\t \t \t \t | THE NUMBER IS BIGGER THAN YOUR PREVIOUS GUESS | \t \t \t \t \n";
            cout << "\t \t \t \t ------------------------------------------------ \t \t \t \t \n \n";
        }
        goto re;
    }


    end:
    return 0;
}

