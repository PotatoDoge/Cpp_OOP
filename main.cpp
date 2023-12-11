#include <iostream>

using namespace std;


class AbstractEmployee{
    virtual void askForPromotion() = 0;
};

class Employee: AbstractEmployee {
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

    string getCompany() {
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

    void askForPromotion() override{
        if(this->age > 30){
            cout << this->name << " got promoted!" << endl;
        }
        else{
            cout << this->name << " did not get promoted" << endl;
        }
    }

     virtual void work(){
        cout << "Working" << endl;
    }

};

class Developer: public Employee{
private:
    string favLanguage;
public:
    Developer(string name, string lastName, int age, string company, string favLanguage): Employee(name, lastName, age, company){
        this->favLanguage = favLanguage;
    }

    void fixBug(){
        cout << "Bug fixed by " << this->getName() + " " + this->getLastName() << endl;
    }

    void work(){
        cout << "Working in a new software" << endl;
    }

};

class Teacher: public Employee{
private:
    string subject;
public:
    Teacher(string name, string lastName, int age, string company, string subject): Employee(name, lastName, age, company){
        this->subject = subject;
    }

    void prepareLesson(){
        cout << getName() + " " + getLastName() << " is preparing " << this->subject << " lesson." << endl;
    }

    void work(){
        cout << "Teaching" << endl;
    }
};


int main() {
    Employee jane = Employee("Jane", "Doe", 32, "Meta");
    jane.setName("Jenny");
    jane.introduceYourself();
    jane.askForPromotion();

    Employee john = Employee("John", "Doe", 25, "Google");
    john.introduceYourself();
    john.askForPromotion();

    Developer developer = Developer("Paul", "Stones", 65, "X", "Java");
    developer.fixBug();
    developer.askForPromotion();
    developer.work();

    Teacher teacher = Teacher("Rose","McDonald",45,"UNAM","History");
    teacher.prepareLesson();
    teacher.work();

    Employee *d = &developer;
    Employee *t = &teacher;
    d->work();
    t->work();


}
