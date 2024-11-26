#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw(){
        cout << "Generic drawing..." << endl;
    }
};
class circle : public shape{
public:
    void draw()
    {
        cout << "Circle drawing..." << endl;
    }
};
class rectangle : public shape{
public:
    void draw(){
        cout << "Rectangle drawing..." << endl;
    }
};
class triangle : public shape{
public:
    void draw(){
        cout << "Triangle drawing..." << endl;
    }
};
void shapedrawing(shape *s){
    s->draw();
}
int main(){
    shape s;
    s.draw();
    circle c;
    c.draw();
    rectangle r;
    r.draw();
    triangle t;
    t.draw();

    shapedrawing(&c);
    shapedrawing(&r);
    shapedrawing(&t);
    return 0;
}