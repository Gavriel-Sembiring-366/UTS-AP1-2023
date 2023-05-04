#include <iostream>
using namespace std;

void printbintang(int jumlah)
{
    int limit = jumlah - 1;
    for (int i = limit; i >= 1; --i)
    {
        int space = limit - i; // make the limit is -1 of user input

        for (int a = 1; a <= i; a++) // looping for printing the left side of *
        {
            cout << "* ";
        }

        for (int a = 1; a <= space; a++) // printing the spaces
        {
            cout << "  ";
            cout << "  ";
        }

        for (int b = 1; b <= i; b++) // printing the right side of *
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= limit; i++)
    {

        int space = limit - i;

        for (int a = 1; a <= i; a++)
        {
            cout << "* ";
        }

        for (int a = 1; a <= space; a++)
        {
            cout << "  ";
            cout << "  ";
        }

        for (int a = 0; a < i; a++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
int main()
{
    int pattern;
    cout << "Silahkan Masukkan Berapa Jumlah Pola Yang ingin Anda Inginkan : ";
    cin >> pattern;
    printbintang(pattern); // call the function
    return 0;
}
