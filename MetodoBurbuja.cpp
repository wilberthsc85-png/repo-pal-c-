#include <iostream>
using namespace std;


int main(){
    int arr[] = {36, 67, 17, 52, 420, 69};
    int n = 6;
    int aux;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}