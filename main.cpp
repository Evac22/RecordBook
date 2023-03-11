#include "pch.h"
#include <iostream>
#include <string>
#include "RecordBook.h"

using namespace std;

// Функция для ввода данных о предметах студента
void enterData(RecordBook& rb)
{
    // Инициализация зачётной книжки
    rb.init();

    string subject;
    int mark;
    bool done = false;

    // Цикл для ввода данных по каждому предмету студента
    while (!done)
    {
        cout << "Enter lesson name (or 'exit' to finish): ";
        getline(cin, subject);

        // Если пользователь ввел "exit", завершаем цикл
        if (subject == "exit")
        {
            done = true;
        }
        else
        {
            cout << "Enter mark: ";
            cin >> mark;
            cin.ignore(); // очистка буфера ввода

            // Добавление предмета и его оценки в книжку
            rb.addSubject(subject, mark);
        }
    }
}

// Функция для вывода данных о студенте и его предметах
void displayData(RecordBook& rb)
{
    // Вывод информации о студенте и его книжке
    cout << "Student's last name: " << rb.getLastName() << endl;
    cout << "Book number: " << rb.getStudentId() << endl;
   
    // выводим информацию по дисциплинам с оценкой выше 3
    cout << "Subjects with mark higher than 3:" << endl;
    rb.displaySubjects(3);

    // Вывод средней оценки по всем предметам
    cout << "Average mark: " << rb.calculateAverageMark() << endl;
}

// Функция для выхода из программы
void exitProgram()
{
    cout << "Goodbye!" << endl;
    exit(0);
}

int main()
{
    RecordBook rb;
    int choice;

    // Бесконечный цикл для отображения меню и выполнения действий по выбору пользователя
    while (true)
    {
        cout << "MENU:" << endl;
        cout << "1 - Enter data" << endl;
        cout << "2 - Show data" << endl;
        cout << "3 - Exit the program" << endl;
            cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            // Ввод данных о предметах студента
            enterData(rb);
            break;
        case 2:
            // Вывод данных о студенте и его предметах
            displayData(rb);
            break;
        case 3:
            // Выход из программы
            exitProgram();
            break;
        default:
            cout << "Wrong choice. try again." << endl;
            break;
        }
    }
    return 0;
}
