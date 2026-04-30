#include <iostream>
using namespace std;
class Complex
{
    private:
    double Re;
    double Img;
    
    public:
    Complex(double Re=0.0, double Img=0.0)
    {
        this->Re=Re;
        this->Img=Img;
    }
    Complex operator + (const Complex &other)
    {
        Complex result;
        result.Re=this->Re+other.Re;
        result.Img=this->Img+other.Img;
        return result;
    }
    Complex operator - (const Complex &other)
    {
        Complex result;
        result.Re=this->Re-other.Re;
        result.Img=this->Img-other.Img;
        return result;
    }
    Complex operator * (const Complex &other)
    {
        Complex result;
        result.Re=this->Re*other.Re-(this->Img*other.Img);
        result.Img=(this->Re*other.Img)+(this->Img*other.Re);
        return result; 
    }
    double Norm()
    {
        return pow(Re,2)+pow(Img,2);
    }
    void display()
    {
        cout<<Re<<" + i"<<Img;
    }
};
int main()
{
    Complex c1(3,4);
    Complex c2(6,7);
    Complex c3=c1+c2;

    cout<<"c1:"<<endl;
    c1.display();
    cout<<"c2:"<<endl;
    c2.display();
    cout<<"c3:"<<endl;
    c3.display();
    return 0;
}