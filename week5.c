#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 100;
    //printf("x = %d\n",x);
    //printf("reference of x = %lu\n", &x); // เป็นการดึง adress ของตัวแปรตัวนั้นออกมาโชว์
    //printf("reference of x = %p\n", &x); // เราไม่สามารถเขียนเลขฐานสองได้ ได้แค่ 8 10 16


    //reference array
    //int number[] = {7, 8, 9, 10, 11};
    // หรือ
    //int number[10] = {7, 8, 9, 10, 11}; // ต้องกำหนดค่าของ array ให้ก่อนเสมอไม่งั้นจะไม่ complie
    //printf("index 3 = %d\n", number[3]);
    //printf("referene index 3 = %p\n",&number[3]);
    //printf("reference index 0 = %p\n",&number[0]);
    //printf("reference index 0 = %p\n",number); // ตัวแปร pointer พิเศษ
    // ถ้าเรารู้ตำแหน่ง index ที่ 0 เราจะสามารถรู้ค่า index อื่นได้ 

    //วิธีประกาศแปร pointer

    //int ตามด้วยดอกจันทร์ ตามด้วยชื่อ ถ้า x เป็น int pointer ก้ต้องไปชี้ที่ตัวแปร int

    //int *ptr = &x;
    //int *arrPtr;
    //arrPtr = number; // เมื่อ aggsing ค่าไปต้องใส่ * aggsing ค่าอีกครั้งจะไม่มี *
    //arrPtr = arrPtr + 1;
    //*arrPtr = *arrPtr + 1;
    //* คือเคื่องหมาย  dereferencing ทำหน้าที่ดึกค่าใน adress ออกมาโชว์ วิ่งไปหาตัวแปรนั้น
    //printf("arrPtr = %p, *arrPtr = %d\n",arrPtr,*arrPtr);
    //printf("number[1] = %p, number[1] = %d\n",&number[1],number[1]);

    //&x = 50; ทำไม่ได้
    //ptr = x; // ชี้ adress ที่ 100
    //*ptr = 50; //เปลี่ยนจาก 100 เป็น 50 เกมคอมพัง

    //int number[] = {7, 8, 9, 10, 11}; // ถ้าเป็น char array จะวน loop ไปเรือยๆจนกว่าจะเจอ /0
    //char input[50];
    //for (int *ptr = number; ptr <= &number[4]; ptr++)
    //{
      //  printf("[%p] = %d\n", ptr, *ptr);
    //}
    //char input[50];
    //int count = 0;
    //char c;
    //while ((c = getchar()) != '\n')
    //{
        //input[count] = c;
      //  ++count;
    //}
    //input[count] = '\0';
    //printf("input = %s\n", input);
    //for (char * cPtr = &input[0]; *cPtr != '\0'; cPtr++)
    //{
     //   printf("%c\n",*cPtr);
   // }

    //scanf เป้นการรับ formart
    int a;
    char c;
    char s[50];
    scanf("%c-%d-%s", &c, &a, &s[0]); //ต้องใส่ &(amstand) เสมอ ยกเว้นตัวแปรที่เป็น array
    printf("%c   %d   %s", a, c, s);

}