#include <iostream>
#include <stack>
#include <string>
using namespace std;
// Function to simulate the PDA
bool simulatePDA(const std::string& input) {
    std::stack<char> stack;
    int state = 0; // PDA starts in state 0

    for (char c : input) {
        switch (state) {
        case 0: // Initial state, processing 'a's
            if (c == 'a') {
                stack.push('A'); // Push 'A' for every 'a'
            } else if (c == 'b') {
                if (stack.empty()) {
                    return false; // No matching 'a' for this 'b'
                }
                stack.pop(); // Pop for every 'b'
                state = 1; // Transition to state 1 when 'b' is encountered
            } else {
                return false; // Invalid character
            }
            break;
        case 1: // State where only 'b's are valid
            if (c == 'b') {
                if (stack.empty()) {
                    return false; // No matching 'a' for this 'b'
                }
                stack.pop(); // Pop for every 'b'
            } else {
                return false; // No 'a' is allowed in this state
            }
            break;
        default:
            return false; // Invalid state
        }
    }

    // Accept if stack is empty (all 'a's matched with 'b's) and no input is left
    return stack.empty();
}

int main() {
    std::string input;
    cout << "Enter a string (a^n b^n): ";
    cin >> input;

    if (simulatePDA(input)) {
        cout << "The string \"" << input << "\" is accepted by the PDA.\n";
    } else {
        cout << "The string \"" << input << "\" is rejected by the PDA.\n";
    }

    return 0;
}
