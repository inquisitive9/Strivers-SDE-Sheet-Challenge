/*

    Time Complexity : O(N * K)
    Space Complexity : O(N * K)

    Where N is the number of elements in the array and
    K is the target sum. 
    

*/

int helper(vector < int > & arr, int n, int k, vector < vector < int >> & memo) {
    // Base condition.
    if (n <= 0) {
        // If k = 0, we reached target sum.
        if (k == 0) {
            return 1;
        } else {
            return 0;
        }
    }

    // If memo[n][k] not equal to -1
    // then result of n,k already calculated.
    if (memo[n][k] != -1) {
        return memo[n][k];
    }


    // arr[n-1] not taken in considertion.   
    int x = helper(arr, n - 1, k, memo);
    int y = 0;
    if(k - arr[n-1] >= 0){
        // arr[n-1] taken in considertion.
        y = helper(arr, n - 1, k - arr[n-1], memo);    
    }

    // Store current result in memo.
    memo[n][k] = x || y;
    // Return current result.
    return memo[n][k];
}

bool subsetSumToK(int n, int k, vector < int > & arr) {
    // Declaring memo array and storing -1 in it:
    vector < vector < int >> memo(n+1, vector < int > (k+1, -1));
    // Calling recursive function.
    int ans = helper(arr, n, k, memo);

    if (ans == 1) {
        return true;
    } else {
        return false;
    }
}
