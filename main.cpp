#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    string lastName;
    int age;
    string company;
public:

    Employee(string name, string lastName, int age, string company){
        this->name = name;
        this->lastName = lastName;
        this->age = age;
        this->company = company;
    }

    string getName() {
        return this->name;
    }

    void setName(string name) {
        this->name = name;
    }

    string getLastName() {
        return this->lastName;
    }

    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    int getAge() {
        return this->age;
    }

    void setAge(int age) {
        this->age = age;
    }

    const string getCompany() {
        return this->company;
    }

    void setCompany(string company) {
        this->company = company;
    }

    void introduceYourself(){
        const string fullName = name + " " +  lastName;
        cout << "Name: " << fullName << endl;
        cout << "Age: " << age << endl;
        cout << "Company: " << company << endl;
    }
};


int main() {
    Employee jane = Employee("Jane","Doe",32,"Meta");
    jane.setName("juan");
    jane.introduceYourself();

    Employee john = Employee("John","Doe",25,"Google");
    john.introduceYourself();
}
