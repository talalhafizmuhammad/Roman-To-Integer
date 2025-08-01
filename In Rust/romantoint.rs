use std::collections::HashMap;

fn roman_to_int(s: &str) -> i32 {
    let mut roman = HashMap::new();
    roman.insert('I', 1); roman.insert('V', 5); roman.insert('X', 10);
    roman.insert('L', 50); roman.insert('C', 100); roman.insert('D', 500); roman.insert('M', 1000);

    let mut total = 0;
    let mut prev = 0;
    for c in s.chars().rev() {
        let val = roman[&c];
        if val < prev {
            total -= val;
        } else {
            total += val;
            prev = val;
        }
    }
    total
}

fn main() {
    let s = "MCMXCIV";
    println!("Roman numeral: {} → Integer: {}", s, roman_to_int(s));
}
