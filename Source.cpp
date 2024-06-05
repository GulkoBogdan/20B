#include <iostream>
#include "string"
#include <cmath>    
using namespace std;
int   main()
{
    //1
    int s1 = 1000;
    int n1;
    int a1 = 0;
    int b1 = 0;
    for (int i = 0; i < s1; i++) {

        n1 = rand() % 2;
        if (n1 > 0) {
            a1++;
        }
        else {
            b1++;
        }
    }
    cout << "Reshka: " << a1 << endl;
    cout << "Orel: " << b1 << endl;

    //2
    int n2 = rand() % 20;
    string a2 = "";
    switch (n2)
    {
    case 0:
        a2 = ")))))))))):";
        break;
    case 1:
        a2 = "))))))))):";
        break;
    case 2:
        a2 = ")))))))):";
        break;
    case 3:
        a2 = "))))))):"; break;
    case 4:
        a2 = ")))))):"; break;
    case 5:
        a2 = "))))):"; break;
    case 6:
        a2 = ")))):"; break;
    case 7:
        a2 = "))):"; break;
    case 8:
        a2 = ")):"; break;
    case 9:
        a2 = "):"; break;
    case 10:
        a2 = "(:"; break;
    case 11:
        a2 = "((:"; break;
    case 12:
        a2 = "(((:"; break;
    case 13:
        a2 = "((((:"; break;
    case 14:
        a2 = "(((((:"; break;
    case 15:
        a2 = "((((((:"; break;
    case 16:
        a2 = "(((((((:"; break;
    case 17:
        a2 = "((((((((:"; break;
    case 18:
        a2 = "(((((((((:"; break;
    case 19:
        a2 = "((((((((((:"; break;
    }
    cout << "Your mood lvl: " << a2 << endl;

    //3
    int n3;
    int a3 = 2;
    cout << "Input number: ";
    cin >> n3;
    for (int i = 1; a3 < n3; i++) {

        a3 = pow(2, i);
        if (a3 >= n3) {
            break;
        }
        cout << a3 << ", ";

       
    }
}