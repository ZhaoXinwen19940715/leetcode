    void reverseString(vector<char>& s) 
    {
        int len =s.size();
        for(int i = 0;i<len/2;i++)
        {
            char c = s[i];
            s[i]=s[len-1-i];
            s[len-1-i]=c;
        }
    }
