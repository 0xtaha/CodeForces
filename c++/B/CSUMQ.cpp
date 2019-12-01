#include <stdio.h>

using namespace std;
int main(){
    int n , i , j;
    scanf("%i",n);
    int arr[n];
    scanf("%i",arr[0]);
    for(int i = 1 ; i < n ; i++){
        scanf("%i",arr[i]);
        arr[i]+=arr[i]+arr[i-1];
    }
    scanf("%i",n);
    for(int c = 0 ; c < n ; i++){
        scanf("%i",i);
        scanf("%i",j);
        for(i ; i <= j; i++){
            printf("%i",arr[i]);
        }
    }
    return 0;
}
