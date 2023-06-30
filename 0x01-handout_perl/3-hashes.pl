#!/usr/bin/perl
#ashes

my %car_owner = ("Audi", "James", "BMW", "Cassious", "Toyota", "Prince");
print $car_owner{"BMW"},"\n";
print my @car = keys %car_owner,"\n";
print my @car = values %car_owner,"\n";

my $variables = {
    car => {
        description => "BMW",
        price => 5000,
    },
    details => {
        description => "name",
        age => 30,
    },
    garget => {
        description => "laptop",
        model => 'Dell',
    },
};
print "car price  is worthy $variables->{'car'}->{'price'}\n";
print "Garget model is $variables->{'garget'}->{'model'}"