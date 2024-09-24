package com.daily.assigments;


	public class Lower_class {
	    public static void main(String[] args) {
	        String str = "Pratik";
	        
	        // Loop through the string and print only lowercase letters
	        for (int i = 0; i < str.length(); i++) {
	            char ch = str.charAt(i);
	            if (Character.isLowerCase(ch)) {
	                System.out.print(ch);
	            }
	        }
	    }
	}


