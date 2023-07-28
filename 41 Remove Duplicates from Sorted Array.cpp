int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	 int idx = 1;

    int i = 1;

    for(int i=1; i<n; i++){

        if(arr[i] == arr[i-1]) continue;

        

        if(arr[i] != arr[i-1]){

            arr[idx] = arr[i];

            idx++;

        }

    }

    return idx;
}
