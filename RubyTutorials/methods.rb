#!/usr/bin/ruby

def test( a1="Ruby", a2="Perl")
   puts "The programming language is #{a1}"
   puts "The programming language is #{a2}"
end
test "C", "C++"
test

def func1	
	def func2 #nested function!
	return 'Hello from nested function!\n'
	end 
	func2
end

def test
   i = 100
   j = 10
   k = 0.1#return value will be the one of the last statement! this is by default
end
puts "test ret val=#{test}"

def test2
   i = 100
   j = 200
   k = 300
return i, j, k#we can also explicitly state what we are returning.
end
var = test2
puts var

def sample (*test)
   puts "The number of parameters is #{test.length}"
   for i in  0...test.length
      puts "The parameters are #{test[i]}"
   end
end
sample "Zara", "6", "F"
sample "Mac", "36", "M", "MCA"

class Accounts #methods public by default.
   def reading_charge #instance method
   end
   def Accounts.return_date #class method
   end
end

def bar 
end

alias foo bar
alias $MATCH $&

print func1

a=[1,2,3]

for i in 0..4
print i
end

print [1,2,3,4,5].select{|i| i>2}.map{|i| i*i}.map{|i| i-7}

print <<`EOC`                 # execute commands
	echo hi there
	echo lo there
#	ls -alr
EOC

params=Hash[:a1=>1,:a2=>'2',:anotherhash=>{:one1=>'3'}]
print params[:anotherhash][:one1]
params = {}        # Define a hash called 'params' (short for 'parameters').

params[:user] = { name: "Michael Hartl", email: "mhartl@example.com" }
params[:blabla]={:blabla2=>{:blabla3=>"blabla3"}}
print params[:blabla][:blabla2][:blabla3]
print params[:user][:email]

def givemehashes params
	print params[:a1],params[:a2],params[:anotherhash][:one1],"\n"
end

givemehashes params

