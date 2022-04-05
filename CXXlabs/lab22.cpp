#include <iostream>
#include <string>

using namespace std;

class InnerCircle;
class OuterCircle;
class ConcentricCircle;

class ConcentricCircle
{
private:
    double diameter;
    string name;

public:
    double  getInnerRadius(InnerCircle &InnerCircle);
    double  getOuterRadius(OuterCircle &OuterCircle);
};
class InnerCircle
{
private:
    double diameter;
    string name;

public:
    friend double ConcentricCircle::getInnerRadius(InnerCircle &InnerCircle);
    friend void setInnerCircleInfo(InnerCircle &InnerCircle, double diameter, string name);
};
class OuterCircle
{
private:
    double diameter;
    string name;

public:
    friend double ConcentricCircle::getOuterRadius(OuterCircle &OuterCircle);
    friend void setOuterCircleInfo(OuterCircle &OuterCircle, double diameter, string name);
};
void setInnerCircleInfo(InnerCircle &InnerCircle, double diameter, string name)
{
    InnerCircle.diameter = diameter;
    InnerCircle.name = name;
}

void setOuterCircleInfo(OuterCircle &OuterCircle, double diameter, string name)
{
    OuterCircle.diameter = diameter;
    OuterCircle.name = name;
}
double ConcentricCircle :: getInnerRadius(InnerCircle &InnerCircle)
{
    return (InnerCircle.diameter / 2);
}
double ConcentricCircle::getOuterRadius(OuterCircle &OuterCircle)
{
    return (OuterCircle.diameter / 2);
}




int main() {
    InnerCircle c1;
    OuterCircle c2;
    ConcentricCircle c3;
    setInnerCircleInfo(c1, 100, "The inner circle");
    setOuterCircleInfo(c2, 150, "The outer circle");
    cout << "Inner circle's radius = " << c3.getInnerRadius(c1) << endl;
    cout << "Outer circle's radius = " << c3.getOuterRadius(c2) << endl;
    return 0;
}