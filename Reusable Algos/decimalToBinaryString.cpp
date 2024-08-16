std::string deciToBin(int x){
        std::string bin = "";
        while(x > 0){
            bin.insert(0, to_string(x%2));
            x/=2;
        }
        // cout<<bin;
        return bin;
    }