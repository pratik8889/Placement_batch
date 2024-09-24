package com.daily.assigments;


	
	
public class Capital_latters {
    public static void main(String[] args) {
        String str = "Hello My Name Is Pratik";
        
        // Loop through the string and print only capital letters
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (Character.isUpperCase(ch)) {
                System.out.print(ch);
            }
        }
    }
}

