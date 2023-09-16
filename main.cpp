#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // int *b = new int[NELEMENTS];                 // N_ELEMENTS helyett NELEMENTS
    // std::cout << '1-100 ertekek duplazasa'       // hiányzó ; karakter
    // for (int i = 0;)                             // hiányzó for ciklus kondíció
    {
        b[i] = i * 2;
    }
    // for (int i = 0; i; i++)                      // i-től i-ig megy a loop, hiányzó ; karakter
    {
        //std::cout << "Ertek:"                     // hiányzó ; karakter
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    // for (int i = 0; i < N_ELEMENTS, i++)         // hiányzó ; karakter, vessző helyett ; karakter
    {
        // atlag += b[i]                            // hiányzó ; karakter
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
