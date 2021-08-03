/* Mazhar Hussain     Registration 20MDELE098
 Email: 20Mdele098@uetmardan.edu.pk*/
#include<stdio.h>
#include<math.h>
 int main()
{
    float A,B,C,Area,S; 
	printf("\n enter all  three lengths of sides of a triangle:\n");//n asking user to input lengths of triangle
	
	scanf("%f %f %f",&A,&B,&C);//n saving length values of triangle
	
	if(A==B && A==C)
	printf("the triangle is equialteral \n");//displaying result
	
	else if((A==B || A==C) || (B==A || B==C) || (C==A || C==B))
	printf("triangle is isosceles \n");//displaying result
	
	else
	printf("triangle is scalene \n");//displaying result
	 S = (A+B+C)/2; // Semiperimeter
	 
     Area = sqrt(S*(S-A)*(S-B)*(S-C));//calculating area of triangle
  printf("Area of the triangle = %f", Area);//displaying area
  return 0;
}
