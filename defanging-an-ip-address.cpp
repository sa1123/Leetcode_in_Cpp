// https://leetcode.com/problems/defanging-an-ip-address/submissions/1258660888/

// Regex. Used "//" before "." because "." is a special character.

class Solution {
public:
    string defangIPaddr(string address) {
        return std::regex_replace(address, std::regex("\\."), "[.]");
    }
};