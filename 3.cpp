#include <iostream>
#include <string>

using namespace std;
void State0(string w, int i);
void State1(string w, int i);
void State2(string w, int i);
void State3(string w, int i);
void State4(string w, int i);
void State5(string w, int i);
void State6(string w, int i);
void State7(string w, int i);
void State8(string w, int i);
void State9(string w, int i);
void State10(string w, int i);
void State11(string w, int i);
void State12(string w, int i);
void State13(string w, int i);
void State14(string w, int i);


int main() {
    string w;
    cout << "Enter the string:" << endl;
    cin >> w;
    State0(w, 0);
    return 0;
}


void State0(string w, int i) {
		cout<<"State0\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State1(w, i + 1);
    } else if (w[i] == 'b') {
        State8(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}


void State1(string w, int i) {
		cout<<"State1\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State2(w, i + 1);
    } else if (w[i] == 'b') {
        State5(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}


void State2(string w, int i) {
		cout<<"State2\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State3(w, i + 1);
    } else if (w[i] == 'b') {
        State2(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State3(string w, int i) {
		cout<<"State3\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State4(w, i + 1);
    } else if (w[i] == 'b') {
        State2(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}

void State4(string w, int i) {
		cout<<"State4\n";
    if (i == w.length()) {
        
        cout << "String is accepted" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State4(w, i + 1);
    } else if (w[i] == 'b') {
        State2(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State5(string w, int i) {
		cout<<"State5\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State6(w, i + 1);
    } else if (w[i] == 'b') {
        State5(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State6(string w, int i) {
		cout<<"State6\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State6(w, i + 1);
    } else if (w[i] == 'b') {
        State7(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State7(string w, int i) {
		cout<<"State7\n";
    if (i == w.length()) {
        
        cout << "String is accepted" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State6(w, i + 1);
    } else if (w[i] == 'b') {
        State5(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State8(string w, int i) {
		cout<<"State8\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State12(w, i + 1);
    } else if (w[i] == 'b') {
        State9(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State9(string w, int i) {
		cout<<"State9\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State9(w, i + 1);
    } else if (w[i] == 'b') {
        State10(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State10(string w, int i) {
		cout<<"State10\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State9(w, i + 1);
    } else if (w[i] == 'b') {
        State11(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State11(string w, int i) {
		cout<<"State11\n";
    if (i == w.length()) {
        
        cout << "String is accepted" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State9(w, i + 1);
    } else if (w[i] == 'b') {
        State11(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State12(string w, int i) {
		cout<<"State12\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State12(w, i + 1);
    } else if (w[i] == 'b') {
        State13(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State13(string w, int i) {
		cout<<"State13\n";
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State14(w, i + 1);
    } else if (w[i] == 'b') {
        State13(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State14(string w, int i) {
		cout<<"State14\n";
    if (i == w.length()) {
        
        cout << "String is accepted" << endl;
        return;
    }
    
    if (w[i] == 'a') {
        State12(w, i + 1);
    } else if (w[i] == 'b') {
        State13(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}



