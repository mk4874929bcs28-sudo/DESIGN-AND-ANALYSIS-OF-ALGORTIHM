#include<stdio.h>
#include<math.h>
int main(){
   int n,j,i;
   float x[50],y[50];
   float d,dist;
   printf("Enter the number of points:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      printf("Enter x and y for the point %d:",i+1);
      scanf("%f %f",&x[i],&y[i]);
   }
   d=9999;
   for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
         dist=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
         if(dist<d)
            d=dist;
      }
   }
   printf("Minimum distance = %.2f\n",d);
   return 0;
}
