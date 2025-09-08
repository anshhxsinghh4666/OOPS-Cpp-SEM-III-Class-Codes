#!/bin/bash

# List of files in order
files=(
"1_Info.cpp"
"2_Declare.cpp"
"3_Addition.cpp"
"4_Area_of_Circle.cpp"
"5_Area_of_Traingle.cpp"
"6_Even_Or_Odd.cpp"
"7_Max_Number(2_Numbers).cpp"
"8_Max_Number(4_Numbers).cpp"
"9_Min_Number.cpp"
"10_Two_Digit_Check.cpp"
"11_Max_Number(3_Numbers).cpp"
"12_Four_Digit_Number.cpp"
"13_Vowels.cpp"
"14_Calculator.cpp"
"15_Area_&_Perimeter.cpp"
"16_Reverse_10_to_1_(While_Loop).cpp"
"17_Series_of_odd_Number_(While_Loop).cpp"
"18_Sum_of_Entered_Numbers_(While_Loop).cpp"
"19_Palindrome.cpp"
"20_Armstrong.cpp"
"21_Prime_Number.cpp"
"22_Max_Number_(10_Numbers).cpp"
"23_Min_Number_(10_Numbers).cpp"
"24_Even_Number_(10_Numbers).cpp"
"25_Count_+ve_-_ve_&_Zero_(10_Numbers).cpp"
"26_First_Even_Number_(10_Numbers).cpp"
"27_Table_of_Each_Number_(10_Numbers).cpp"
"28_Factorial_of_Each_Number_(10_Numbers).cpp"
"29_Uni_Dimension_Array.cpp"
"30_1-D_Array_Addition_of_Elements.cpp"
"31_Count_2_Digit_Even_No._Array.cpp"
"32_Count_Perfect_Numbers.cpp"
"33_2-D_Array_Operations.cpp"
"34_Even_Odd_Function.cpp"
"35_Functions.cpp"
)

# Commit files one by one
for f in "${files[@]}"; do
    git add "$f"
    git commit -m "Add $f"
done