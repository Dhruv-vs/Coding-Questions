string merge (string s1, string s2)
{
    int i=0,j=0;
    string ans;
    while(i<s1.size() && j<s2.size()){
        ans += s1[i];
        ans += s2[j];
        i++,j++;
    }
    while(i<s1.size()){
      ans+=s1[i];
      i++;
    }
    while(j<s2.size()){
        ans+=s2[j];
        j++;
    }
    return ans;
}
