import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class Ex implements ActionListener
{
	JFrame jf;
	JTextArea tf;
	JButton b,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30;
	Ex()
	{
		jf=new JFrame("KEYBOARD");
		jf.setSize(500,500);
		jf.setLayout(new GridLayout(8,6,20,20));
		tf= new JTextArea();
		tf.setBounds(30,10,200,200);
		b1= new JButton("a");
		b2= new JButton("b");
		b3= new JButton("c");
		b4= new JButton("d");
		b5= new JButton("e");
		b6= new JButton("f");
		b7= new JButton("g");
		b8= new JButton("h");
		b9= new JButton("i");
		b10= new JButton("j");
		b11= new JButton("k");
		b12= new JButton("l");
		b13= new JButton("m");
		b14= new JButton("n");
		b15= new JButton("o");
		b16= new JButton("p");
		b17= new JButton("q");
		b18= new JButton("r");
		b19= new JButton("s");
		b20= new JButton("t");
		b21= new JButton("u");
		b22= new JButton("v");
		b23= new JButton("w");
		b24= new JButton("x");
		b25= new JButton("y");
		b26= new JButton("z");
		b27= new JButton("<-");
		b28= new JButton("▭▭▭");
		b30=new JButton("ENTER");
		b29= new JButton("AC");
		jf.add(tf);
		jf.add(b1);
		jf.add(b2);
		jf.add(b3);
		jf.add(b4);
		jf.add(b5);
		jf.add(b6);
		jf.add(b7);
		jf.add(b8);
		jf.add(b9);
		jf.add(b10);
		jf.add(b11);
		jf.add(b12);
		jf.add(b13);
		jf.add(b14);
		jf.add(b15);
		jf.add(b16);
		jf.add(b17);
		jf.add(b18);
		jf.add(b19);
		jf.add(b20);
		jf.add(b21);
		jf.add(b22);
		jf.add(b23);
		jf.add(b24);
		jf.add(b25);
		jf.add(b26);
		jf.add(b27);
		jf.add(b28);
		jf.add(b30);
		jf.add(b29);
		jf.setVisible(true);
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		b5.addActionListener(this);
		b6.addActionListener(this);
		b7.addActionListener(this);
		b8.addActionListener(this);
		b9.addActionListener(this);
		b10.addActionListener(this);
		b11.addActionListener(this);
		b12.addActionListener(this);
		b13.addActionListener(this);
		b14.addActionListener(this);
		b15.addActionListener(this);
		b16.addActionListener(this);
		b17.addActionListener(this);
		b18.addActionListener(this);
		b19.addActionListener(this);
		b20.addActionListener(this);
		b21.addActionListener(this);
		b22.addActionListener(this);
		b23.addActionListener(this);
		b24.addActionListener(this);
		b25.addActionListener(this);
		b26.addActionListener(this);
		b27.addActionListener(this);
		b28.addActionListener(this);
		b29.addActionListener(this);
		b30.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ae)
	{
		try
		{
			String s3;
			b=(JButton)ae.getSource();
			if(b==b1)
			{
				tf.setText(tf.getText()+"k");
			}
			else if(b==b2)
			{
				tf.setText(tf.getText()+"u");
			}
			else if(b==b3)
			{
				tf.setText(tf.getText()+"z");
			}
			else if(b==b4)
			{
				tf.setText(tf.getText()+"e");
			}
			else if(b==b5)
			{
				tf.setText(tf.getText()+"f");
			}
			else if(b==b6)
			{
				tf.setText(tf.getText()+"g");
			}
			else if(b==b7)
			{
				tf.setText(tf.getText()+"y");
			}
			else if(b==b8)
			{
				tf.setText(tf.getText()+"v");
			}
			else if(b==b9)
			{
				tf.setText(tf.getText()+"b");
			}
			else if(b==b10)
			{
				tf.setText(tf.getText()+"w");
			}
			else if(b==b11)
			{
				tf.setText(tf.getText()+"a");
			}
			else if(b==b12)
			{
				tf.setText(tf.getText()+"x");
			}
			else if(b==b13)
			{
				tf.setText(tf.getText()+"d");
			}
			else if(b==b14)
			{
				tf.setText(tf.getText()+"c");
			}
			else if(b==b15)
			{
				tf.setText(tf.getText()+"n");
			}
			else if(b==b16)
			{
				tf.setText(tf.getText()+"o");
			}
			else if(b==b17)
			{
				tf.setText(tf.getText()+"h");
			}
			else if(b==b18)
			{
				tf.setText(tf.getText()+"s");
			}
			else if(b==b19)
			{
				tf.setText(tf.getText()+"i");
			}
			else if(b==b20)
			{
				tf.setText(tf.getText()+"m");
			}
			else if(b==b21)
			{
				tf.setText(tf.getText()+"r");
			}
			else if(b==b22)
			{
				tf.setText(tf.getText()+"j");
			}
			else if(b==b23)
			{
				tf.setText(tf.getText()+"q");
			}
			else if(b==b24)
			{
				tf.setText(tf.getText()+"k");
			}
			else if(b==b25)
			{
				tf.setText(tf.getText()+"l");
			}
			else if(b==b26)
			{
				tf.setText(tf.getText()+"p");
			}
			else if(b==b27)
			{
				tf.setText(tf.getText().substring(0,tf.getText().length()-1));
			}
			else if(b==b28)
			{
				tf.setText(tf.getText()+" ");
			}
			else if(b==b29)
			{	
				tf.setText("");		
			}
			else if(b==b30)
			{
				tf.setText(tf.getText()+"\n");
			}
		}
		catch(ArithmeticException e)
		{
			System.out.println("exception caught "+e);
		}
	}	
}
class Keyboard
{
	public static void main(String args[])
	{
		Ex e= new Ex();
	}
}



	
