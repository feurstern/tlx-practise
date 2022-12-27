#include<cstdio>

int main(){
    int firstEntranceHours, exitEntranceHours, durationParkingHour,price;

    printf("Enter the first entrance hour:\n");scanf("%d", &firstEntranceHours);
    printf("Enter the exit entrance hours\n");scanf("%d", &exitEntranceHours);

    if(exitEntranceHours>firstEntranceHours){
        durationParkingHour = exitEntranceHours - firstEntranceHours;
    }
    else {
        durationParkingHour = firstEntranceHours - exitEntranceHours;
    }
    

    if(durationParkingHour<=1){
        price = 350000;
        printf("The price of the duration parking  of %d hours is %d", durationParkingHour, price);
    }
    else if(durationParkingHour<=2){
        price = 500000;
        printf("The price of the parking of %d hours is %d", durationParkingHour,price);
    
    }
    else if(durationParkingHour>3 && durationParkingHour<=8){
        price= (durationParkingHour-2)*150000 + 500000;

        printf("The price of the duration parking %d hours is %d", durationParkingHour, price);
    }
    else if(durationParkingHour>8){
        price= (durationParkingHour-2)*200000 + 500000;

        printf("The price of the duration parking %d hours is %d", durationParkingHour, price);
    }
    
}