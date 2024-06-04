#include <iostream>
using namespace std;

// Date class to store the date of publication
class Date {
private:
    int month;
    int day;
    int year;
public:
    Date() : month(0), day(0), year(0) {}
    void getData() {
        cout << "Enter date (MM DD YYYY): ";
        cin >> month >> day >> year;
    }
    void putData() const {
        cout << month << "/" << day << "/" << year;
    }
};

// Base class
class Publication {
protected:
    string title;
    float price;
    Date pubDate;
public:
    void getData() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: $";
        cin >> price;
        pubDate.getData();
    }
    void putData() const {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
        cout << "Date of Publication: ";
        pubDate.putData();
        cout << endl;
    }
};

// Derived class for books
class Book : public Publication {
private:
    int pageCount;
public:
    void getData() {
        Publication::getData();
        cout << "Enter page count: ";
        cin >> pageCount;
    }
    void putData() const {
        Publication::putData();
        cout << "Page Count: " << pageCount << endl;
    }
};

// Derived class for tapes
class Tape : public Publication {
private:
    float playingTime;
public:
    void getData() {
        Publication::getData();
        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
    }
    void putData() const {
        Publication::putData();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    Book book;
    Tape tape;

    cout << "Enter data for the book:" << endl;
    book.getData();
    cout << endl;

    cout << "Enter data for the tape:" << endl;
    tape.getData();
    cout << endl;

    cout << "Book details:" << endl;
    book.putData();
    cout << endl;

    cout << "Tape details:" << endl;
    tape.putData();
    cout << endl;

    return 0;
}
