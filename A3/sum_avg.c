/*
    CH-230-A
    a3_p8.c
    Cristian-Mihai Stratulat
    cr.stratulat@jacobs-university.de
*/

#include <stdio.h>

/*
Required function in the statement
It loops through all the values in the array and makes the sum
*/
float sum (float v[],int n)
{
    int i;
    float sum=0;
    for(i=1;i<=n;i++)
            sum=sum+v[i];
    return sum;
}
/*
Required function in the statement
It loops through all the values in the array and computer the average
*/
float average (float v[],int n)
{
    int i;
    float sum=0;
    for(i=1;i<=n;i++)
            sum=sum+v[i];
    return sum/n;
}

int main ()
{
    /*
    Declaring the x variables where we will read the float numbers
    Declaring array v where we will store the numbers
    We declare all values of the array initially to be 0 (good
    practice)
    */
    float x,v[11]={0};
    /*
    We use a variable called counter to count how many numbers did we read.
    */
    int counter=1;
    scanf("%f",&x);
    /*
    We read the first float from the keyboard
    The number will enter the while. If it is a valid number
    we store it in the array. If the number read is equal
    to -99 the while loop will break and we stop reading
    numbers.
    As we read the first number outside the loop the 
    counter will be 1.
    */
    while(counter<10)
    {
        //Invalid float
        if(x==-99.0)
            break;
        else
        {
            /*
            If the number is value, we add it to the array.
            The counter variable gives the position in the array.
            We read another number and we increase the counter.
            */
            v[counter]=x;
            scanf("%f",&x);
            counter++;
        }
    }
    /*
    If the while ended because we read 10 numbers we need to add the last
    float read to the array. We check so the last number is valid (!=-99)
    and we add it to the array.
    If the while ended because of the break we need to decrease the counter
    with 1 as the last value read was not valid hence we don't want 
    to count it
    */
    if(x!=-99)
        v[counter]=x;
    else
        counter--;
    //We print the sum and the average by calling the functions
    printf("Sum= %f\nAverage= %f\n",sum(v,counter),average(v,counter));
    return 0;
}