class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int i;
        unordered_set<int> unique_candies;
        for(i=0 ; i<candyType.size() ; i++)
        {
            unique_candies.insert(candyType[i]);
        }
        if((unique_candies.size())<=(candyType.size()/2))
            return unique_candies.size();
        return candyType.size()/2;
    }
};
