#include<stdio.h>

void conutCall() {
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    conutCall();
    printf("After first call:\n");
    conutCall();
    
    return 0;
}

// ผลการทดสอบ : ในฟังก์ชัน conutCall() ตัวแปร counter จะเก็บค่าไว้ใช้ฟังก์ชัน ทำให้ค่า counter เพิ่มขึ้นเมื่อเรียกใช้ฟังก์ชัน
// การใช้ static int หน้าตัวเเปร counter ในฟังก์ชัน conutCall() ทำให้ตัวแปร counter เก็บค่าไว้ในตัวเเปรทุกครั้งเมื่อใช้ฟังก์ชัน
// สรุป: การใช้ตัวแปรเเบบ static ในฟังก์ชันจะทำให้ค่าของตัวแปรถูกเก็บไว้ระหว่างการเรียกใช้ฟังก์ชัน ทำให้นับจำนวนครั้งที่เรียกใช้ฟังก์ชันได้