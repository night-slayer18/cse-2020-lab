import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class ex implements ItemListener
{
	JFrame jf;
	JTextField ft1;
	JCheckBox jc;
	ex()
	{
		jf= new JFrame("GUI");
		jf.setVisible(true);
		jf.setSize(500,500);
		jf.setLayout(new FlowLayout());
		ft1=new JTextField(20);
		jc=new JCheckBox("tick");
		jf.add(ft1);
		jf.add(jc);
		jc.addItemListener(this);
	}
	public void itemStateChanged(ItemEvent ie)
	{
		boolean b = jc.isSelected();
		if(b==true)
			ft1.setText("checkbox is selected");
		else
			ft1.setText("checkbox is not selected");
	}
}
class Checkbox
{
	public static void main(String args[])
	{
		ex e= new ex();
	}
}
		
