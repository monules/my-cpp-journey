#include <iostream>

enum Example : unsigned char {
    A = 1,
    B = 2,
    C = 3
};

enum Weekdays {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

enum PlayerState {
    Idle,
    Walking,
    Running,
    Jumping
};

PlayerState playerState = Idle;

int main() {
    if (playerState == Idle) {
        std::cout << "Player is idle" << std::endl;
    }

    Example value = B;

    if (value == B) {
        std::cout << "Value is B" << std::endl;
    }

    return 0;
}