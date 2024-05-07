#include<simplecpp>
void makeOuterCircle();
main_program{
    turtleSim();
    repeat(180){
        forward(1);
        left(2);
    }
    wait(1);
    repeat(180){
        forward(1);
        right(420.0/180);
    }
    wait(1);
    left(180);
    repeat(6){
        makeOuterCircle();
        left(180);
    }

}

void makeOuterCircle(){
    repeat(180){
        forward(1);
        right(490.0/180);
    }
    wait(1);
}
