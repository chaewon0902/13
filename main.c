#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	struct student{
		int ID; //학번 
		char name[100]; //이름
		float grade; //학점 
		
	};
	
	int main(void){
		//instance 선언
		struct student s1 = {2315838, "CHAEWON", 4.3}; 
		
		s1.ID = 123456;
		s1.name[0] = 'c';
		s1.grade = 0.7;
		
		printf("ID : %i\n", s1.ID);
		printf("name : %s\n", s1.name);
		printf("grade : %f\n", s1.grade);
		
		strcpy (s1.name, "minseo");
		printf("name2 : %s\n", s1.name);
		
	
	return 0;
}
