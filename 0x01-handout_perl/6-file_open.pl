#!/usr/bin/perl

open(fh, "5-operators.txt") or die "File '$5-operators.txt cant be opened:";

my $lines = <$fh>;
print "$lines\n";

my $file = '5-operators.txt';
open(FH, '<', $file) or die $!;
while(<FH>){
    print $_;
}
close(FH);