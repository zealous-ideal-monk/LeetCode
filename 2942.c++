//Description:
//You are given a 0-indexed array of strings words and a character x.
//Return an array of indices representing the words that contain the character x.
//Note that the returned array may be in any order.

//EASY

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        int i;
        int j;

        for (i = 0; i < words.size(); i++) {
            string word = words[i];
            for (j = 0; j < word.size(); j++) {
                if (word[j] == x) {
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};

// https://leetcode.com/problems/find-words-containing-character/submissions/1668273472