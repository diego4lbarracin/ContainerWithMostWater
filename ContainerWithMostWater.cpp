#include <bits/stdc++.h>
using namespace std;

int containerWithMostWater(int input[],int arraySize);
int calculateArea(int lengt, int width);
int updateVariable(int maxArea, int currentArea);

int main(){
    //Change the values of the array.
    int array1[]= {1, 8, 6, 2, 5, 4, 8, 3, 7};
    //Variable to storage the number of elements inside the array.
    int arraySize= sizeof(array1)/sizeof(array1[0]);
                                                //Calling the Function
    cout << "The Maximum possible area is: " << containerWithMostWater(array1, arraySize) << endl;
    return 0;
}

int containerWithMostWater(int input[], int arraySize){
    //Pointer 1
    int p1= 0;
    //Pointer 2
    int p2= arraySize-1;
    //MaxArea is a variable to save the maximum possible area
    //that a container can storage.
    int maxArea= 0;

    for (int i = 0; i < arraySize; i++)
    {
        //Comparisons to check which pointer has to be updated.
        if(input[p1]<input[p2]){
            maxArea = updateVariable(maxArea, calculateArea(input[p1], p2-p1));
            p1+=1;
        }else{
            maxArea= updateVariable(maxArea, calculateArea(input[p2], (p2-p1)));
            p2-=1;
        }
    }
    //Returns the maximum Area.
    return maxArea;
}

int calculateArea(int lengt, int width){
    //Returns the area of a rectangle, which is the shape that the container has.
    return lengt*width;
}

int updateVariable(int maxArea, int currentArea){
    //Returns the maximum value between the current calculated area and the maxArea
    //from the previous iteration.
    if(maxArea<currentArea){
        maxArea= currentArea;
    }
    return maxArea;
}
