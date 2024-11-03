#include <iostream>
#include <cstdlib>  // для rand() і srand()
#include <ctime>    // для time()

using namespace std;

int main() {
    // Ініціалізуємо генератор випадкових чисел
    srand(static_cast<unsigned int>(time(0)));

    // Загадуємо випадкове число від 1 до 100
    int secretNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Я загадал число от 1 до 100. Попробуй угадать его!" << endl;

    // Цикл для вгадування
    while (userGuess != secretNumber) {
        cout << "Введите ваше число: ";
        cin >> userGuess;

        if (userGuess < secretNumber) {
            cout << "Слишком маленькое число. Попробуйте снова." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Слишком большое число. Попробуйте снова." << endl;
        } else {
            cout << "Поздравляю! Вы угадали число " << secretNumber << "!" << endl;
        }
    }

    return 0;
}
