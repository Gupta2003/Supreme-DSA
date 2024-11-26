#include <iostream>
#include <string>
using namespace std;
class Student
{
    // these are the attributes of Student ;
public:
    string name;
    int age;
    int rollno;
    char section;
    string branch;

private:
    float *gpa;
    string gf;

public: 
void setGpa(float a){
    *this->gpa = a;
}

float getGpa() const
{
    return *this->gpa;
}

// float getAge() const
// {
//     return this->age;
// }

public:
    // ctor : ctor (Default constructor);
    Student()
    {
        cout << "Constructor is called for Student " << endl;
    }

    // ctor : parameterised ctor
    Student(string name, int age, int rollno, char section, string branch, float gpa,string gf)
    {
        cout << "parameterised Constructor called " << endl;
        this->age = age;
        this->branch = branch;
        this->name = name;
        this->section = section;
        this->rollno = rollno;
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    // ctor : copy ctor
    // ctor is the short form of constructor
    Student(const Student &srcobj)
    {
        cout << "Copy Constructor called " << endl;
        this->age = srcobj.age;
        this->branch = srcobj.branch;
        this->name = srcobj.name;
        this->section = srcobj.section;
        this->rollno = srcobj.rollno;
    }

    // these are the functions of the Student ;
    void study()
    {
        cout << this->name << " is studying " << endl;
    }
    void bunk()
    {
        cout << this->name << " is Bunking " << endl;
    }
    void play()
    {
        cout << this->name << " is playing " << endl;
    }

    // destructor -> ctor (Default constructor);
    ~Student()
    {
        cout << "destructor is called for Student" << endl;
        delete this->gpa;
    }
private:
void gfchatting(){
    cout << this->name << "chatting with gf " << endl;
}
};
int main(){
    Student a;
    a.age = 10;
    a.name = "Ashish";
    a.setGpa(9.8);
    cout<<a.getGpa()<<endl;
    return 0;
}