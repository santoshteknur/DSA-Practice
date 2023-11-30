#include<stdio.h>

void findPair(int nums[], int size, int target)
{
 for(int i=0; i<size-1; i++)
 { 
  for(int j=0; j<size; j++)
  {
   if( a[i]+a[j] == target)
   {
     cout<< a[i] << " + " << a[j] <<" = " << target<<endl;
   }
}

int main();
{
 int nums[] ={8,7,2,5,3,1};
 int target=10;
 int n= sizeof(nums)/sizeof(nums[0]);
 findPair(nums, n, target);
 return 0;
}