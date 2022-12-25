#include <stdio.h>
#include<string.h>
int gcd(int a,int b){
    int ans,i;
    for( i = 1; i <= a && i <= b; i++){  
        if (a% i ==0 && b % i == 0)  
            ans = i;   
    }  
    return ans;
}

int main(){
    int t;
    scanf("%d",&t);
    for (int k = 0; k<t; k++){
        int n,hexa=0,arr[10000];
        scanf("%d",&n);
        for (int i= 0; i < n; i++){
            scanf("%d",&arr[i]);
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (arr[i]==arr[j]){
                    continue;
                }
                int a =arr[i];
                int b =arr[j];
                if(gcd(a,b)==1){
                    hexa++;
                }
            }
        }
        printf("%d\n",hexa);
     }

    return 0;
}