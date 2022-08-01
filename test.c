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
    $name = "Ali Harman";
    $name += "Ali Harman";
    Car_st car1, car2;
    car1.info = print_info;
    car2.info = print_info;
    $car1.brand="BMW";
    $car1.model="X5";
    $car1.year = 1999;
    $car2.brand = "Ford";
    $car2.model = "Mustang";
    $car2.year = 1969;

    car1.info(self);
    car2.info(self);
    // variable string add
    Car_st car3;
    printf("%s, %s, %d \r\n",car1.brand,car1.model,car1.year);
    printf("%s, %s, %d \r\n",car2.brand,car2.model,car2.year);
    printf("%s\r\n",name);
    printf("Hello Extended-C");
    for i in range(3){
        printf("loop type 1\r\n");
    }
    for x in range(2) {
        printf("loop type 2\r\n");
    }
    for p in range(5)
    {
        printf("loop type 3\r\n");
    }
    return 0;
}