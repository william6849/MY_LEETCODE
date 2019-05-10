/*
 *
 *
 * */

class Solution
{
public:

    int extender(int a, int b, int N, char* s)
    {
        int i = 0;
        while ((a - i >= 0) && (b + i < N) && (s[a - i] == s[b + i]))
        {
            i++;
        }
        return i;
    }

    string longestPalindrome(string org)
    {
        string ans;
        int size = (int)org.size(), M = 0, R = 0, l = 0, p=(int)NULL;
        int z[2 * size + 1];
        char s[2 * size + 1];

        z[0] = 1;

        for (int i=0; i<(2 * size + 1); i++) {   //initial string.
            if (i % 2 == 0) {
                s[i] = '#';
            }
            else {
                s[i] = org[(i - 1) / 2];
            }
        }


        for (int i=1; i<(2 * size + 1); ++i)
        {
            int ii = 2 * M - i;  //-ii---M---i- ii is i's mirror
            int n = R + 1 - i;    // i~R 's length

            if (i > R)
            { // s[i] is not included by scanned seq;
                z[i] = extender(i, i, 2 * size + 1, s);
                M = i;
                R = i + z[i] - 1;

            }
            else if (z[ii] == n)
            {
                z[i] = n + extender(i - n, i + n, 2 * size + 1, s);
                M = i;
                R = i + z[i] - 1;
            }
            else
            {
                z[i] = min(z[ii], n);
            }

            if (z[i] > l)
            {
                l = z[p = i];
            }
        }


        /*
                int i =0;
                while(i!=2*size+1){
                    cout << s[i];
                    i++;
                }
                cout<<endl;
                i=0;
                while(i!=2*size+1){
                    cout << z[i];
                    i++;
                }

                int n = 0 , p;
                for(int i = 0; i< 2*size+1;i++){
                    if(z[i]>n)n=z[p=i];
                }
        */
        for (int i = (p - l + 1); i <= (p + l - 1); ++i)
        {
            if ((s[i] != '#') && (s[i] != '\0'))
            {
                ans.push_back(s[i]);
            }
        }
        return ans;


    }
};
