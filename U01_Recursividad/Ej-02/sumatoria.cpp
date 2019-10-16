

int sumatoria(int *arr, unsigned int size) {
    if (size == 1){
        return arr[0];
    }
    else
        return sumatoria( arr,size-1) + arr[size-1];
}