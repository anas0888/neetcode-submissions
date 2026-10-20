class Solution {
public:

    string encode(vector<string>& strs) {
    
        string encoded_string = "";
        for( string& str : strs){
            encoded_string += to_string(str.length()) + "#" + str;
        }
        return encoded_string;
    }
    

    vector<string> decode(string s) {
     vector<string>decoded_strs;
     size_t i = 0;

     while(i < s.length()){
       size_t delimiter =  s.find('#',i);

       int length = stoi(s.substr(i,delimiter - i));

       i = delimiter + 1;
    string  str = s.substr(i, length);
       decoded_strs.push_back(str);
       i+= length;
     }
     return decoded_strs;
    }
};
