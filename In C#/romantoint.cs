using System;
using System.Collections.Generic;

class Roman
{
    public static int RomanToInt(string s)
    {
        var roman = new Dictionary<char, int> {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0, prev = 0;
        for (int i = s.Length - 1; i >= 0; i--)
        {
            int val = roman[s[i]];
            if (val < prev)
                total -= val;
            else {
                total += val;
                prev = val;
            }
        }
        return total;
    }

    static void Main()
    {
        string s = "MCMXCIV";
        Console.WriteLine($"Roman numeral: {s} → Integer: {RomanToInt(s)}");
    }
}
