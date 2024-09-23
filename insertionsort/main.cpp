#include <iostream>
#include <vector>
using namespace std;
bool esprimo(int A){
int x = 1;
int y=0;
int DIVISOR = 0;
while (x<=A){
y=A%x;
if(y==0){
   DIVISOR= DIVISOR + 1;
}
x=x+1;
}
if(DIVISOR != 2){
    return false;
}
else{
    return true;
}
}

vector<int> insertionSort(vector<int> arr){
int n = arr.size();
for(int i=1;i<n;i++){
    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1] = arr[j];
        j=j-1;
    }
    arr[j+1]=key;
}
return arr;
}
int main()
{
    vector<int> arr={12, 5, 3, 7, 11, 4, 8, 13,4 , 9 ,17};
    vector<int> PRIMOS;
    arr=insertionSort(arr);
    for(int i=0;i<arr.size();i++){
        if(esprimo(arr[i])){
            PRIMOS.push_back(arr[i]);
        }
        }


    PRIMOS=insertionSort(PRIMOS);
    for(int i=0; i<PRIMOS.size();i++){
        cout<<"PRIMOS: " <<PRIMOS[i]<<endl;;
    }
    return 0;
}
