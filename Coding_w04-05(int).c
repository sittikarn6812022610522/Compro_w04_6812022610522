#include<stdio.h>

void conutCall() {
    int counter = 0;
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

// ผลการทดสอบ: ในฟังก์ชัน conutCall() ตัวแปร counter จะประกาศใหม่ทุกครั้ง ทำให้ค่า counter เริ่มต้นที่ 0 ตลอด
// การใช้ int นำหน้าตัวเเปร counter ในฟังก์ชัน conutCall() จะทำให้ตัวแปร counter ถูกรีเซ็ตใหม่ทุกครั้งที่เรียกใช้ฟังก์ชัน
// สรุป: การใช้ตัวแปรเเบบ Non-static ในฟังก์ชันจะทำให้ค่าของตัวแปรนั้นไม่ถูกเก็บไว้ระหว่างการเรียกใช้ฟังก์ชัน ทำให้นับจำนวนครั้งที่เรียกใช้ฟังก์ชันไม่ได้