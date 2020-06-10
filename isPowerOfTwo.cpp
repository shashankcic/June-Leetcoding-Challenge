class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) 
            return false;
        int s=0;
        while(n){
            s++;
            n=n&(n-1);
        }
        return s==1;
    }
};

// class Solution {
// public:
//     bool isPowerOfTwo(int n,double x=INT_MIN) {
//         if(x==INT_MIN){
//             x=n;
//         }
//         if(x==1){
//             return true;
//         }
//         else if(x>1){
//             return isPowerOfTwo(n,x/2);
//         }
//         else{
//             return false;
//         }   
//     }
// };
