#!/bin/bash
# Generate a random battery percentage between 0 and 100
battery_level=$((RANDOM % 101))
# Log the battery level
echo "Battery level: $battery_level%"
# Check if battery level is below 20%
if [ $battery_level -lt 20 ]; then
echo "Battery low! Return to base!"
exit 1
fi
# Ping google.com to check network connectivity
ping -c 1 google.com &>/dev/null
# Check if ping command was successful
if [ $? -ne 0 ]; then
echo "Communication failure!"
exit 1
fi
# If both checks pass
echo "All systems operational!"

