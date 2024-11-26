#include<iostream>
using namespace std;

// This is the vehicle superclass
class vehicle {
    // attributes 
    public:
        string name;
        int noOfTyres;
        string color;
        string model;
        int seats;
    protected:
        int price;
        string ownerName;

    //these are the class functions 
    public:
    void start_engine(){
        cout << "Let's go the engine is started " << endl;
    } 
    void stop_engine(){
        cout << "Oops engine is stopped "<< endl;
    }

    // this is the parameterised ctor ;
    vehicle(string name,int noOfTyres,string color,string model,int seats){
        cout << "Parameterised ctor of superclass is called here " << endl;
        this->name = name;
        this->noOfTyres = noOfTyres;
        this->color = color;
        this->model = model;
        this->seats = seats;
    }

    // Destructor 
    ~vehicle(){
        cout << "Destructor is called for vehicle superclass " << endl;
    }
};


                                 // inheritance
// first child class 
class car : public vehicle
{
    protected:
    int noOfDoors;
    string transmissionType;

    public:
    car(string _name, int _noOfTyres, string _color, string _model, int _seats, int _noOfDoors, string _transmissionType) : vehicle(_name, _noOfTyres, _color, _model, _seats)
    {
        cout << "it is the child class \"car\" constructor " << endl;
        this->noOfDoors = noOfDoors;
        this->transmissionType = transmissionType;
    }
    void StartAc(){ 
        cout << "AC is ON for " << this-> name<<endl;
    }

    // here we access the protected memebers of the superclass because they are derived in the subclass(property of protected members)but they are directly inaccesible in the main section so that it enhance the security layer
    // if we made the members private then we can access them in the superclass only by using getter and setter they are not derived in the child class
    public:
    void setprice(int price){
        this->price = price;
    }
    void getPrice() const{
        cout<< this->price<<endl;
    }


    // child class dtor;
    ~car()
    {
        cout << "This is the dtor for the car class " << endl;
    }
};

// second child class 
class motorcycle : public vehicle
{
    protected:
    string handleBarStyle;
    string suspensionType;

    // child class ctor
    motorcycle(string _name, int _noOfTyres, string _color, string _model, int _seats, int _handleBarStyle, string _suspensionType) : vehicle(_name, noOfTyres, color, model, seats)
    {
        cout << "it is the child class motorcycle constructor " << endl;
        this->handleBarStyle = handleBarStyle;
        this->suspensionType = suspensionType;
    }
    void helmet(){
        cout << "Please wear helmet in your"<< this -> name<<endl;
    }

    // child class dtor;
    ~motorcycle(){
        cout << "This is the dtor for the motorcycle class " << endl;
    }
};

int main()
{
    // vehicle v("Thar", 4, "Black", "Roxx", 5);
    car maruti("xl6", 4, "Grey", "base model", 6, 4, "mannual");
    maruti.start_engine();
    maruti.StartAc();
    maruti.stop_engine();
    maruti.setprice(600000);
    maruti.getPrice();
    // cout << maruti.noOfTyres << endl;
    return 0;
}