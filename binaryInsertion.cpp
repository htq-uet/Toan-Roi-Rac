int binarySearch(int a[],x,n){
	int i=1;j=n;
	while(i<j){
		m=(i+j)/2;
		if(a[m]<=x) {
			i=m1+1;
		}
		else j=m;
		if(x==a[i]){
			location =i;
		}
		else location =0;
	}
	return location;
} 
void insertion(int a[]){
	for(int k=2;k<=a.length();k++){
		x=a[k];
		pos=binarySearch(a[],x,k);
		h=k;
		while (h>pos){
			a[h]=a[h-1];
			h--;
		}
		a[pos]=x;
	}
}
