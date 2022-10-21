#include <iostream>
#include <math.h>
#include <string>

using namespace std;

struct Dec
{
    string nameVillage;
    int countPeople; 
    int countHouse;
    int squareVillage;
    int yearFound;
    string country;
    string area;
    int birthRate;
    int deathRate;
    string timeZone;

    struct Dec* prev;
    struct Dec* next;
};

void fillDec(struct Dec* dec){
    string nameVillage;
    cout << "Введите название деревни:" << endl;
    cin >> nameVillage;
    int countPeople;
    cout << "Введите количество людей:" << endl;
    cin >> countPeople;
    int countHouse;
    cout << "Введите количество домов:" << endl;
    cin >> countHouse;
    int squareVillage;
    cout << "Введите площадь деревни:" << endl;
    cin >> squareVillage;
    int yearFound;
    cout << "Введите дату основания:" << endl;
    cin >> yearFound;
    string country;
    cout << "Введите страну деревени:" << endl;
    cin >> country;
    string area;
    cout << "Введите область деревни:" << endl;
    cin >> area;
    int birthRate;
    cout << "Введите процент рождаемости в деревне:" << endl;
    cin >> birthRate;
    int deathRate;
    cout << "Введите процент смертности в деревне:" << endl;
    cin >> deathRate;
    string timeZone;
    cout << "Введите часовой пояс деревни:" << endl;
    cin >> timeZone;

    dec->nameVillage = nameVillage;
    dec->countPeople = countPeople;
    dec->countHouse = countHouse;
    dec->squareVillage = squareVillage;
    dec->yearFound = yearFound;
    dec->country = country;
    dec->area = area;
    dec->birthRate = birthRate;
    dec->deathRate = deathRate;
    dec->timeZone = timeZone;
}

void printTools()
{
    cout << endl;
    cout << "1)Проверка на наличие элементов в структуре данных" << endl;
    cout << "2)Получение количества элементов  в структуре данных" << endl;
    cout << "3)Добавление элемента в указанный конец структуры данных" << endl;
    cout << "4)Удаление элемента из указанного конца структуры данных" << endl;
    cout << "5)Очистка структуры данных" << endl;
    cout << "6)Чтение элемента из указанной вершины (головы) структуры данных" << endl;
    cout << "7)Выйти" << endl;
    cout << endl;
}

int getTools()
{
    printTools();
    int numberTool = 0;
    cout << "Введите цифру: ";
    cin >> numberTool;
    return numberTool;
}

void setRussian()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
}