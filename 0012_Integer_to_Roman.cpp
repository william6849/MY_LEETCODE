class Solution {
public:
    string intToRoman(int num) 
    {
        if (!num) 
        { 
            return ""; 
        }
        string ans;
        int po = 1;
        string re, tmp;

        while (num != 0) 
        {
            int now = num % 10;
            if (now-9 == 0) {
                num -= 9;
                now = 9;
            }
            else if(now-5 >= 0) {
                num -= 5;
                now = 5;
            }
            else if(now-4 >= 0) {
                num -= 4;
                now = 4;
            }
            else if(now-1 >= 0) {
                num -= 1;
                now = 1;
            }

            now *= po;
            //cout << now << "~";
            switch (now) 
            {
            case 1:re = 'I'; break;
            case 5:re = 'V'; break;
            case 10:re = 'X'; break;
            case 50:re = 'L'; break;
            case 100:re = 'C'; break;
            case 500:re = 'D'; break;
            case 1000:re = 'M'; break;

            case 4:re = "IV"; break;
            case 9:re = "IX"; break;
            case 40:re = "XL"; break;
            case 90:re = "XC"; break;
            case 400:re = "CD"; break;
            case 900:re = "CM"; break;
            default:re = ""; break;
            }
            tmp.append(re);

            if (num % 10 == 0) 
            {
                num /= 10;
                po *= 10;
                ans = tmp + ans;
                tmp = "";
            }
        }
        return ans;
    }
};

