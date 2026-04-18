import javax.swing.*;
public class myswingapp {
    public static void main(String[] args) {
        JFrame frame = new JFrame("My First Swing App");  // 1. Create a window
        JButton button = new JButton("Click Me");         // 2. Add a button

        frame.add(button);           // 3. Add button to frame
        frame.setSize(300, 200);     // 4. Set size
        frame.setLayout(null);       // 5. No layout manager
        button.setBounds(100, 70, 100, 30); // Set button position
        frame.setVisible(true);      // 6. Make visible
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // Close on exit
    }
}
