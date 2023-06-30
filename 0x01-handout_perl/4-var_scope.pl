#!/user/bin/perl

#variable scoping
my $name = "James";
my $age = 75;

if ($age){
    my $phone = "Samsung";

    print "MY name is $name\n";
    print "I am $age years old\n";
}
print "$name\n";
print "$phone\n"; # it prints nothing because phone belongs only to the scope

#if statements
my $price = 500;
if ($price > 400){
    print "Price too small"
}elsif (price == 500){
    print "You can get te product"
}else{
    print "invalid input"
};

# while statement
$counter = 5;
while ($counter >= 0){
    $counter = $counter - 1;
     print "Welcome\n";
}

#for loops
@animals = ("elephant", "lion", "hippo", "cow");
#foreach loop
foreach $word(@animals){
    print "$word\n"
}