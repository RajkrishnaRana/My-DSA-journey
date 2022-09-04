//Not undetstanding how to neglect multiple dots in domain name
unordered_set<string> ans;
        for(string &email:emails){
            string domain = "";
            for(char &ch:email){
                if(ch == '+' || ch == '@')break;
                if(ch == '.')continue;
                domain += ch;
            }
            ans.insert(domain+email.substr(email.find('@')));
        }
        return ans.size();
