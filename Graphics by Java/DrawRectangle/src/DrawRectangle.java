import java.awt.*;
import javax.swing.*;


public class DrawRectangle extends JFrame{

   
    public static void main(String[] args) {
        DrawRectangle f = new DrawRectangle();
        f.setSize(300, 300);
        f.setVisible(true);
    }
    
    public void paint(Graphics g){
        g.drawRect(10, 10, 60, 50);
        g.fillRect(100, 10, 60, 50);
        g.drawRoundRect(190, 10, 60, 50, 15, 15);
    }
    
}
