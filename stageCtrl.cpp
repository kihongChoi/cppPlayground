#include <iostream>
using namespace std;

class stage {
private:
    int serial;
    int initPos;
public:
    //void setInfo(int _initPos, int _serial);
    stage(int _serial, int _initPos, int _jogStep);
    int forward();
    int backward();
    void status();
    int currentPos;
    int jogStep;
};

stage::stage(int _serial, int _initPos, int _jogStep) {
    serial = _serial;
    initPos = _initPos;
    currentPos = initPos;
    jogStep = _jogStep;
}

int stage::forward() {
    cout << "stage moved forward" << '\n';
    currentPos = currentPos + jogStep;

    return currentPos;
}

int stage::backward() {
    cout << "stage moved backward" << '\n';
    currentPos = currentPos - jogStep;

    return currentPos;
}

void stage::status() {
    cout << "stage number: " << serial << '\n';
    cout << "jog step size: " << jogStep << '\n';
    cout << "initial position: " << initPos << '\n';
    cout << "current position: " << currentPos << '\n';
}

int main() {
    int serial = 2323, initPos;
    int command = 0;
    int jogStep;

    cout << "Enter initial stage position:" << '\n';
    cin >> initPos;

    cout << "Enter jog step size:" << '\n';
    cin >> jogStep;

    stage stg(serial, initPos, jogStep);


    while (1) {
        cout << "Select command - 1: moveFoward, 2: moveBackward, 3: currentPosition" << '\n';
        cout << " 4 to exit" << '\n';
        cin >> command;

        if (command == 1) {
            stg.forward();
        } else if (command == 2) {
            stg.backward();
        } else if (command == 3) {
            stg.status();
        } else if (command == 4) {
            break;
        }
    }

    return 0;
}
