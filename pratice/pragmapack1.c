#include <stdio.h>  
#pragma pack(3)  
struct bag  
{  
	int x;  
		float z1;
	char y;  
 	//long double z;  

};  

int main()  
{ 
	struct bag var;    //  variable declaration of type bag  
	//  size of the structure bag is displayed  
	printf("The size of the var when structure padding is avoided is : %ld\n", sizeof(var));
//	printf("%ld\n",sizeof(long double)); 
    	
	return 0;  
}  

