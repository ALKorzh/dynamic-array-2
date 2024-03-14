#include <iostream>

using namespace std;

int differentLetters(int length, string input) {
    char* symbols{ new char[length]{} };
    int counter = 0;
    for (int i = 0; i < length; i++) {
        symbols[i] = input[i];
    }
    
    for (int j = 0; j < length; j++) {
        bool flag = true;
        for (int k = 0; k < j; k++) {
            if (symbols[j] == symbols[k]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            counter++;
        }
    }

    delete[] symbols;
    return counter;
}

int main()
{
    string input;
    cout << "Enter text:" << endl;
    cin >> input;
    int InputLength = input.length();

    cout << differentLetters(InputLength, input) << endl;
}

