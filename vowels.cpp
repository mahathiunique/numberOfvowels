#include <iostream>
using namespace std;
int main() {
    string alphabets;
    cout << "Enter a string: ";
    getline(cin, alphabets); 
    int vowels = 0;

    for (int i = 0; alphabets[i]; i++) { 
        if (alphabets[i] == 'a' || alphabets[i] == 'e' || alphabets[i] == 'i' || alphabets[i] == 'o' || alphabets[i] == 'u' ||
            alphabets[i] == 'A' || alphabets[i] == 'E' || alphabets[i] == 'I' || alphabets[i] == 'O' || alphabets[i] == 'U') {
            vowels++;
        }
    }
    if (vowels > 0) {
        cout << "You have " << vowels << " vowels!" << endl;
    } else {
        cout << "No vowels are present." << endl;
    }
    return 0;
}



    
