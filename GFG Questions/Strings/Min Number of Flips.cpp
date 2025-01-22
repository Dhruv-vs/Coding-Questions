int minFlips (string s)
{
 int n = s.size();
 int count1=0,count2=0;
 for(int i=0;i<n;i++){
     // Pattern1: '101010...'
     if((i%2==0 && s[i]!='1') || (i%2==1 && s[i]!='0')) count1++;
     
     // Pattern2: '010101...'
     if((i%2==0 && s[i]!='0') || (i%2==1 && s[i]!='1')) count2++;
 }
 return min(count1,count2);
}
