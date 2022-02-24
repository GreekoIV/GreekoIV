#include <iostream>
#include <math.h>

using namespace std;

class Calculator{
    double num1, num2;

public:
        void get(){
            cout<<"Enter First Number:\n";
            cin>>num1;
            cout<<"Enter Second Number:\n";
            cin>>num2;
        }

        double add(){return num1+num2;}

        double mul(){return num1*num2;}

        double sub(){
            if(num2>num1){
                return num2-num1;
            }else{return num1-num2;}
        }

        double div(){
            if(num2>num1){
                cout<<"Division by Zero:"<<endl;
                return INFINITY;
            }else{return num1/num2;}
        }
};

int main()
{
    int choice;
    Calculator cal; //calculator object
    cout << "Enter 1 Add 2 Numbers"
        << "\n Enter 2 Subtract 2 Numbers"
        << "\n Enter 3 Multiply 2 Numbers"
        << "\n Enter 4 Divide 2 Numbers"
        << "\n Enter 0 to Exit.."
        << "\n";

        do{
            cout <<"\n Enter Choice : ";
            cin >> choice ;

            switch(choice){
            case 1:
                cal.get();
                cout << "Result:" << cal.add() << endl;
                break;

            case 2:
                cal.get();
                cout << "Result:" << cal.sub() << endl;
                break;

            case 3:
                cal.get();
                cout << "Result:" << cal.mul() << endl;
                break;

            case 4:
                cal.get();
                cout << "Result:" << cal.div() <<endl;
                break;

            case 0:
                break;
            }
        }while( choice >=1 && choice <= 4 );

    return 0;
}
