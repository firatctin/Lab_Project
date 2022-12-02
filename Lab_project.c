#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    //Lets declare the variables:
    float triangle1Ax,triangle1Ay,triangle1Bx,triangle1By,triangle1Cx,triangle1Cy,triangle2Ax,triangle2Ay,triangle2Bx,triangle2By,triangle2Cx,triangle2Cy,triangle3Ax,triangle3Ay,triangle3Bx,triangle3By,triangle3Cx,triangle3Cy;
    float triangle1Side1,triangle1Side2,triangle1Side3,triangle2Side1,triangle2Side2,triangle2Side3,triangle3Side1,triangle3Side2,triangle3Side3,Px,Py,Area,Area1,Area2,Area3;
    float AreaTriangle1,AreaTriangle2,AreaTriangle3,PAB1,PBC1,PAC1,PAB2,PBC2,PAC2,PAB3,PBC3,PAC3,sum1,sum2,sum3;
    while(1){
        //For triangle 1; I will take the points
        printf("\nEnter Ax1:\n");
        scanf("%f",&triangle1Ax);
        printf("\nEnter Ay1:\n");
        scanf("%f",&triangle1Ay);
        printf("\nEnter Bx1:\n");
        scanf("%f",&triangle1Bx);
        printf("\nEnter By1:\n");
        scanf("%f",&triangle1By);
        printf("\nEnter Cx1:\n");
        scanf("%f",&triangle1Cx);
        printf("\nEnter Cy1:\n");
        scanf("%f",&triangle1Cy);
        //lets calculate if these points form a triangle:
        triangle1Side1 = sqrt(pow(triangle1Ax-triangle1Bx,2) + pow(triangle1Ay-triangle1By,2));
        triangle1Side2 = sqrt(pow(triangle1Ax-triangle1Cx,2) + pow(triangle1Ay-triangle1Cy,2));
        triangle1Side3 = sqrt(pow(triangle1Cx-triangle1Bx,2) + pow(triangle1Cy-triangle1By,2));
        AreaTriangle1 = abs(triangle1Ax *(triangle1By-triangle1Cy)+triangle1Bx*(triangle1Cy-triangle1Ay)+ triangle1Cx*(triangle1Ay-triangle1By))/2;
        if (AreaTriangle1 >0 &&(abs(triangle1Side1-triangle1Side2) < triangle1Side3) && (triangle1Side3 < triangle1Side1+triangle1Side2)){
            printf("Triangle1 is created with (%f, %f), (%f, %f) and (%f, %f) points.",triangle1Ax,triangle1Ay, triangle1Bx,triangle1By, triangle1Cx,triangle1Cy);
            break;
        }
        else{
            printf("\nThese points cannot form a triangle, try again\n");
            continue;
        }
        
    }
    while(1){
        //For triangle 2; I will take the points
        printf("\nEnter Ax2:\n");
        scanf("%f",&triangle2Ax);
        printf("\nEnter Ay2:\n");
        scanf("%f",&triangle2Ay);
        printf("\nEnter Bx2:\n");
        scanf("%f",&triangle2Bx);
        printf("\nEnter By2:\n");
        scanf("%f",&triangle2By);
        printf("\nEnter Cx2:\n");
        scanf("%f",&triangle2Cx);
        printf("\nEnter Cy2:\n");
        scanf("%f",&triangle2Cy);
        //lets calculate if these points form a triangle
        triangle2Side1 = sqrt(pow(triangle2Ax-triangle2Bx,2) + pow(triangle2Ay-triangle2By,2));
        triangle2Side2 = sqrt(pow(triangle2Ax-triangle2Cx,2) + pow(triangle2Ay-triangle2Cy,2));
        triangle2Side3 = sqrt(pow(triangle2Cx-triangle2Bx,2) + pow(triangle2Cy-triangle2By,2));
        AreaTriangle2 = abs(triangle2Ax *(triangle2By-triangle2Cy)+triangle2Bx*(triangle2Cy-triangle2Ay)+ triangle2Cx*(triangle2Ay-triangle2By))/2;
        if (AreaTriangle2 >0 && (abs(triangle2Side1-triangle2Side2) < triangle2Side3) && (triangle2Side3 < triangle2Side1+triangle2Side2)){
            printf("Triangle2 is created with (%f, %f), (%f, %f) and (%f, %f) points.",triangle2Ax,triangle2Ay, triangle2Bx,triangle2By, triangle2Cx,triangle2Cy);
            break;
        }
        else{
            printf("\nThese points cannot form a triangle, try again\n");
            continue;
        }
        
    }
    while(1){
        //For triangle 3; I will take the points
        printf("\nEnter Ax3:\n");
        scanf("%f",&triangle3Ax);
        printf("\nEnter Ay3:\n");
        scanf("%f",&triangle3Ay);
        printf("\nEnter Bx3:\n");
        scanf("%f",&triangle3Bx);
        printf("\nEnter By3:\n");
        scanf("%f",&triangle3By);
        printf("\nEnter Cx3:\n");
        scanf("%f",&triangle3Cx);
        printf("\nEnter Cy3:\n");
        scanf("%f",&triangle3Cy);
        
        //lets calculate if these points form a triangle
        triangle3Side1 = sqrt(pow(triangle3Ax-triangle3Bx,2) + pow(triangle3Ay-triangle3By,2));
        triangle3Side2 = sqrt(pow(triangle3Ax-triangle3Cx,2) + pow(triangle3Ay-triangle3Cy,2));
        triangle3Side3 = sqrt(pow(triangle3Cx-triangle3Bx,2) + pow(triangle3Cy-triangle3By,2));
        AreaTriangle3 = abs(triangle3Ax *(triangle3By-triangle3Cy)+triangle3Bx*(triangle3Cy-triangle3Ay)+ triangle3Cx*(triangle3Ay-triangle3By))/2;

        if (AreaTriangle3>0 && (abs(triangle3Side1-triangle3Side2) < triangle3Side3) && (triangle3Side3 < triangle3Side1+triangle3Side2)){
            printf("Triangle3 is created with (%f, %f), (%f, %f) and (%f, %f) points.",triangle3Ax,triangle3Ay, triangle3Bx,triangle3By, triangle3Cx,triangle3Cy);
            break;
        }
        else{
            printf("\nThese points cannot form a triangle, try again\n");
            continue;
        }
        
    }
    //Take the other point's coordinates:
    printf("\nEnter Px:\n");
    scanf("%f",&Px);
    printf("\nEnter Py:\n");
    scanf("%f",&Py);
    //If this point inside of this triangles then it means if we draw linet to this point to edges of triangles which include this point the sum of areas of triangles which occurs after we done that must be equal to area of the first triangle.




    PAB1 = abs(Px*(triangle1Ay-triangle1By)+triangle1Ax*(triangle1By-Py)+triangle1Bx*(Py-triangle1Ay))/2;
    PBC1=abs(Px*(triangle1By-triangle1Cy)+triangle1Bx*(triangle1Cy-Py)+triangle1Cx*(Py-triangle1By))/2;
    PAC1 = abs(Px*(triangle1Ay-triangle1Cy)+triangle1Ax*(triangle1Cy-Py)+triangle1Cx*(Py-triangle1Ay))/2;
    sum1 = PAB1+PBC1 + PAC1;
    
    PAB2 = abs(Px*(triangle2Ay-triangle2By)+triangle2Ax*(triangle2By-Py)+triangle2Bx*(Py-triangle2Ay))/2;
    PBC2=abs(Px*(triangle2By-triangle2Cy)+triangle2Bx*(triangle2Cy-Py)+triangle2Cx*(Py-triangle2By))/2;
    PAC2 = abs(Px*(triangle2Ay-triangle2Cy)+triangle2Ax*(triangle2Cy-Py)+triangle2Cx*(Py-triangle2Ay))/2;
    sum2 = PAB2 + PBC2 + PAC2;
    
    PAB3 = abs(Px*(triangle3Ay-triangle3By)+triangle3Ax*(triangle3By-Py)+triangle3Bx*(Py-triangle3Ay))/2;
    PBC3=abs(Px*(triangle3By-triangle3Cy)+triangle3Bx*(triangle3Cy-Py)+triangle3Cx*(Py-triangle3By))/2;
    PAC3 = abs(Px*(triangle3Ay-triangle3Cy)+triangle3Ax*(triangle3Cy-Py)+triangle3Cx*(Py-triangle3Ay))/2;
    sum3 = PAB3+PBC3 + PAC3;
    
   
    
    if(sum1 != AreaTriangle1 && sum2 != AreaTriangle2 && sum3 != AreaTriangle3){
        printf("\nThe given point is not inside these triangles.\n");
    }
    else{
        if(sum1 == AreaTriangle1){
        printf("\nThe given point is inside the Triangle1.\n");
        
        }
        if(sum2 == AreaTriangle2){
            printf("\nThe given point is inside the Triangle2.\n");
        }
        if(sum3==AreaTriangle3){
            printf("\nThe given point is inside the Triangle3.\n");
        }
        
        
    }

   return 0; 
}