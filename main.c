#include <stdio.h>
#include <stdlib.h>

//viết app nho nhỏ, nhập vào năm sinh của bạn
//nhập thêm kí tự đầu tiên của bạn
//sau đó in ra: năm sinh, tuổi, kí tự tên!!!

int main(int argc, char *argv[]) {
	int yob, age;
	char fL;
	
	printf("You are required to input your profile\n");
	
	printf("1st, input your yob: ");
	scanf("%d", &yob);
	
	age = 2022 - yob;
	
	//trước lệnh nhập chuỗi/kí tự ta xóa bộ đệm
	fflush(stdin);  //flush: dọn, rửa
					//std in: standard in
					//vùng ram chuẩn dành cho việc nhập data
	
	printf("2nd, input 1st letter in your firstname: ");
	scanf("%c", &fL);
	
	printf("Your profile is:\n");
	printf("Your yob: %d\n", yob);
	printf("Your age: %d\n", age);
	printf("Your name: %c\n", fL);
	
	return 0;
}