
#!/bin/bash
# This script calculates simple interest given principal,
# annual rate of interest and time period in years.

echo "Enter the principal:"
read p
echo "Enter rate of interest per year:"
read r
echo "Enter time period in years:"
read t

# Calculate simple interest
s=$(echo "$p * $t * $r / 100" | bc)

echo "The simple interest is: "
echo $s
