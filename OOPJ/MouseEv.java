import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class Ex implements MouseListener
{
	JFrame jf;
	JTextField tf;
	JButton jb;
	Ex()
	{
		jf= new JFrame("GUI");
		jf.setVisible(true);
		jf.setSize(1000,500);
		jf.setLayout(new FlowLayout());
		tf=new JTextField(20);
		jb = new JButton("Click");
		jf.add(tf);
		jf.add(jb);
		jb.addMouseListener(this);
	}
	public void mousePressed(MouseEvent me)
	{
		tf.setText("Mouse is pressed");
	}
	public void mouseReleased(MouseEvent me)
	{
		tf.setText("Mouse is released");
	}
	public void mouseClicked(MouseEvent me)
	{
		tf.setText("Mouse is clicked");
	}
	public void mouseEntered(MouseEvent me)
	{
		tf.setText("Mouse has entered");
	}
	public void mouseExited(MouseEvent me)
	{
		tf.setText("Mouse has exited");
	}
}
class MouseEv
{
	public static void main(String args[])
	{
		Ex e= new Ex();
	}
}
