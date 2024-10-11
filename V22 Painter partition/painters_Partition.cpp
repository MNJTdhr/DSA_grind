#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> vec, int paint_n, int painters_m, int maxallowedtime_mid) {
    int paintrs = 1, time_paint = 0;
    
    for (int i = 0; i < paint_n; i++)
    {
        if (time_paint+vec[i]<=maxallowedtime_mid)
        {
            time_paint+=vec[i];
        } else{
            paintrs++;
            time_paint=vec[i];
        }
    }
    
    return paintrs <= painters_m;  // Correct condition
}

int bookalloc(vector<int> vec, int paint_n, int painters_m) {
    int sum=0, maxVal = INT_MIN;
    for (int i = 0; i < paint_n; i++){
        sum+=vec[i];
        maxVal=max(maxVal, vec[i]);
    }
    int start=maxVal, end=sum, ans=-1;

    while (start<=end){
        int mid=start+(end-start)/2;

        if (isValid(vec, paint_n, painters_m, mid)){
            ans=mid;
            end=mid-1;
        } else{
            start=mid+1;
        }
    }  
    return ans;
}

int main() {
    vector<int> vec = {40,30,10,20};
    int painters_m = 2, paint_n = 4;
    int result = bookalloc(vec, paint_n, painters_m);
    if (result != -1) {
        cout << "Min possible maximum painters can take: " << result<<" unit time.";
    } else {
        cout << "Allocation not possible.";
    }
    return 0;
}
