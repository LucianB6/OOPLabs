#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

#include <iostream>
#include <cstring>
#include <algorithm>

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

    char newWords[100];
    char* listOfWords[100];

    printf ("Enter a sentence: ");
    scanf ("%[^\n]s",&newWords);

    printf("My printed sentence: %s\n", &newWords);

    int num_words = 0;
    char *words[100];
    char *word = strtok(newWords, " ");

    while (word != NULL) {
        words[num_words] = word;
        num_words++;
        word = strtok(NULL, " ");

    }

    for (int i = 0; i < num_words; i++){
        for(int j = 0; j < num_words - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                swap(words[i], words[j]);
            }
        }
        }


    for (int i = 0; i < num_words; i++) {
        printf("%s\n", words[i]);
    }


    int n;

    cout << "Enter a number:";
    cin >> n;

    if (isPrime(n))
        cout << n << " is prime !";
    else
        cout << n << " is NOT prime !";

    return 0;
}
