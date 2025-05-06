class Solution {
public:

string generateStr(string str) {
    string ans;

    for(int i = 0;i<str.length();i++) {

        if(str[i] == 'z') {
            ans.push_back('a');
        }

        else {
            ans.push_back(char(str[i] + 1));
        }
    }

    return ans;
}
    char kthCharacter(int k) {
        string word = "a";
        while(word.length() < k) {
            string generated = generateStr(word);
            word += generated;
        }

        return word[k-1];
    }
};