// Sort an array
#include <stdio.h>

void sort(int a[],int n) {
 // can also be sort(int* a, int n)
 // since both point to the first element
	int i,j,tmp;
	for (i=0;i<n-1;i++) {
		for (j=i+1;j<n;j++) {
			if (a[i]>a[j]) {
				tmp = a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}

void reverse(int a[],int n) {
	int i,tmp;
	for (i=0;i<n/2;i++) {
		tmp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = tmp;
	}
}

int main() {
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	for (i=0;i<n;i++) printf("%d ",arr[i]);
	reverse(arr,n);
	printf("\n");
	for (i=0;i<n;i++) printf("%d ",arr[i]);
}
