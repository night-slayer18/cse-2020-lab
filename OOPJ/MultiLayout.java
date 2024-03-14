import java.awt.*;
import javax.swing.*;
  
public class MultiLayout
{
    public static void main(String[] args)
    {
        JPanel
            top    = new JPanel(),
            mid    = new JPanel(new GridBagLayout()),
            low    = new JPanel(new GridLayout(1,0)),
            center = new JPanel(new GridLayout(0,1));
        top.add(new JLabel("top panel"));
        top.setBorder(BorderFactory.createEtchedBorder());
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(0,2,0,2);
        gbc.weightx = 1.0;
        addComponents(new JLabel("label 1"), new JTextField(4), mid, gbc);
        addComponents(new JLabel("label 2"), new JTextField(4), mid, gbc);
        for(int j = 0; j < 4; j++)
            low.add(new JButton("button " + (j + 1)));
        center.add(top);
        center.add(mid);
        center.add(low);
        JFrame f = new JFrame();
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.getContentPane().add(center);
        f.setSize(400,400);
        f.setLocation(200,200);
        f.setVisible(true);
    }
  
    private static void addComponents(JLabel label, JTextField tf, JPanel p,
                                      GridBagConstraints gbc)
    {
        gbc.anchor = gbc.EAST;
        p.add(label, gbc);
        gbc.anchor = gbc.WEST;
        p.add(tf, gbc);
    }
}
