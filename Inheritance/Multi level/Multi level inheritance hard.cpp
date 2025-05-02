/*Q3: Fix the bug in the given multilevel inheritance code.
The following program should display the area of a cuboid, but it has an error. Fix it. Corrected code is given below after program*/

#include <iostream>
using namespace std;

class Shape
{
protected:
    int length;

public:
    Shape(int l) { length = l; }
};

class Rectangle : public Shape
{
protected:
    int width;

public:
    Rectangle(int l, int w) { width = w; }
};

class Cuboid : public Rectangle
{
    int height;

public:
    Cuboid(int l, int w, int h) { height = h; }
    int volume() { return length * width * height; }
};

int main()
{
    Cuboid c(5, 4, 3);
    cout << "Volume of Cuboid: " << c.volume() << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// class Shape
// {
// protected:
//     int length;
// public:
//     Shape(int l)
//     {
//         length = l;
//     }
// };
// class Rectangle : public Shape
// {
// protected:
//     int width;
// public:
//     Rectangle(int l, int w) : Shape(l)
//     {
//         width = w ;
//     }
// };

// class Cuboid : public Rectangle
// {
//     public:
//     int height;
// public:
//     Cuboid(int l, int w, int h) : Rectangle(l, w)
//     {
//         height = h ;
//     }
//     int volume() { return length * width * height; }
// };
// int main()
// {
//     Cuboid c(5, 4, 3);
//     cout << "Volume of Cuboid: " << c.volume() << endl;
//     return 0;
// }
