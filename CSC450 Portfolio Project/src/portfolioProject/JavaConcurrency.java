package portfolioProject;

public class JavaConcurrency {

	    //Function that counts up to 20 from 0
	    public static void countingUp() {
	        System.out.println("Counting Up to 20:");
	        for (int i = 0; i <= 20; i++) {
	            System.out.print(i);
	            if (i != 20) {
	                System.out.print(", ");
	            }
	        }
	        System.out.println();
	    }

	    //Function that counts down to 0 from 20
	    public static void countingDown() {
	        System.out.println("Counting Down from 20:");
	        for (int i = 20; i >= 0; i--) {
	            System.out.print(i);
	            if (i != 0) {
	                System.out.print(", ");
	            }
	        }
	        System.out.println();
	    }

	    /* Main Method
	     * Runs 2 threads
	     * One that counts up
	     * One that counts down
	     */
	    public static void main(String[] args) {

	        // Thread 1: counting up
	        Thread t1 = new Thread(() -> countingUp());
	        t1.start();

	        try {
	            t1.join(); // Wait for t1 to finish
	        } 
	        catch (InterruptedException e) {
	            e.printStackTrace();
	        }

	        // Thread 2: counting down
	        Thread t2 = new Thread(() -> countingDown());
	        t2.start();

	        try {
	            t2.join(); // Wait for t2 to finish
	        } 
	        catch (InterruptedException e) {
	            e.printStackTrace();
	        }
	    }
	}
