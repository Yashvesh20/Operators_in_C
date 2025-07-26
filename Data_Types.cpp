Yashvesh Singh 24070123138
#include<iostream>
#include<string>
using namespace std;
int main() {
    int a;
    cout << "Enter an Integer Number: ";
    cin >> a;
    cout << "The Integer is "<< a <<" and its size is " << sizeof(a) << " bytes.\n";
    float b;
    cout << "Enter a Float Number: ";
    cin >> b; 
    cout << "The Float is " << b << " and its size is " << sizeof(b) << " bytes.\n";
    double c;
    cout << "Enter a Double Number: ";
    cin >> c;
    cout << "The Double is " << c << " and its size is " << sizeof(c) << " bytes.\n";
    char d; 
    cout << "Enter a Character: ";
    cin >> d;
    cout << "The Character is " << d << " and its size is " << sizeof(d) << " bytes.\n";
    string e;
    cout << "Enter a String: ";
    cin >> e;
    cout << "The String is " << e << " and its size is " << sizeof(e) << " bytes.\n";
    bool f; 
    cout << "Enter a Boolean Value(i.e True or False): ";
    cin >> f;
    cout << "The Boolean value is " << f << " and its size is " << sizeof(f) << " bytes.\n";
    short g; 
    cout << "Enter a short integer number: ";
    cin >> g;
    cout << "The shor integer number is " << g << " and its size is " << sizeof(g) << " bytes.\n";
    long h;
    cout << "Enter a long integer number: ";        
    cin >> h;
    cout << "The long integer number is " << h << " and i4ts size is " << sizeof(h) << " bytes.\n";
}

output:
Enter an Integer Number: 22
The Integer is 22 and its size is 4 bytes.
Enter a Float Number: 20.22
The Float is 20.22 and its size is 4 bytes.
Enter a Double Number: 53535363536
The Double is 5.35354e+10 and its size is 8 bytes.
Enter a Character: t
The Character is t and its size is 1 bytes.
Enter a String: Yashvesh
The String is Yashvesh and its size is 32 bytes.
Enter a Boolean Value(i.e True or False): True
Enter a short integer number: The shor integer number is 7792 and its size is 2 bytes.
Enter a long integer number: The long integer number is 0 and i4ts size is 4 bytes.
