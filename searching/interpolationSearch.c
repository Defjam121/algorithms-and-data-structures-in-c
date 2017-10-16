#include"searching.h"

int searchInter(int arr[],int len,int data)
{
    int lo=0,hi = len-1,mid,index =-1;
     while(lo <= hi)
     {
         mid = lo + (( (double) (hi-lo)/(arr[hi]-arr[lo]) )*(data-arr[lo]));
         if(arr[mid]==data)
         {
             index =mid;
             break;
         }
         else if(arr[mid] > data)
         {
             hi = mid-1;
         }
         else
         {
             lo = mid +1;
         }
     }
     return index;
}
