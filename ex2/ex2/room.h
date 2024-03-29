#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
class Room
{
private:
    int height = 250; // *
    int width = 500; // *
    int window; // *
    string name = "bedroom"; // *
    string walls_color = "yellow"; // *
    int walls = 4; // *
    string roof; // *
    string floor; // *
public:
    void Noize();
    void Exist();
    void Destroy();
    void Repair();
    void Feel();
    void SetWindow(int window);
    int GetWindow() const;
    void SetWalls(int walls);
    int GetWalls() const;
    void SetName(string name);
    string GetName() const;
    void SetWallsColor(string walls_color);
    string GetWallsColor() const; 
    void SetHeight(int height);
    int GetHeight() const;
    void SetWidth(int width);
    int GetWidth() const;
    void SetRoof(string roof);
    string GetRoof() const;
    void SetFloor(string floor);
    string GetFloor() const;
};

