#include<iostream>
#include<string>
using namespace std;
class employee{
    protected:
        string name;
        int empid;

    public:
    employee(string name,int empid){
        cout << "This is a employee constructor" << endl;
        this->name = name;
        this->empid = empid;
    }
    void display(){
        cout << "This is employee " << this->name << "with employee id" <<this->empid<< endl;
    }
    ~employee(){
        cout << "This ia an employee destructor" << endl;
    }

};
class hrmanager: public employee {
    public:
    void handlehrduties(){
        cout << "He handles hr duties " << endl;
    }
    hrmanager(string name,int empid): employee( name, empid){
        cout << "This is a hrmanager constructor " << endl;
    }
    ~hrmanager(){
        cout << "This is an hr manager destructor" << endl;
    }
};
class hrdirector: public hrmanager {
    public:
    void manageHrDepartment(){
        cout << "Manages hr department " << endl;
    }
    hrdirector(string name,int empid): hrmanager(name, empid) {
        cout << "This is a hr director constructor " << endl;
    }
    ~hrdirector(){
        cout << "This is an hr director destructor" << endl;
    }
};
int main(){
    hrdirector hrd1("Ashish", 101);
    hrd1.manageHrDepartment();
    hrd1.handlehrduties();
    return 0;
}