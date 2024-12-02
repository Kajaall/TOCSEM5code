#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
// Function to display a language (set of strings)
void displayLanguage(const std::set<std::string>& language) {
    std::cout << "{ ";
    for (const auto& str : language) {
        std::cout << "\"" << str << "\", ";
    }
    std::cout << "}" << std::endl;
}
// Function to compute the union of two languages
std::set<std::string> unionOfLanguages(const std::set<std::string>& L1, const std::set<std::string>& L2) {
    std::set<std::string> result = L1;
    result.insert(L2.begin(), L2.end());
    return result;
}
// Function to compute the intersection of two languages
std::set<std::string> intersectionOfLanguages(const std::set<std::string>& L1, const std::set<std::string>& L2) {
    std::set<std::string> result;
    std::set_intersection(L1.begin(), L1.end(), L2.begin(), L2.end(),
                          std::inserter(result, result.begin()));
    return result;
}
// Function to compute the concatenation of two languages
std::set<std::string> concatenationOfLanguages(const std::set<std::string>& L1, const std::set<std::string>& L2) {
    std::set<std::string> result;
    for (const auto& s1 : L1) {
        for (const auto& s2 : L2) {
            result.insert(s1 + s2);
        }
    }
    return result;
}
int main() {
    // Define two languages (sets of strings)
    std::set<std::string> L1 = {"abba", "abc"};
    std::set<std::string> L2 = {"abc"};
    cout << "Language L1: ";
    displayLanguage(L1);
    cout << "Language L2: ";
    displayLanguage(L2);
    // Compute the union of L1 and L2
    std::set<std::string> unionLang = unionOfLanguages(L1, L2);
    cout << "\nUnion of L1 and L2: ";
    displayLanguage(unionLang);
    // Compute the intersection of L1 and L2
    std::set<std::string> intersectionLang = intersectionOfLanguages(L1, L2);
    cout << "Intersection of L1 and L2: ";
    displayLanguage(intersectionLang);
    // Compute the concatenation of L1 and L2
    std::set<std::string> concatenationLang = concatenationOfLanguages(L1, L2);
    cout << "Concatenation of L1 and L2: ";
    displayLanguage(concatenationLang);
    return 0;
}
