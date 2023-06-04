#include <iostream>
#include <string>

using namespace std;


void help(int help) {
    if (help == 1) {
        cout << "---------------help---------------" << endl;
        cout << "'/help': to open this guide." << endl;
        cout << "'/calc': to start calculate." << endl;
        cout << "'/quit': to exit the app." << endl;
        cout << "'/help calc': to calculate help." << endl;
        cout << "----------------------------------" << endl;
    }
    if (help == 2) {
        cout << "---------Calculator help----------" << endl;
        cout << "'+': Add operation." << endl;
        cout << "'-': Subtract operation." << endl;
        cout << "'*': Multiplication operation." << endl;
        cout << "'/': Divide operation." << endl;
        cout << "'/calc end': stop calculate" << endl;
        cout << "----------------------------------" << endl;
    }
}
int numberAdd(int number1, int number2) {
    int sum = number1 + number2;
    return sum;
}
int numberSub(int number1, int number2) {
    if (number1 < 0) {
        if(number2 < 0) {
            int sub = numberAdd(number1, number2);
            return sub;
        }
    }
    else {
        int sub = number1 - number2;
        return sub;
    }
}
int numberMut(int number1, int number2) {
    int Mut = number1 * number2;
    return Mut;
}
int numberDiv(int number1, int number2) {
    if (number2 == 0) {
        cout << "Error: cannot divide by 0" << endl;
        return 0;
    }
    else {
        int Div = number1 / number2;
        return Div;
    }
}
void calc() {
    int calc_run{};
    int mainNumber{};
    int firstNumber{};
    int secndNumber{};
    string CalcUC;
    cout << "Calculator: " << "'/help calc' to open calc help" << endl;
    help(2);
    cout << "Calculator: " << "Enter number: ";
    cin >> mainNumber;
    while (calc_run != -1) {
        cout << "Calculator: ";
        getline(cin, CalcUC);
        if (CalcUC == "/help calc") {
        help(2);
        }
        else 
            if (CalcUC == "+") {
                cout << "Calculator: " << "Enter number: ";
                cin >> secndNumber;
                mainNumber = numberAdd(mainNumber, secndNumber);
                cout << "Calculator: " << mainNumber << endl;
            }
                else 
                    if (CalcUC == "-") {
                        cout << "Calculator: " << "Enter number: ";
                        cin >> secndNumber;
                        mainNumber = numberSub(mainNumber, secndNumber);
                        cout << "Calculator: " << mainNumber << endl;
                    }
                    else 
                        if (CalcUC == "*") {
                            cout << "Calculator: " << "Enter number: ";
                            cin >> secndNumber;
                            mainNumber = numberMut(mainNumber, secndNumber);
                            cout << "Calculator: " << mainNumber << endl;
                        }
                        else 
                            if (CalcUC == "/") {
                                cout << "Calculator: " << "Enter number: ";
                                cin >> secndNumber;
                                mainNumber = numberDiv(mainNumber, secndNumber);
                                cout << "Calculator: " << mainNumber << endl;
                            }
                            else 
                                if (CalcUC == "/clear") {
                                    cout << "Calculator: " << "Enter number: ";
                                    cin >> mainNumber;
                                }
                                else{ 
                                    if (CalcUC == "/calc end") {
                                        cout << "exiting Calculator..." << endl;
                                        calc_run = -1;
                                    }
                                    else {
                                        cout << "Error: invalid command" << endl;
                                    }
                                    }
    }
}
int main() {
    int run{};
    string UC;
    cout << "'/help' for help" << endl;
    while (run != -1) {
        getline(cin, UC);
        if (UC == "/help") {
            help(1);
        }
        else if (UC == "/help calc") {
            help(2);
        }
        else if (UC == "/calc") {
            cout << "opening Calculator..." << endl;
            calc();
        }
        else if (UC == "/quit") {
            run = -1;
        }
        else {
            
        }
    }
}