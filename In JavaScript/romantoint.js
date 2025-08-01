function romanToInt(s) {
    const roman = {
        'I': 1, 'V': 5, 'X': 10,
        'L': 50, 'C': 100, 'D': 500, 'M': 1000
    };

    let total = 0, prev = 0;
    for (let i = s.length - 1; i >= 0; i--) {
        const value = roman[s[i]];
        if (value < prev) total -= value;
        else {
            total += value;
            prev = value;
        }
    }
    return total;
}

// Test
let s = "MCMXCIV";
console.log(`Roman numeral: ${s} → Integer: ${romanToInt(s)}`);
