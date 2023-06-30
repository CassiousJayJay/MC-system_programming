#!/usr/bin/env perl
#scalers
my $name = "James";
my $age = 58;

print "$name\n";
print "$age\n";
print "My name is $name and am $age years old\n";

#arrays
my @names = ("James", "Kelvin", "John", "George");
my @id_numbers = (23, 42, 69, 50);
my @mixed   = ("Kelvin", 42, 77, 100);

print $names[1], "\n";
print $id_numbers[0], "\n";
print $mixed[$#mixed],"\n";

#if (@animals < 5) { ... }

print @names[0..2], "\n";
print my @sorted = sort @names,"\n";
print my @backwards = reverse @id_numbers;
