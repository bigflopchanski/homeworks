#include <iostream>
using namespace std;  

class rectangle{
    private:
        double width;
        double height;
        double factor;

    public:
        rectangle(double w, double h,double factor){
            width = w;
            height = h;
            setfact(factor);
        }
        void setfact(double fact){
            if (fact>0){
                this-> factor=fact;
            }
            else{
                cout<<"unluck"<<endl;
                factor=0;
            }
        }
        double square(){
            return width*height;
        }
        double per(){
            return 2*(width+height);
        }
        double squaresq(){
            return width*width;
        }
        double persq(){
            return 4*width;
        }
        double factp(){
            return per()*factor;
        }
        double facts(){
            return square()*factor;
        }
        void print(){
            cout<<"rectangle "<<width<<"*"<<height<<" (square:"<<square()<<", perimetr:"<<per()<<" )"<<endl;
            cout<<"rectangle*multiplier "<<width<<"*"<<height<<"*"<<factor<<" (square:"<<facts()<<", perimetr:"<<factp()<<" )"<<endl;
            cout<<"square "<<width<<"*"<<width<<" (square:"<<squaresq()<<", perimetr:"<<persq()<<" )"<<endl;
        }
};

int main(){
    rectangle rect(2,3,2);
    rect.print();
    return 0;
}