class Solution {
public:
    int minPartitions(string n) {
        int count = 0;
        while (n.find_first_not_of('0') != string::npos){
            for (int i = 0; i < n.size(); i++) {
                if (n[i] != '0')
                    n[i] -= 1;
            }
            count++;
        }

        return count;
    }
};