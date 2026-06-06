#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool hasPairWithSum(vector<int>&arr,int target){
    unordered_set<int> seen;

    for(int num : arr){
        int complement = target - num;
        if (seen.count(complement))
        {
            return true;
        }

        else{
            seen.insert(num);
        }
    }
    return false;
}

int main(){
    int n ,target;
    cout<< "Enter the no. of elements";
    cin>>n;
    vector<int> arr(n);
    
    for (int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target value ";
    cin>>target;
    cout << "Output: " << (hasPairWithSum(arr, target) ? "true" : "false") << endl;

    return 0;
}