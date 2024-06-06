#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i*i <= num; i++){
        if (num % i ==0) return false;
    }
    return true;
}

int linearSearch(int arr[], int n, int x){
    for(int i = 0; i<n; i++){
        arr[i] == x;
        return 1;
    }
    return -1;
}

int main(){
    int n,m;
    
    cin >> n >> m;

    int array_A[n];
    int array_B[m];

    for (int i =0 ;i<n;i++){
        cin>>array_A[i];
    }

    for (int i =0 ;i<m;i++){
        cin>>array_B[i];
    }

    int results[n+m];
    int result_count = 0;

    for (int i = 0; i<n ; i++){
        for (int j=0; j<m; j++)
        if (array_A[i]==array_B[j]){
                if(j%2 == 1){
                    if(isPrime(i)){
                        results[result_count] = array_A[i];
                        result_count++;
                }
            }
        }
    }

    sort(results, results + result_count);

    if(result_count == 0){
        cout <<"TIDAK ADA" << endl;
    }else{
        for(int i = 0; i<result_count; i++){
            cout << results[i];
        }
    }

    return 0;
}