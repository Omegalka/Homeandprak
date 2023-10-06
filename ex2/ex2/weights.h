#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Weights
{
private:
    int size = 11;
    int width = 5; // *
    string color = "gray"; // *
    string weight_plat = "blue"; // *
    int button = 5; // *
    string function = "weighting"; // *
    int pcs; // *
    int screen = 1;// *

public:
    void Inclusion(string button_on);
    void Unit(string button_unit);
    void Weighting();
    void Light(string light_button);
    void SetPcs(int pcs);
    int GetPcs() const;
    void SetScreen(int screen);
    int GetScreen() const;
    void SetFunction(string function);
    string GetFunction() const;
    void SetButton(int button);
    int GetButton() const;
    void SetWeightPlat(string weight_plat);
    string GetWeightPlat() const;
    void SetColor(string color);
    string GetColor() const;
    void SetWidth(int width);
    int GetWidth() const;
    void SetSize(int size);
    int GetSize() const;
};

