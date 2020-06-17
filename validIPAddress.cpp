class Solution {
public:
    string validIPAddress(string IP) {
        int deli;
        deli=IP.find('.');
        if(deli!=string::npos){
            deli=0;
            for(int i=0;i<4;++i){
                if(deli>=IP.size()){
                    return "Neither";
                }
                int j;
                for (j =deli;j<IP.size();++j){
                    if(IP[j]=='.'){ 
                        break;
                    }
                    else if(IP[j]<'0' || IP[j]>'9'){
                        return "Neither";
                    }
                }
                if(j-deli<=0){
                    return "Neither";
                }
                string sub=IP.substr(deli,j-deli);
                if(sub[0]=='0' && sub.size()>1){ 
                    return "Neither";
                }
                int s=atoi(sub.c_str());
                if (s<0 || s>255){
                    return "Neither";
                }
                deli=j+1;
            }
            if(deli-1<IP.size()){
                return "Neither";
            }
            else{ 
                return "IPv4";
            }
        }
        else{
            deli=0;
            for(int i=0;i<8;++i) {
                if(deli>=IP.size()){ 
                    return "Neither";
                }
                int j;
                for(j=deli;j<IP.size();++j){
                    if(IP[j]==':'){ 
                        break;
                    }
                    else if(!(IP[j]>='0' && IP[j]<='9' || IP[j]>='a' && IP[j]<='f' || IP[j]>='A' && IP[j]<='F')){
                        return "Neither";
                    }
                }
                if(j-deli<=0 || j-deli>4){ 
                    return "Neither";
                }
                deli=j+1;
            }
            if(deli-1<IP.size()){
                return "Neither";
            }
            else{ 
                return "IPv6";
            }
        }
    }
};

// class Solution {
// public:
//     string validIPAddress(string IP) {
//         regex ipv4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])"), ipv6("((([0-9a-fA-F]){1,4})\\:){7}([0-9a-fA-F]){1,4}");
//         if(regex_match(IP,ipv4)){
//             return "IPv4";
//         }
//         else if(regex_match(IP,ipv6)){            
//             return "IPv6";
//         }
//         return "Neither";
//     }
// };
