class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n = card.size();
        int lsum = 0;
        int rsum = 0;
        int score = 0;
        for(int i = 0;i<k;i++){
            lsum+=card[i];
        }
        score = lsum;
        for(int i = 0; i < k; i++){
            rsum += card[n - 1 - i];
            lsum -= card[k - 1 - i];
            score = max(score, rsum + lsum);
        }
        return score;
    }
};