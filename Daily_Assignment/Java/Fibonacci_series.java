package com.daily.assigments;

public class Fibonacci_series {

    public static void main(String[] args) {
    	
        int n = 10; // number of terms
        int firstTerm = 0, secondTerm = 1;

        System.out.println("Fibonacci Series up to " + n + " terms:");

        for (int i = 1; i <= n; ++i) {
        	
            System.out.print(firstTerm + " ");

           int nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
    }

}
