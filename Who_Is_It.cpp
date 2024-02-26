#include <iostream>
using namespace std;

class Student {
public:
    int id;
    char name[100];
    char section;
    int totalMarks;
};

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        Student *sakib = new Student;
        cin >> sakib->id >> sakib->totalMarks >> sakib->name >> sakib->section;

        Student *rakib = new Student;
        cin >> rakib->id >> rakib->totalMarks >> rakib->name >> rakib->section;

        Student *akib = new Student;
        cin >> akib->id >> akib->totalMarks >> akib->name >> akib->section;

        if (sakib->totalMarks > rakib->totalMarks && sakib->totalMarks > akib->totalMarks) {
            cout << sakib->id << sakib->name << sakib->section << sakib->totalMarks << endl;
        } else if (sakib->totalMarks < rakib->totalMarks && rakib->totalMarks > akib->totalMarks) {
            cout << rakib->id << rakib->name << rakib->section << rakib->totalMarks << endl;
        } else {
            cout << akib->id << akib->name << akib->section << akib->totalMarks << endl;
        }

    }

    return 0;
}
