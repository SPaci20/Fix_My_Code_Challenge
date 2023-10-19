###
#
#  Sort integer arguments (ascending) 
#
###

result = []
ARGV.each do |arg|
    # Check if the argument is a valid integer
    if arg =~ /^-?\d+$/
        i_arg = arg.to_i
        result << i_arg
    end
end

result.sort! # Sort the integers in ascending order

result.each do |num|
    puts num
end
