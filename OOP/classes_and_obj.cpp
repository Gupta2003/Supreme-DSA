#include<iostream>
#include<string>
using namespace std;
class Student {
public:
    // these are the attributes of Student ;
    string name;
    int age;
    int rollno;
    char section;
    string branch;
    float *gpa;

    // constructor -> ctor (Default constructor);
    Student(){
        cout << "Constructor is called for Student "<< endl;
    }

    // ctor : parameterised ctor
    Student(string name,int age,int rollno,char section ,string branch,float gpa){
        cout<< "parameterised Constructor called "<<endl;
        this->age = age;
        this->branch = branch;
        this->name = name;
        this->section = section;
        this->rollno = rollno;
        this->gpa = new float(gpa);
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
    void study(){
        cout << this -> name<< " is studying " << endl;
    }
    void bunk(){
        cout << this->name << " is Bunking " << endl;
    }
    void play(){
        cout << this->name << " is playing " << endl;
    }

    // destructor -> ctor (Default constructor);
    ~Student()
    {
        cout << "destructor is called for Student" << endl;
        delete this->gpa;
    }
};
int main(){
    /*Student a;
    a.age = 21;
    a.branch = "CS-AI";
    a.name = "Ashish";
    a.section = 'A';
    a.rollno = 40;

    a.study();
    a.bunk();

    Student b;
    b.age = 21;
    b.branch = "CS-AI";
    b.name = "Akshat";
    b.section = 'A';
    b.rollno = 40;

    // calling copy constructor 
    // M-> 1
    // Student c = a;
    // M-> 2
    Student c(a);
    cout<<c.age<<endl;*/

    // Dynamic allocation or Student pointer
    Student *d = new Student("Aishika", 18, 41, 'A', "B.com",9.8);
    // accessing properties

    // here all other objects like a,b,c are simpliy objects but the d is pointer type object so we have to use the arrow to access it 
    cout<<d->name<<endl;
    cout<<d->age<<endl;


    // this is the dynamic allocation so we manually have to delete the object while in the other objects it is automatically deleted because they are created in the stack part of the memory and the dynamic allocation is held in the heap part of the memory 
    delete d;


    // Exclusive case
    // If we create a dynamic attribute like gpa so it will formed in heap so we have to manually delete that memory (because it is cpp not the java) so that is the one the use of the destructor becuause on calling the destructor we delete the memory taken by the object in the heap but the memory taken by the gpa attribute doesnt free so we have to do it manually inside the destructor function
    return 0;
}