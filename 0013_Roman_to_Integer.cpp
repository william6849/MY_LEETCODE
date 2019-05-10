ass Solution //maybe can use STL(map) to improve this?
{ 
public:
    int romanToInt(string s) 
    {
        int sum = 0;
        int leng = s.size();
        int now = (int)NULL, next = (int)NULL;
        for (int i = 0; i <= leng - 1; ++i)
        {
            switch (s[i]) {
            case 'I':
                now = 1;
                break;
            case 'V':
                now = 5;
                break;
            case 'X':
                now = 10;
                break;
            case 'L':
                now = 50;
                break;
            case 'C':
                now = 100;
                break;
            case 'D':
                now = 500;
                break;
            case 'M':
                now = 1000;
                break;
            default:
                now = 0;
                break;
            }

            switch (s[i + 1])
            {
            case 'I':
                next = 1;
                break;
            case 'V':
                next = 5;
                break;
            case 'X':
                next = 10;
                break;
            case 'L':
                next = 50;
                break;
            case 'C':
                next = 100;
                break;
            case 'D':
                next = 500;
                break;
            case 'M':
                next = 1000;
                break;
            default:
                next = 0;
                break;
            }

            if (now >= next)
            {
                sum += now;
            }
            else 
            {
                sum -= now;
            }
        }
        return sum;
    }
};

