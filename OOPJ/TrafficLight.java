import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class TrafficLight extends Canvas implements ActionListener
{
	String s= new String();
	void AddPanel(JFrame f)
	{
		JRadioButton r,y,g;
		ButtonGroup b;
		JPanel p;
		r=new JRadioButton("STOP");
		y=new JRadioButton("READY");
		g=new JRadioButton("GO");
		b=new ButtonGroup();
		p=new JPanel();
		p.add(r);
		p.add(y);
		p.add(g);
		b.add(r);
		b.add(y);
		b.add(g);
		f.add(p,BorderLayout.NORTH);
		r.addActionListener(this);
		y.addActionListener(this);
		g.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ae)
	{
		s=ae.getActionCommand();
		repaint();
	}
	public void paint(Graphics g)
	{
		g.setColor(Color.black);
		g.drawRect(10,20,300,100);
		g.fillRect(10,20,300,100);
		g.setColor(Color.white);
		g.drawOval(20,30,80,80);
		g.drawOval(120,30,80,80);
		g.drawOval(220,30,80,80);
		if(s.equals("STOP"))
		{
			g.setColor(Color.red);
			g.fillOval(20,30,80,80);
		}
		if(s.equals("READY"))
		{
			g.setColor(Color.yellow);
			g.fillOval(120,30,80,80);
		}
		if(s.equals("GO"))
		{
			g.setColor(Color.green);
			g.fillOval(220,30,80,80);
		}
	}
	public static void main(String ag[])
	{
		traffic t= new traffic();
		JFrame f= new JFrame("TRAFFIC LIGHT");
		f.add(t,BorderLayout.CENTER);
		t.AddPanel(f);
		f.setSize(320,200);
		f.setDefaultCloseOperation(f.EXIT_ON_CLOSE);
		f.setVisible(true);
	}
} 
		
