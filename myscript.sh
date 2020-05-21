#! /bin/bash

#echo something
#echo Hello, World

#variables
# UPPERCASE by convention
# letters, numbers, underscores
#NAME='J'
#echo "My name is ${NAME}"

# user input
read -p "Enter your name: " NAME
#echo "Hello $NAME, nice to meet you"

#simple if statement
if ["$NAME" == "J"]
then
  echo "Your name is J"
elif ["NAME" == "K"]
then
  echo "Your name is K"
else
  echo "Your name is not J or K"
fi


#comparison
NUM1=3
NUM2=5
if ["$NUM1" -gt "$NUM2"]
then 
  echo "$NUM1 is greater than $NUM2"
else
  echo "$NUM1 is less than $NUM2"
fi
######
# val1 -eq val2 Returns true if the values are equal
# val1 -ne val2 Returns true if the values are not equal
# val1 -gt val2 Returns true if val1 is greater than val2
# val1 -ge val2 Returns true if val1 is greater than or equal to val2
# val1 -lt val2 Returns true if val1 is less than val2
# val1 -le val2 Returns true if val1 is less than or equal to val2
######
