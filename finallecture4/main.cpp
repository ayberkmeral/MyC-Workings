#include <iostream>
#include <iomanip>
using namespace std;

class salary {
public:
    salary();
    void set_salary();
    void print();
private:
    bool check(int);
    int months[12];
    int total;
};

salary::salary() {
    for (int i = 0; i < 12; i++)
        months[i] = 0;
    total = 0;
}

bool salary::check(int value) {
    return value >= 0;
}

void salary::set_salary() {
    int amount;

    for (int i = 0; i < 12; i++) {
        cout << "Enter " << i + 1 << ". salary: ";
        do {
            cin >> amount;
            if (!check(amount))
                cout << "Invalid salary. Please enter again: ";
        } while (!check(amount));

        months[i] = amount;
        total += months[i];
    }
}

void salary::print() {
    cout << "Monthly salaries:\n";

    for (int i = 0; i < 12; i++)
        cout << setw(2) << i + 1 << ". month: " << months[i] << endl;

    cout << "Annual salary = " << total << endl;
}

int main() {
    salary s;
    s.set_salary();
    s.print();
    return 0;
}
