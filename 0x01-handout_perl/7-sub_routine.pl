#!/usr/bin/perl

sub square {
    my $num = shift;
    my $result = $num * $num;
    return $result;
}
$sq = square(8);
print "$sq"