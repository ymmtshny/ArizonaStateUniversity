import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
/**
 * Created by shinyayamamoto on 2016/10/19.
 */
public class Assignment2 extends JFrame  implements ActionListener {

    public static void main(String args[]) {
        Assignment2 frame = new Assignment2();
        frame.setVisible(true);
        frame.setBounds(100,100,400,150);

    }

    Assignment2() {



        setTitle("Convert Binary to Decimal");


        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(2, 2));
        //textfiled

        JLabel label_A = new JLabel("Binary String");
        JTextField textfiled_A = new JTextField();
        panel.add(label_A);
        panel.add(textfiled_A);

        JLabel label_B = new JLabel("Decimal String");
        JTextField textfiled_B = new JTextField();
        panel.add(label_B);
        panel.add(textfiled_B);


        JPanel panel_B = new JPanel();
        panel_B.setLayout(new GridLayout(1, 1));
        JButton button1 = new JButton("Convert to Decimal");
        panel_B.add(button1);
        button1.addActionListener(this);

        getContentPane().add(panel, BorderLayout.NORTH);
        getContentPane().add(panel_B, BorderLayout.SOUTH);
    }


    public void actionPerformed(ActionEvent e) {


        int decimalValue = Integer.parseInt("110", 2);
        System.out.print(decimalValue);

    }
}
