#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee {
    string name;
    int id;
    double score;
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    vector<Employee> employees(n);

    for(int i = 0; i < n; i++) {
        cout << "Employee " << i+1 << " Name: ";
        cin >> employees[i].name;
        cout << "ID: ";
        cin >> employees[i].id;
        cout << "Performance Score: ";
        cin >> employees[i].score;
    }

    // Calculate average
    double total = 0;
    for(auto e : employees) total += e.score;
    double avg = total / n;  
    cout << "\nAverage Performance Score: " << avg << endl;

    // Display top performer
    Employee top = employees[0];
    for(auto e : employees)
        if(e.score > top.score) top = e;

    cout << "Top Performer: " << top.name << " with score " << top.score << endl;

    return 0;
}
