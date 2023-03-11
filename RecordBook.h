// Защита от множественного включения заголовочного файла 
#ifndef RECORDBOOK_H
#define RECORDBOOK_H

#include <string>
#include <map>

class RecordBook
{
private:
    std::string lastName;// Фамилия студента
    std::string studentId;// Номер зачетной книжки студента
    std::map<std::string, int> subjects; // Массив предметов и оценок


public:
    RecordBook();// Конструктор по умолчанию
    RecordBook(std::string lname, std::string sid);// Конструктор с параметрами
    void init();// Инициализация фамилии и номера зачетной книжки студента
    void display();// Вывод информации о студенте и его успеваемости
    void addSubject(std::string subject, int mark);; // Добавление предмета и оценки
    void displaySubjects(int minMark) const;// Вывод списка предметов и оценок выше заданного порога
    double calculateAverageMark() const;// Расчет среднего балла студента
    std::string getLastName() const;// Получение фамилии студента
    std::string getStudentId() const; // Получение номера зачетной книжки студента
};

#endif // RECORDBOOK_H
