static int n = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    void reverseString(vector<char>& s) {
        int len=s.size();
        for(int i=0;i<len/2;i++){
            swap(s[i],s[len-i-1]);  
        }
    }
};
