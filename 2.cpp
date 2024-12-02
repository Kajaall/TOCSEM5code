//q2 containing two 1s or three 1s not more not less
#include <iostream>
#include <string>

using namespace std;
void State0(string w, int i);
void State1(string w, int i);
void State2(string w, int i);
void State3(string w, int i);
void State4(string w, int i);

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
    
    if (w[i] == '1') {
        State1(w, i + 1);
    } else if (w[i] == '0') {
        State0(w, i + 1);
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
    
    if (w[i] == '1') {
        State2(w, i + 1);
    } else if (w[i] == '0') {
        State1(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}


void State2(string w, int i) {
		cout<<"State2\n";
    if (i == w.length()) {
        cout << "String is accepted" << endl;
        return;
    }
    
    if (w[i] == '1') {
        State3(w, i + 1);
    } else if (w[i] == '0') {
        State2(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}

void State3(string w, int i) {
		cout<<"State3\n";
    if (i == w.length()) {
        
        cout << "String is accepted" << endl;
        return;
    }
    
    if (w[i] == '1') {
        State4(w, i + 1);
    } else if (w[i] == '0') {
        State3(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}
void State4(string w, int i) {
		cout<<"State4\n";
    if (i == w.length()) {
        
        cout << "String is rejected" << endl;
        return;
    }
    
    if (w[i] == '1') {
        State4(w, i + 1);
    } else if (w[i] == '0') {
        State4(w, i + 1);
    } else {
        cout << "Invalid character in string" << endl;
    }
}



