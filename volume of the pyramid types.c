/*The code calculates the volume of the pyramid types */

#include<stdio.h>
#include<math.h>

int main(){
	
	int selection;
	int selection1;
	float first_angle;
	float second_angle;
	float third_angle;
	float height;
	float base_length;
	float area;
	float first_side_length;
	float second_side_length;
	float third_side_length;
	float perimeter;
	float u;
	float radius;
	float angle;
	float length;
	float length1;
	float length2;
	float height_pyramid;
	float volume;
	int side;
	const double PI = 3.14159265;
    double degree;
	double radian;
    double result;	
	
	printf("Please enter the height of the pyramid:");
	scanf("%f",&height_pyramid);		
	
	printf("--PYRAMIDS--\n\n1: Triangular Pyramid\n2: Square Pyramid\n3: Rectangular Pyramid\n4: Pentagonal Pyramid\n5: Hexagonal Pyramid\n6: n-sided Polygonal Pyramid\n\n\n");
	printf("Please select the pyramid you want:");
	scanf("%d",&selection);
	
	
	
	switch(selection){
		
		
		case 1:
			
			printf("\nWhat is known about the base triangle:\n");
			printf("1:Base and Height\n2:Three Side\n3:Two sides and a angle\n\n\n");
			scanf("%d",&selection1);
			
			switch(selection1){
					
			case 1:		
				printf("Please enter the length of the base of the triangle:");
				scanf("%f",&base_length);
						
				printf("Please enter the height of the base triangle:");
				scanf("%f",&height);
						
				area= (height*base_length)/2;
				volume= (area*height_pyramid)/3;
				
				printf("The area of the base triangle is %.3f\n",area);
				printf("The volume of the pyramid is %.3f",volume);
				
				break;
						
			case 2:			
				printf("Please enter the first side length of base triangle:");
				scanf("%f",&first_side_length);
				printf("Please enter the second side length of base triangle:");
				scanf("%f",&second_side_length);
				printf("Please enter the third side length of base triangle:");
				scanf("%f",&third_side_length);
							
				perimeter= first_side_length+second_side_length+third_side_length;
				u=perimeter/2.0;
				area=sqrt(u*(u-first_side_length)*(u-second_side_length)*(u-third_side_length));
				scanf("%f",&height_pyramid);	
				volume= (area*height_pyramid)/3;			
							
				if(first_side_length>perimeter-first_side_length|| first_side_length<abs(second_side_length-third_side_length)||
				second_side_length>perimeter-second_side_length|| second_side_length<abs(first_side_length-third_side_length)||
				third_side_length>perimeter-third_side_length|| third_side_length<abs(second_side_length-first_side_length)){ 
							
				printf("A triangle with these side lengths cannot be drawn.");
			}
						
				else {
				printf("The area of this triangle is %.3f\n",area);	
				printf("The volume of the pyramid is %.3f",volume);
							
			}
				break;
				
			case 3:
		     	printf("Please enter the angle of triangle(radian):");
				scanf("%f",&angle);
				printf("Please enter the first side length of triangle:");
				scanf("%f",&first_side_length);
				printf("Please enter the seconde side length of triangle:");
				scanf("%f",&second_side_length);
							
				area= 1/2.0*first_side_length*second_side_length*sin(angle);	
				volume= (area*height_pyramid)/3;
							
				if(angle>=180){
					printf("You entered the angle value incorrectly because an angle value can not bigger than 180.");
				}
							
				if(angle<=0){
					printf("You entered the angle values incorrectly because an angle value can not be negative or zero .");
				}
							
				else {
					printf("The area of the base triangle is %f\n",area);
					printf("The volume of the pyramid is %.3f",volume);
				}	
				break;	
			
	}
		break;
		case 2:
			printf("Please enter the length:");
			scanf("%f" , &length);
		
			area = length*length;	
			volume= (area*height_pyramid)/3;
		
			printf("The area of the square is %.2f\n" ,area);
			printf("The volume of the pyramid is %.3f",volume);
			
				break;
		
		case 3:
			printf("Please enter the first length:");
			scanf("%f" , &length1);
			printf("Please enter the second length:");
			scanf("%f",&length2);
		
			area = length1*length2;	
			volume= (area*height_pyramid)/3;
		
			printf("The area of rectangle is %.2f\n" ,area);
			printf("The volume of the pyramid is %.3f",volume);
			break;
			
		case 4:
			printf("Please enter the length of the pentagon:");
			scanf("%f",&length);
			
			area= (sqrt(25+(10*sqrt(5))))*length*length/4;	
			volume= (area*height_pyramid)/3;
			
			printf("The area of the pentagon :%.4f\n",area);
			printf("The volume of the pyramid is %.3f",volume);
			
		break;
		
		case 5:	
			printf("Please enter the length of the hexagon:");
			scanf("%f",&length);
			
			area= (3*sqrt(3))*length*length/2;	
			volume= (area*height_pyramid)/3;
			
			printf("The area of the pentagon :%.4f\n",area);
			printf("The volume of the pyramid is %.3f",volume);
			
		break;
		
		case 6:
			printf("How many sides has the polygon whose perimeter and area you want to find:");
			scanf("%d",&side);
			
			printf("\nPlease enter the side length of the polygon:");
			scanf("%f",&length);
		
		if(side<=2){
			printf("A base two-dimensional polygon must have at least 3 sides!");
		}
	
	if(side>2){
		
		degree=180/side;
		radian = degree * PI/180;
		result =tan(radian);
				
		area=(side*length*length/4)*1/result;	
		volume= (area*height_pyramid)/3;
		
		printf("The area of the polygon: %.2f\n",area);
		printf("The volume of the pyramid is %.3f",volume);
		
	}
			
		break;
			
	}	
		
	return 0;	
}
