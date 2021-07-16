int romanToInt(string s) {
      int n=s.size(),dc=0,i;
      unordered_map<char,int> m;
      m['I']=1;
      m['V']=5;
      m['X']=10;
      m['L']=50;
      m['C']=100;
      m['D']=500;
      m['M']=1000;
      for(i=0;i<n-1;i++){
          if(m[s[i]]<m[s[i+1]])
          {
              dc+=m[s[i+1]]-m[s[i]]; // for IV and others
              i++;
          }
          else{
              dc+=m[s[i]];
          }
      }
      if(i<n)
          dc+=m[s[i]];
      return dc;
}
