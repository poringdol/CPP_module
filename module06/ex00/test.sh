#!/bin/sh
echo VALUE 0
echo
./convert 0
echo
echo VALUE -100
echo
./convert -100
echo
echo VALUE -200
echo
./convert -200
echo
echo VALUE 42
echo
./convert 42
echo
echo VALUE 42.4242
echo
./convert 42.4242
echo
echo VALUE 100
echo
./convert 100
echo
echo VALUE 500
echo
./convert 500
echo
echo VALUE +2147483647
echo
./convert +2147483647
echo
echo VALUE +2147483700
echo
./convert +2147483700
echo
echo VALUE -2147483648
echo
./convert -2147483648
echo
echo VALUE 5555555555.9999
echo
./convert 5555555555.9999
echo
echo VALUE 999999999999999999999999999999999999.99999999999
echo
./convert 9999999999999999999999999999999999999.99999999999
echo
echo VALUE nan
echo
./convert nan
echo
echo VALUE inf
echo
./convert inf
echo
echo VALUE -inf
echo
./convert -inf
echo
echo VALUE ABC
echo
./convert ABC
