import java.awt.*;
import javax.swing.*;

class MyFrame extends JComponent{
    public void paint(Graphics g){
        g.drawOval(200, 200, 200, 200);
    }
}
public class DrawOval {

    
    public static void main(String[] args) {
        JFrame window = new JFrame();
        window.setBounds(0, 0, 400, 400);
        window.getContentPane().add(new MyFrame());
        window.setVisible(true);
    }
    
}
