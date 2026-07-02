#include <iostream>
#include <cstdlib>
#include <ctime>

// Generate the correct note
int generateNote() {
    return std::rand() % 4 + 1;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int score = 0;

    std::cout << "=== Rhythm Stage Challenge ===\n";

    for (int round = 1; round <= 6; ++round) {
        int note = generateNote();
        int guess;

        std::cout << "\nRound " << round << "\n";
        std::cout << "Play note (1-4): ";
        std::cin >> guess;

        if (guess == note) {
            std::cout << "Perfect performance!\n";
            score += 10;
        } else {
            std::cout << "Good attempt.\n";
            score += 4;
