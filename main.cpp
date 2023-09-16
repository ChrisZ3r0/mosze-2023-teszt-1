#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];                           // NELEMENT kijavítva N_ELEMENTS-re
    std::cout << "1-100 ertekek duplazasa" << std::endl;    // hiányzó ; karakter hozzáadva (+ endl mert azt szeretem)
    for (int i = 0; i < N_ELEMENTS; i++)					// NELEMENT kijavítva N_ELEMENTS-re
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;		// hiányzó ; karakter és érték kiíratás hozzáadva
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;                                          // atlag értékének inicializálása
    for (int i = 0; i < N_ELEMENTS; i++)                    // vessző kijavítva pontosvesszőre
    {
        atlag += b[i];                                      // hiányzó ; kaakter hozzáadva
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b;											    // bár úgyis kilép a program, azért szabadítsuk fel a memóriát

    return 0;
}
