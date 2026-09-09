#include <iostream>
using namespace std;

int a[100];
int n;

int getMax(int x[], int s){
int m=x[0];
for(int i=0;i<=s;i++){
if(x[i]>m)
m=x[i];
}
return m;
}

int getMin(int x[],int s)
{
    int m = x[0];
	for(int i=0;i<=s;i++) {
        if (x[i]<m) {
    m=x[i];
        }
	}
return m;
}

float getAvg(int x[], int s){
	int t=0;
    for(int i=0;i<s;i++){
        t = t+x[i];
    }
    float avg = t / s;
    return avg;
}

char getLetter(float g){
	if(g>=90) return 'A';
	if(g>=80) return 'B';
	if(g>=70) return 'C';
	if(g>=60) return 'D';
	return 'F';
}

int main(){
    cout<<"Enter number of students: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter grade "<<i+1<<": ";
        cin>>a[i];
    }

    int mx = getMax(a,n);
    int mn = getMin(a,n);
    float av = getAvg(a,n);
    char lt = getLetter(av);

    cout<<"Highest: "<<mx<<endl;
    cout<<"Lowest: "<<mn<<endl;
    cout<<"Average: "<<av<<endl;
    cout<<"Letter Grade: "<<lt<<endl;

    return 0;
}
