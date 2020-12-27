#include<stdio.h>
void enter(int a[], int &n);
int main(){
    int a[100], n;
    enter(a,n);
    return 0;
}
void enter(int a[], int &n){
    int temp;
    printf("n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("a[%d]: ",i);
        scanf("%d",&temp);
        a[i] = temp;
    }
}