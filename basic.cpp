//Prgram-1 ==== To access static variable {class_name::variable_name}
#include<iostream> 
//#include<conio.h>
using namespace std;
class Marks{
    public:
            static int studentNumber;
            int engMarks = 40;
            int mathsMarks = 60;
            int phyMarks = 70;
    Marks()
            {
                ++studentNumber;
            };
};

int Marks::studentNumber = 0;

int main(){
    Marks obj1;
    cout<<Marks::studentNumber<<endl;
    cout << obj1.engMarks << endl;
    cout << obj1.mathsMarks << endl;
    cout << obj1.phyMarks << endl;
}