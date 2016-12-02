#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int i;
    int sum = 0;

    for (i=0; i<10; i++) {
        cout << i << endl;
        sum += i;
    }

    cout << "합은: " << sum << endl;

    i += 20;

    while (i <= 30) {
        sum += i;
        i++;
    }

    cout << "합은: " << sum << endl;

    int lucky_number = 3;
    cout << "guess what" << endl;

    int user_input;

    while (1) {
        cout << "입력: ";
        cin >> user_input;

        if (lucky_number == user_input) {
            cout << "good job" << endl;
            break;
        } else {
            cout << "think again" << endl;
        }
    }

    return 0;
}
