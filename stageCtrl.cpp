#include <iostream>
using namespace std;

int forward(int stagePos) {
    cout << "stage moved forward" << '\n';
    stagePos ++;

    return stagePos;
}

int main() {
    int command = 0;
    int stagePos = 0;

    cout << "Enter initial stage position:" << '\n';
    cin >> stagePos;

    while (1) {
        cout << "Select command - 1: moveFoward, 2: moveBackward, 3: currentPosition" << '\n';
        cout << " 4 to exit" << '\n';
        cin >> command;

        if (command == 1) {
            stagePos = forward(stagePos);
        } else if (command == 2) {
            cout << "stage moved backward" << '\n';
            stagePos --;
        } else if (command == 3) {
            cout << "Current stageg position is: " << stagePos << '\n';
        } else if (command == 4) {
            break;
        }
    }

    return 0;
}
