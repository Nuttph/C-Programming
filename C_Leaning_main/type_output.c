#include <stdio.h>

int main(){
    /*

    %d จำนวนเต็ม
    %f ทศนิยม
    %c ตัวอักษร
    %c ทุกข้อความที่อยู่ใน "  "
    %s String เน้นข้อความ
    
    \n break
    \t tab วรรค
    */
    printf("Hello world\n");
    printf("Name = %s \n","Nut"); // %s เป็นตัวแทนข้อความ Nut
    printf("FristName = %s , \nLastName = %s \n","Nuttaphon","Popardit");
    
    printf("age  = %d \n",30-1);
    printf("grade = %f \n",3.75);

    printf("Gender = %c \n",'MANS');
    printf("address = %s , Tel = %s","Bangkok, Thailand","0827852010");
    return 0;
}