#include <string.h>
#include <stdio.h>
// data structre
typedef struct Car_st {
    char brand[100];
    char model[100];
    int year;
    // method
    void (*info)(struct Car_st *car);
} Car_st;

void print_info(Car_st *car)
{
    printf("----Car Info----\r\n");
    printf("%s, %s, %d \r\n",car->brand,car->model,car->year);
}
int main()
{
    char name[100];
    strcpy(name , "Ali Harman"); // 3: $name = "Ali Harman";
    strcat(name , "Ali Harman"); // 4: $name += "Ali Harman";
    Car_st car1, car2;
    car1.info = print_info;
    car2.info = print_info;
    strcpy(car1.brand,"BMW"); // 5: $car1.brand="BMW";
    strcpy(car1.model,"X5"); // 6: $car1.model="X5";
    car1.year = 1999; // 7: $car1.year = 1999;
    strcpy(car2.brand , "Ford"); // 8: $car2.brand = "Ford";
    strcpy(car2.model , "Mustang"); // 9: $car2.model = "Mustang";
    car2.year = 1969; // 10: $car2.year = 1969;

    car1.info(&car1);
    car2.info(&car2);
    // variable string add
    Car_st car3;
    printf("%s, %s, %d \r\n",car1.brand,car1.model,car1.year);
    printf("%s, %s, %d \r\n",car2.brand,car2.model,car2.year);
    printf("%s\r\n",name);
    printf("Hello Extended-C");
    for(int i = 0;i < 3;i++) { // 0: for i in range(3){
        printf("loop type 1\r\n");
    }
    for(int x = 0;x < 2;x++) { // 1: for x in range(2) {
        printf("loop type 2\r\n");
    }
    for(int p = 0;p < 5;p++) { // 2: for p in range(5)    {
        printf("loop type 3\r\n");
    }
    return 0;
}