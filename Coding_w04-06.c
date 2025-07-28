#include <stdio.h>


const int GLOBAL_RATE = 20;

void calculate() {
   
    const int LOCAL_BONUS = 80;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);  // ลบคอมเมนออกจะ error

    return 0;
}

// GLOBAL_RATE เป็นค่าคงที่ระดับ global ใช้ได้ทั้งใน main() และ calculate() 
// LOCAL_BONUS เป็นค่าคงที่ระดับ local ใช้ได้เเค่ในฟังก์ชัน calculate()
// เปลี่ยน GLOBAL_RATE เป็น 20 & LOCAL_BONUS เป็น 80 โปรแกรมจะ complie error เพราะตัวแปรถูกประกาศด้วย const ทำให้ไม่สามารถเปลี่ยนค่าในตัวเเปรได้
//LOCAL_BONUS ถูกประกาศภายในฟังก์ชัน calculate() ใช้ได้แค่ในฟังก์ชันนั้น ไม่สามารถใช้ในฟังก์ชัน main() ได้
//สรุป
//      1. การเปลี่ยนค่าคงที่จะทำให้เกิด compile error
//      2. ค่า local ไม่สามารถเข้าถึงนอกฟังก์ชันของตัวเองได้
