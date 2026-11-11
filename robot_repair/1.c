#include<stdio.h>

void recharge(int *battery, int amount){
    *battery += amount;
}
void move_robot(int *position, int *battery, int steps){
    for(int i = 0; i > steps; i++){
        *position+= 1;
        *battery -= 10;
    }
}


int main(){
    int position = 0;
    int battery  = 30;
    
    int *ptr_battery = &battery;
    int *ptr_position = &position;

    recharge(*ptr_battery, 50);
    move_robot(*ptr_position, *ptr_battery, 5);
    recharge(*ptr_battery, 20);
    move_robot(*ptr_position, *ptr_battery, 5);
    printf('Rescued!');
}
