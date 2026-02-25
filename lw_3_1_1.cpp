#include <iostream>
using namespace std;

class Student {
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    // Setter Functions
    void setStuId(int id) {
        stu_id = id;
    }

    void setStuName(string name) {
        stu_name = name;
    }

    void setStuAge(int age) {
        stu_age = age;
    }

    void setStuCourse(string course) {
        stu_course = course;
    }

    void setStuCity(string city) {
        stu_city = city;
    }

    void setStuEmail(string email) {
        stu_email = email;
    }

    void setStuCollege(string college) {
        stu_college = college;
    }

    // Getter Functions
    int getStuId() {
        return stu_id;
    }

    string getStuName() {
        return stu_name;
    }

    int getStuAge() {
        return stu_age;
    }

    string getStuCourse() {
        return stu_course;
    }

    string getStuCity() {
        return stu_city;
    }

    string getStuEmail() {
        return stu_email;
    }

    string getStuCollege() {
        return stu_college;
    }
};

int main() {
    Student s[5];

    int id, age;
    string name, course, city, email, college;

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Student " << i + 1 << endl;

        cout << "ID: ";
        cin >> id;
        s[i].setStuId(id);
        cin.ignore();

        cout << "Name: ";
        getline(cin, name);
        s[i].setStuName(name);

        cout << "Age: ";
        cin >> age;
        s[i].setStuAge(age);
        cin.ignore();

        cout << "Course: ";
        getline(cin, course);
        s[i].setStuCourse(course);

        cout << "City: ";
        getline(cin, city);
        s[i].setStuCity(city);

        cout << "Email: ";
        getline(cin, email);
        s[i].setStuEmail(email);

        cout << "College: ";
        getline(cin, college);
        s[i].setStuCollege(college);
    }

    cout << "\n\n----- Student Records -----\n";

    for (int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << " Details:\n";
        cout << "ID: " << s[i].getStuId() << endl;
        cout << "Name: " << s[i].getStuName() << endl;
        cout << "Age: " << s[i].getStuAge() << endl;
        cout << "Course: " << s[i].getStuCourse() << endl;
        cout << "City: " << s[i].getStuCity() << endl;
        cout << "Email: " << s[i].getStuEmail() << endl;
        cout << "College: " << s[i].getStuCollege() << endl;
    }

    return 0;
}