#include <iostream>

using namespace std;


int main() {

    int n;
    cout << "what's your age? ";
    cin >> n;

    if (n < 35){
        cout << "Your insurance rate is 2.23$ per 100$";

    }
    else {
        cout << "Your insurance rate is 4.32$ per 100$";
    };

}