class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if (n <= 1) return n;
        
        // int index = 0;
        // int i = 0;
        
        // while (i < n) {
        //     char currentChar = chars[i];
        //     int count = 0;
            
        //     // Count the number of occurrences of the current character
        //     while (i < n && chars[i] == currentChar) {
        //         i++;
        //         count++;
        //     }
            
        //     // Write the character to the result
        //     chars[index++] = currentChar;
            
        //     // If count is greater than 1, write the count to the result
        //     if (count > 1) {
        //         string countStr = to_string(count);
        //         for (char c : countStr) {
        //             chars[index++] = c;
        //         }
        //     }
        // }
        
        // return index;
        int i=0;
        int index=0;
        while(i<n){
            char curr=chars[i];
            int count=0;
            while(i<n && curr==chars[i]){
                count++;
                i++;
            }
            chars[index++]=curr;
            if(count>1){
                string str=to_string(count);
                for(int i=0;i<str.size();i++){
                    chars[index++]=str[i];
                }

            }

        }
        return index;
    }
};
