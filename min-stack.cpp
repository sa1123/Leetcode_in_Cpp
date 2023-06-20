//https://leetcode.com/problems/min-stack/submissions/975333008/

class MinStack {
public:
    vector<int> s1;
    vector<int> s2;
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push_back(val);
        if(s2.size() && s2[s2.size()-1]<val){
            s2.push_back(s2[s2.size()-1]);
        }else{
            s2.push_back(val);
        }
    }
    
    void pop() {
        if(s1.size() && s2.size()){
            s1.pop_back();
            s2.pop_back();
        }
    }
    
    int top() {
        return s1[s1.size()-1];
    }
    
    int getMin() {
        return s2[s2.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */