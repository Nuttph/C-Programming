#include <stdio.h>
// char เก็บข้อมูลใน '   '
int main() {
  
    char name[3] = "Nuttaphon";
    int age = 19;
    char gender = 'M'; 

    printf("Name = %s \nAge = %d\n",name,age);
    printf("Gender = %c\n",gender);

    age = 26;
    printf("New age =  %d \n",age);

    float grade = 3.85;
    printf("grade = %f \n",grade);
    printf("grade = %.3f \n",grade);
    printf("grade = %.2f \n",grade);

    int status = true;
    printf("status = %d \n",status);
    return 0;// เพราะเราประกาศ int main ที่เป็นเลขจำนวนเต็ม และให้ return ค่า0 ไป
}