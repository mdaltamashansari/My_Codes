student_scores = [97, 65, 88, 12, 45, 78, 99, 100, 54, 23, 67, 34, 89, 90, 91, 92, 93, 94, 95, 96]

for score in student_scores:
      sum = 0
      sum += score
print(sum)

# for loop range function
for number in range(1, 10):
      print(number)
      
# add 1 to 100 
total = 0
for number in range(1, 101):
   total += number
print(total)


# print 1 to 100 
for number in range(1, 101):
 if number % 3 == 0 and number % 5 == 0:
      print("FizzBuzz")
 elif number % 3 == 0:
      print("Fizz")
 elif number % 5 == 0:
      print("Buzz")
 else:
      print(number)