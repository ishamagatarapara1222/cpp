#include<iostream>
#include<string>

using namespace std;

//=====================student class==========================

class Student{
	
	private:
		string* name; //dynamically allocated to demonstrate  copy
		int rollNumber;
		float gpa;
		
	public:
		
	//default constructor
	Student(){
		name = new string("Unknown");
		rollNumber = 0;
		gpa =0.0;
	}
	
	//parameterized constructor	
	Student (string n, int r, float g){
		name = new string(n);
		rollNumber = r;
		gpa = g;
	}
	
	//copy constructor
	Student(const Student& other){
		name = new string(*(other.name));//deep copy
		rollNumber = other.rollNumber;
		gpa=other.gpa;
		}
		
	//destructor
	~Student(){
		delete name;
	}
	
	//getters
	string getName() const{
		return *name;
	}
	
	int getRollNumber() const{
		return rollNumber;
	}
	
	float getGPA() const{
		return gpa;
	}
	
	//display function
	 void display() const {
        cout << "Name: " << *name
             << ", Roll Number: " << rollNumber
             << ", GPA: " << gpa << endl;
    }
};

// -------------------- StudentRecordManager Class --------------------
class StudentRecordManager{
	private:
		Student* students;//dynamic array
		int capacity;
		int count;
		
	public:
		//constructor
		StudentRecordManager(int cap =10){
			int capacity=cap;
			count = 0;
			students = new Student[capacity];
		}
		
		//destructor
		~StudentRecordManager(){
			delete[] students;
		}
		
		//add student(using reference to avoid unnecessary copying)
		void addStudent( const Student& s){
			if (count < capacity){
				 students[count] = s;  // copy assignment
            count++;
			}else {
            cout << "Record is full. Cannot add more students.\n";
            }
		}
		
		// Display All Students
    void displayAll() const {
        if (count == 0) {
            cout << "No student records available.\n";
            return;
        }

        for (int i = 0; i < count; i++) {
            students[i].display();
        }
    }

    // Search Student by Roll Number
    void searchByRoll(int roll) const {
        for (int i = 0; i < count; i++) {
            if (students[i].getRollNumber() == roll) {
                cout << "Student Found:\n";
                students[i].display();
                return;
            }
        }
        cout << "Student with Roll Number " << roll << " not found.\n";
    }
};

int main(){
	// Create StudentRecordManager
    StudentRecordManager manager(5);

    // Create Student objects
    Student s1("Isha", 101, 3.5);
    Student s2("Sara", 102, 3.8);
    Student s3("Mann", 103, 3.2);

    // Add students
    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);

    // Display all students
    cout << "\nAll Student Records:\n";
    manager.displayAll();

    // Search for a student
    cout << "\nSearching for Roll Number 102:\n";
    manager.searchByRoll(102);

	
	
return 0;	
}