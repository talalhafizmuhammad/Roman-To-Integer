def roman_to_int(s)
  roman = {
    'I' => 1, 'V' => 5, 'X' => 10,
    'L' => 50, 'C' => 100, 'D' => 500, 'M' => 1000
  }

  total = 0
  prev = 0

  s.reverse.each_char do |ch|
    value = roman[ch]
    if value < prev
      total -= value
    else
      total += value
      prev = value
    end
  end

  total
end

s = "MCMXCIV"
puts "Roman numeral: #{s} → Integer: #{roman_to_int(s)}"
