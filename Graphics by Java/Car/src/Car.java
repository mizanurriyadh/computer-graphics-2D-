import javax.swing.*;
import java.awt.*;
import java.util.logging.Level;
import java.util.logging.Logger;

class MyFrame extends JComponent{
    public void paint(Graphics g){
       
        // Setting Background Color of the window
        g.setColor(Color.white); 
        
        // Setting Window
        g.fillRect(0, 0, getWidth(), getHeight()); 
        
        for(int i=0; i<=100; i=i+10){
        
                // Drawing the car body
                g.setColor(Color.CYAN);
                g.fillRect(100+i, 200, 250, 40);
                
                // Drawing the wheels
                g.setColor(Color.BLACK);
                g.fillOval(140+i, 240, 50, 50);
                g.fillOval(260+i, 240, 50, 50);
                
                // Coordinate arrays for the car cabin
                int x[] = {125+i, 175+i, 275+i, 325+i};
                int y[] = {200, 150, 150, 200};
                g.setColor(Color.lightGray);
                g.fillPolygon(x, y, 4);
                
        }
    }
}


public class Car{

    
    public static void main(String[] args) {
        JFrame window = new JFrame();
        window.setBounds(0, 0, 500, 500);
        window.getContentPane().add(new MyFrame());
        window.setTitle("Car");
        window.setVisible(true);
        
    }
    
}
