import java.awt.*;
import javax.swing.*;


class MyCanvas extends JComponent{
    public void paint(Graphics g){
        g.drawLine(20, 20, 200, 200);
    }
}

public class DrawLine{

    
    public static void main(String[] args) {
       JFrame window = new JFrame();
       window.setBounds(30, 30, 300, 300);
       window.getContentPane().add(new MyCanvas());
       window.setVisible(true);
    }
    
}
