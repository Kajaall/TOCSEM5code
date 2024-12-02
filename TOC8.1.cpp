#include <iostream>
#include <stack>
#include <string>
#include <unordered_set>

bool simulatePDA(const std::string& input) {
    std::stack<char> stack;
    std::unordered_set<char> specialChars = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')'};
    int state = 0; // Initial state
    bool inReversePhase = false;
        for (char c : input) {
        if (!inReversePhase) {
            if (specialChars.count(c)) {
                // Transition to reverse phase
                inReversePhase = true;
            } else if (c == 'a' || c == 'b') {
                // Push characters of w onto the stack
                stack.push(c);
            } else {
                // Invalid character in w
                return false;
            }
        } else {
            // In reverse phase, match w' with stack
            if (stack.empty() || stack.top() != c) {
                return false; // Mismatch or extra characters in w'
            }
            stack.pop(); // Pop matching character
        }
    }

    // Accept if stack is empty and in reverse phase
    return inReversePhase && stack.empty();
}

int main() {
    std::string input;
    std::cout << "Enter a string (wXw'): ";
    std::cin >> input;

    if (simulatePDA(input)) {
        std::cout << "The string \"" << input << "\" is accepted by the PDA.\n";
    } else {
        std::cout << "The string \"" << input << "\" is rejected by the PDA.\n";
    }

    return 0;
}
