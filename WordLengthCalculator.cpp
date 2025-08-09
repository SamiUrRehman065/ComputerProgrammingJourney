#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int wordCount = 0;
    int totalLength = 0;

    // Keep taking input until the user presses Enter without typing anything
    while (true) {
        cout << "Enter a word (press Enter to finish): ";
        getline(cin, input);

        // Check if the user pressed Enter without typing anything
        if (input.empty()) {
            break;
        }

        // Update word count and total length
        wordCount++;
        totalLength += input.length();
    }

    // Calculate the average length of the words
    double averageLength = (wordCount > 0) ? static_cast<double>(totalLength) / wordCount : 0;

    // Display the average length rounded to the nearest whole number
    cout << "Average length of words: " << static_cast<int>(averageLength + 0.5) << " characters." << endl;

    return 0;
}
