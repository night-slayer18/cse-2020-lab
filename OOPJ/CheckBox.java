import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class Demo implements ItemListener
{
	JFrame jf;
	JTextField tf1,tf2;
	JCheckBox jc1,jc2;
	Demo()
	{
		jf= new JFrame("GUI");
		jf.setVisible(true);
		jf.setSize(500,500);
		jf.setLayout(new FlowLayout());
		tf1= new JTextField(20);
		tf2= new JTextField(20);
		jc1= new JCheckBox("YES");
		jc2= new JCheckBox("NO");
		jf.add(tf1);
		jf.add(tf2);
		jf.add(jc1);
		jf.add(jc2);
		jc1.addItemListener(this);
		jc2.addItemListener(this);
	}
	public void itemStateChanged(ItemEvent ie)
	{
		JCheckBox jc=(JCheckBox)ie.getSource();
		if(jc==jc1)
		{
			tf1.setText("YES has been clicked");
			tf2.setText("NO is unclicked");
		}
		else if(jc==jc2)
		{
			tf1.setText("NO has been clicked");
			tf2.setText("YES is unclicked");
		}
	}
}
class CheckBox
{
	public static void main(String args[])
	{
		Demo d= new Demo();
	}
}
