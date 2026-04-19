//if(s.length()%2!=0) return false;
        int sop=0;
        int scl=0;
        int mop=0;
        int mcl=0;
        int cop=0;
        int ccl=0;
        for(int i=0;i<s.length();i++){
           // if(ccl>cop || mcl>mop || scl>sop) return false;
            if(s[i]=='(') sop++;
            else if(s[i]==')') scl++;
            else if(s[i]=='{') mop++;
            else if(s[i]=='}') mcl++;
            else if(s[i]=='[') cop++;
            else ccl++;
        }
        if(ccl!=cop || mcl!=mop || sop!=scl) return false ; 
        return true; 