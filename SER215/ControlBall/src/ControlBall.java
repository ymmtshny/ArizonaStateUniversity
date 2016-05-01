import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class ControlBall extends JFrame{

	private JButton jbtEnlarge = new JButton("enlarge");
	private JButton jbtShirnk  = new JButton("shirnk");
	private BallCanvas canvas = new BallCanvas();
	
	public ControlBall() {
		
		JPanel panel = new JPanel();
		panel.add(jbtEnlarge);
		panel.add(jbtShirnk);
		
		this.add(canvas, BorderLayout.CENTER);
		this.add(panel, BorderLayout.SOUTH);
		
		jbtEnlarge.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e) {
				canvas.enlarge();
			}
		});
		
		jbtShirnk.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e){
				canvas.shrink();
			}
		});
	}
	
	public static class BallCanvas extends JPanel {
		
		private int radius = 5; // Default ball radius
		
		public void enlarge(){
			  radius += 1; 
		      repaint();
		}
		
		public void shrink() {
			  radius -= 1; 
		      repaint();
		}
		
		protected void paintComponent(Graphics g) {
		      super.paintComponent(g);
		      g.drawOval(getWidth() / 2 - radius, getHeight() / 2 - radius, 
		                 2 * radius, 2 * radius);
	   }
		
	}
	
	public static void main(String[] args) {
		JFrame frame = new ControlBall();
		frame.setTitle("Contorl Ball");
		frame.setLocationRelativeTo(null);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setSize(200,200);
		frame.setVisible(true);
	}
	
}
