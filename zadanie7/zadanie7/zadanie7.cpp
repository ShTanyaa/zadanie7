// zadanie7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


bool res = false;
bool Search(int mas[10], int k, int i = 0)
{
    if (k == mas[i])
        return res=true;

    if (i == 10)
        return res=false;

    return Search(mas, k, i + 1);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    while(true)
    {
        int k,z;
        int mass[10];
        cout << "Выберите действие:" << endl << "1.Заполнить массив вручную\n2.Заполнить массив рандомно" << endl;
        cin >> z;
        switch(z)
        {
        case 1:
            for (int i = 0;i < 10;i++)
            {
                cout << "введите " << i + 1 << " элемент массива: ";
                cin >> mass[i];
            }
            for (int i = 0; i < 10; i++) {
                cout << mass[i] << " ";
            }
            cout << endl;

            cout << "вывод отсортированного массива х: " << endl;
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10 - i - 1; j++)
                {
                    if (mass[j] > mass[j + 1])
                    {
                        int temp = mass[j];
                        mass[j] = mass[j + 1];
                        mass[j + 1] = temp;
                    }
                }
            }
            for (int i = 0; i < 10; i++)
            {
                cout << mass[i] << " ";
            }
            cout << endl;

            cout << "Введите k" << endl;
            cin >> k;
            Search(mass, k);
            if (res)
            {
                cout << "Число " << k << " входит в массив" << endl;
            }
            else
            {
                cout << "Число " << k << " не входит в массив" << endl;

            }
            break;
        case 2:
            for (int i = 0;i < 10;i++)
            {
                mass[i] = rand() % 101;
            }
            for (int i = 0; i < 10; i++) {
                cout << mass[i] << " ";
            }
            cout << endl;

            cout << "вывод отсортированного массива х: " << endl;
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10 - i - 1; j++)
                {
                    if (mass[j] > mass[j + 1])
                    {
                        int temp = mass[j];
                        mass[j] = mass[j + 1];
                        mass[j + 1] = temp;
                    }
                }
            }
            for (int i = 0; i < 10; i++)
            {
                cout << mass[i] << " ";
            }
            cout << endl;

            cout << "Введите k" << endl;
            cin >> k;
            Search(mass, k);
            if (res)
            {
                cout << "Число " << k << " входит в массив" << endl;
            }
            else
            {
                cout << "Число " << k << " не входит в массив" << endl;

            }
            break;
           
        default:
            cout << "Такого действия нет" << endl;
                break;
           
        }
    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
