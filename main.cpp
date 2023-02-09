#include <iostream>

using namespace std;

//Функция вывода двумерного массива
void print_array (const int array [2][6])
{
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<6; j++)
        {
            cout << array [i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    //Инициализация двумерных массивов
    int appliances [2][6] = {{3, 3, 4, 4, 3, 3}, {3, 3, 3, 3, 3, 3}};
    int dishes [2][6] = {{2, 2, 3, 3, 2, 2}, {2, 2, 2, 2, 2, 2}};
    int chairs [2][6] = {{1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}};

    //Внесение изменений в массивы
    cout << "A woman came with a child" << endl;
    chairs [0][4]++;
    cout << "Appliances" << endl;
    print_array (appliances);
    cout << "Dishes" << endl;
    print_array (dishes);
    cout << "Chairs" << endl;
    print_array (chairs);

    cout << "Spoon stolen" << endl;
    appliances [1][2]--;
    cout << "Appliances" << endl;
    print_array (appliances);
    cout << "Dishes" << endl;
    print_array (dishes);
    cout << "Chairs" << endl;
    print_array (chairs);

    cout << "VIP shared a spoon" << endl;
    appliances [0][3]--;
    appliances [1][2]++;
    cout << "Appliances" << endl;
    print_array (appliances);
    cout << "Dishes" << endl;
    print_array (dishes);
    cout << "Chairs" << endl;
    print_array (chairs);

    cout << "The waiter took the plate" << endl;
    dishes [0][3]--;
    cout << "Appliances" << endl;
    print_array (appliances);
    cout << "Dishes" << endl;
    print_array (dishes);
    cout << "Chairs" <<  endl;
    print_array (chairs);

    return 0;
}
