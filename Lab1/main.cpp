#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#include <iostream>

using namespace std;



bool isPrime(int n){
    for (int tr = 2; tr < n / 2; tr++)
        if ((n % 2 ) == 0)
            return false;
    return true;
}

int main() {
    string line;
    int number = 0;
    ifstream myfile ("C:\\Users\\Lucian\\OneDrive\\Desktop\\FIAnul3\\Semestrul2\\OOP labs\\OOPLabs\\Lab1\\in.txt");
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            number += stoi(line);
        }
        printf("Numbers: %d\n", number);
        myfile.close();
    }
    char newWords [10][80];

    printf ("Enter a sentence: ");
    scanf ("%[^\n]s",&newWords);

    printf("My printed sentence: %s\n", &newWords);


//    string s;
//    int i = 0;
//    char separator = ' ';
//
//    while (newWords[i] != '\0') {
//        if (newWords[i] != separator) {
//            // Append the char to the temp string.
//            s += newWords[i];
//        } else {
//            cout << s << endl;
//            s.clear();
//        }
//        i++;
//    }
//    cout << s << endl;

    int n;

    cout << "Enter a number:";
    cin >> n;

    if (isPrime(n))
        cout << n << " is prime !";
    else
        cout << n << " is NOT prime !";

    return 0;
}
