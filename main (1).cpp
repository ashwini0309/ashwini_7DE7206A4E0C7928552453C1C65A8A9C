#include <iostream>
using namespace std;

// Base class Player
class Player {
public:
    virtual void play() {
        cout << "The player is playing cricket." << endl;
    }
};

// Derived class Batsman
class Batsman : public Player {
public:
    void play() override {
        cout << "The batsman is batting." << endl;
    }
};

// Derived class Bowler
class Bowler : public Player {
public:
    void play() override {
        cout << "The bowler is bowling." << endl;
    }
};

int main() {
    Batsman batsman;
    Bowler bowler;

    batsman.play(); // Output: The batsman is batting.
    bowler.play();  // Output: The bowler is bowling.

    return 0;
}
