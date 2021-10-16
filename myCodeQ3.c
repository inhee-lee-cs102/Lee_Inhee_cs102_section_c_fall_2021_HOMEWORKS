#include <stdio.h>

int main() {
	int a[100],n,i,j,t,max=0,c=0,mode=0;
    float s=0,mean,median;
    n=5;
    printf("\nEnter five integers:\n");
    scanf("%d", &n);

    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
        }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i]<a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }

//Finding mean
   
    mean=s/(float)n;
    printf("\nThe mean of these values is: %.1f\n", mean);

//Finding median

    if(n%2==0)
        median=((a[(n-1)/2]+a[(n-1)/2+1])/2.0);
    else
        median=((a[(n-1)]/2)/2.0);
    printf("\nThe median is: %.1f\n", median);

//Finding mode

    for(i=0;i<n;i++){
        t=a[i];
        c=0;
            for(j=0;j<n;j++){if(t==a[j])c++;if(c>max);
        {
                max=c;
                mode=t;
                    }
            }
    }
    printf("\nThe mode is: %.1d\n", mode);


}
