#include <Stdio.h>
#include <Stdbool.h>

bool ageCheck(int age){

    if(age >= 18){
        return true;
    }
    else{
        return false;
    }
}
 
int getMax(int x, int y){
    if(x >= y){
        return x;
    }
    else{
        return y;
    }
}

int main(){

    int age = 12;

    if(ageCheck(age)){
        printf("You may sign up.\n");
    }
    else{
        printf("You must be 18+ to sign up.\n");
    }

    int max = getMax(4, 3);

    printf("%d", max);
}