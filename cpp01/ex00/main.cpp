#include "Zombie.hpp"

int main() {

    std::string namesHeap[5] = {"Jeff", "Elon", "Bernard", "Bill", "Mark"};
    std::string namesStack[5] = {"Svyatoslav", "Yaropolk", "Mirolyub", "Tihomir", "Svetozar"};
    Zombie      *zombie1;
    Zombie      *zombie2;
    Zombie      *zombie3;
    Zombie      *zombie4;
    Zombie      *zombie5;

    zombie1 = newZombie(namesHeap[0]);
    zombie2 = newZombie(namesHeap[1]);
    zombie3 = newZombie(namesHeap[2]);
    zombie4 = newZombie(namesHeap[3]);
    zombie5 = newZombie(namesHeap[4]);

    for (int i = 0; i < 5; ++i) {
        randomChump(namesStack[i]);
    }

    delete zombie1;
    delete zombie2;
    delete zombie3;
    delete zombie4;
    delete zombie5;
}

