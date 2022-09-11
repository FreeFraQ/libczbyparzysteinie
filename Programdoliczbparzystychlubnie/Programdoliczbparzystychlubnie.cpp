// Programdoliczbparzystychlubnie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()

{
    bool bLoop = true;
    while (bLoop)
    {
        int number;
        cout << "Prosze wpisac numer/cyfre";
        cin >> number;
        if (number % 2 == 0)
        {
            cout << "Wpisa³es liczbe parzysta" << endl;
        }
        else
        {
            cout << "Wpisa³es liczbe nieparzysta" << endl;
        }
        cout << "Jesli chcesz wykonac ta akcje ponownie to" << endl;
        
    }
    
    

    system("pause>0");
}
