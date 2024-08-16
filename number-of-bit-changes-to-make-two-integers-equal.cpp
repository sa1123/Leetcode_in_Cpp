// https://leetcode.com/problems/number-of-bit-changes-to-make-two-integers-equal/submissions/1357464351/

// Converted both to binary and compared each element

class Solution {
public:
    std::string deciToBin(int x){
        std::string bin = "";
        while(x > 0){
            bin.insert(0, to_string(x%2));
            x/=2;
        }
        // cout<<bin;
        return bin;
    }

    int minChanges(int n, int k) {
        if(n == k){
            return 0;
        }

        std::string n_bin = deciToBin(n);
        std::string k_bin = deciToBin(k);

        if(n_bin.length() < k_bin.length()){
            while(n_bin.length() != k_bin.length()){
                n_bin.insert(0, "0");
            }
        }

        if(k_bin.length() < n_bin.length()){
            while(k_bin.length() != n_bin.length()){
                k_bin.insert(0, "0");
            }
        }

        // cout<<n_bin<<" "<<k_bin;

        int differences = 0;

        for(int i = 0; i<n_bin.length(); i++){
            if(n_bin[i] == 48 && k_bin[i] == 49){
                return -1;
            }
            if(n_bin[i] == 49 && k_bin[i] == 48){
                differences++;
            }
        }

        return differences;
    }
};