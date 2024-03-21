#include<iostream>
using namespace std;

class Room 
{
    private:
    double length;
    double width;
    double height;
    public:
    
    double calculateArea(double l, double w){
        length=l;
        width=w;
    return length*width;
    }
    double calculatevolume(double l, double w, double h){
        length=l;
        width=w;
        height=h;
    return length*width*height;
    }
};
int main()
{
    Room r1;
    double ln, wd, ht;
    double area;
    double volume;
    cout << "Give length, width and height of a room:" ;
    cin >> ln >> wd >> ht;
    area = r1.calculateArea(ln, wd);
    cout << "Area of room is : " << area << endl;
    volume = r1.calculatevolume(ln, wd, ht);
    cout << "Volume of room is : " << volume << endl;


}    