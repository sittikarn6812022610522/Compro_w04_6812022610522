#include <stdio.h>

int main() {
    //ประกาศตัวแปรต่างๆ
    char nameInitial = 'S';
    int age = 19;
    float weight = 50;
    char gender[] = "Male";
    //แสดงผลค่าตัวแปรต่างๆ
    printf("Name Initial : %c\n",nameInitial);
    printf("Age: %d\n", age);
    printf("Weight: %.1f\n",weight);
    printf("Gender : %s\n" , gender);
    return 0;
}