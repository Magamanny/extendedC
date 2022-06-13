#include <string.h>
#include <stdio.h>

struct Car {
    char brand[100];   
    char model[100];
    int year;
};
int main()
{
    char name[100];
    strcpy(name , "Ali Harman"); // 3: $name = "Ali Harman";
    strcat(name , "Ali Harman"); // 4: $name += "Ali Harman";
    struct Car car1, car2;
    strcpy(car1.brand,   "BMW"); // 5: $car1.brand=   "BMW";
    strcpy(car1.model,"X5"); // 6: $car1.model="X5";
    car1.year = 1999; // 7: $car1.year = 1999;
    strcpy(car2.brand , "Ford"); // 8: $car2.brand = "Ford";
    strcpy(car2.model , "Mustang"); // 9: $car2.model = "Mustang";
    car2.year = 1969; // 10: $car2.year = 1969;
    printf("%s, %s, %d \r\n",car1.brand,car1.model,car1.year);
    printf("%s, %s, %d \r\n",car2.brand,car2.model,car2.year);
    printf("%s\r\n",name);
    printf("Hello Extended-C");
    for(int i = 0;i < 10;i++) { // 0: for i in range(10){
        printf("loop\r\n");
    }
    for(int i = 0;i < 10;i++) { // 1: for i in range(10) {
        printf("loop2\r\n");
    }
    for(int i = 0;i < 10;i++) { // 2: for i in range(10)    {
        printf("loop2\r\n");
    }
    return 0;
}