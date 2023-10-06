#include <iostream>
#include <windows.h>
using namespace std;
class Door
{
private:
    int size = 190; // *
    int width = 100; // *
    string color = "brown"; // *
    string kh_color = "gold"; // *
    string handle_color = "black"; // *
    int handle; // *
    string type = "bedroom"; // *
    int walls = 2; // *
public:
    void Open();
    void Close();
    void Closing(string key);
    void Opening(string key);
    void SetHandle(int handle);
    int GetHandle() const;
    void SetWidth(int width);
    int GetWidth() const;
    void SetSize(int size);
    int GetSize() const;
    void SetColor(string color);
    string GetColor() const;
    void SetKhColor(string kh_color);
    string GetKhColor() const;
    void SetHandleColor(string handle_color);
    string GetHandleColor() const;
    void SetWalls(int walls);
    int GetWalls() const;
    void SetType(string type);
    string GetType() const;
};

