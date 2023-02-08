  for (int times = 0; times < tt; times++)
    {
    string st, s="", t="",ans="";
    getline(cin, st);
    int i=0;    
    while (i<st.length())
    {   if ((int)st[i] == 32) break;
        s+=st[i];
        i++;}
   for (int j = i+1; j < st.length(); j++) t+=st[j]; 
   
   int kk, jj;
   for ( kk = 0,jj=0; kk < s.length() , jj<t.length(); kk++)
   {
    ans.push_back(s[kk]);
    ans.push_back(t[jj]);
    }
    if (s.length() > t.length())
    {
        for (int ll = kk; ll < s.length() ; ll++)
        {
            ans+=s[ll];
        }
        
    }else if (s.length() < t.length())
    {
        for (int ll = jj; ll < t.length() ; ll++)
        {
            ans+=t[ll];
        }
    }
    cout<<ans<<endl;
    
    }    
    

   
    


