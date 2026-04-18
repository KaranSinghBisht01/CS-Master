// Program to take input from Command Line and display user details
public class CommandLineInput {
    public static void main(String[] args) {
        // Ensure at least 4 arguments are provided
        // if (args.length < 4) {
        //     System.out.println("Usage: java CommandLineInput <Name> <Course> <RollNo> <Semester>");
        //     return;
        // }

        // Taking input from command line
        String name = args[0];       // First argument is Name
        String course = args[1];     // Second argument is Course
        int rollNo = Integer.parseInt(args[2]);  // Third argument is Roll Number (converted to int)
        int semester = Integer.parseInt(args[3]); // Fourth argument is Semester (converted to int)

        // Displaying the information
        System.out.println("Name: " + name);
        System.out.println("Course: " + course);
        System.out.println("University Roll No: " + rollNo);
        System.out.println("Semester: " + semester);
    }
}
