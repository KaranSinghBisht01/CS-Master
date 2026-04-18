public class quesone{
    public static void main(String[] args) {
        // Check if the required arguments are provided
        if (args.length < 4) {
            System.out.println("Usage: java CommandLineInput <Name> <Course> <RollNo> <Semester>");
            return;
        }

        // Parsing command-line arguments
        String name = args[0];          // Name (String)
        String course = args[1];        // Course (String)
        int rollNo = Integer.parseInt(args[2]); // Converting RollNo to integer
        int semester = Integer.parseInt(args[3]); // Converting Semester to integer

        // Displaying the information
        System.out.println("Student Information:");
        System.out.println("Name       : " + name);
        System.out.println("Course     : " + course);
        System.out.println("Roll No    : " + rollNo);
        System.out.println("Semester   : " + semester);
    }
}