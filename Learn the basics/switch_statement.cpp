class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        float pi=3.1415926535879;
        float ans;
        switch(choice){
            case 1:
            ans=pi*arr[0]*arr[0];
            break;
            case 2:
            ans=arr[0]*arr[1];
            break;
        }
        return ans;
    }
};
