import java.awt.*;
import javax.swing.*;

class MyFrame extends JComponent{
    public void paint(Graphics g){
        g.setColor(Color.white);
        g.fillRect(0, 0, getWidth(), getHeight());
        
        g.setColor(Color.MAGENTA);
        //g.drawLine(100, 50, 100, 350);
        g.drawRoundRect(50, 50, 2, 350, 10, 10);
        
        g.setColor(Color.green);
        g.fillRect(53, 53, 350, 200);
        
        g.setColor(Color.red);
        g.fillOval(175, 100, 100, 100);
    }
}
public class BangladeshFlag {

    
    public static void main(String[] args) {
       JFrame window = new JFrame();
       window.setBackground(Color.white);
       window.setBounds(0, 0, 500, 500);
       window.getContentPane().add(new MyFrame());
       window.setTitle("National Flag Of Bangladesh");
       window.setVisible(true);
       
    }
    
}
