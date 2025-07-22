/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int st=0;
        int end=n;
        while(st<=end){
            int mid=st+((end-st)/2);
            int temp=guess(mid);
            if (temp==0){
                return mid;
            }
            if (temp==-1){
                end=mid-1;
            }
            if (temp==1){
                st=mid+1;
            }
        }
        return -1;
    }
};