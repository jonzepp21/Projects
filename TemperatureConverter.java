import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class TemperatureConverter {

	//Declare the GUI elements
	public static JFrame frmMain;
	public static JLabel lblCelsius;
	public static JTextField textCelsius;
	public static JLabel lblFahrenheit;
	public static JTextField textFahrenheit;
	public static JButton btnCalculateCtoF;
	public static JButton btnCalculateFtoC;
	
	
	
	public static void main(String[] args) {
	// Setting Up the frame
		frmMain=new JFrame("Temperature Converter by Jon Zepp");
		frmMain.setSize(150, 200);
		frmMain.setLayout(new FlowLayout());
		
	// create the GUI elements
		lblCelsius=new JLabel("Celsius");
		textCelsius=new JTextField(10);
		lblFahrenheit=new JLabel("Fahrenheit");
		textFahrenheit=new JTextField(10);
		btnCalculateFtoC = new JButton("Convert F to C");
		// add ActionListener
		btnCalculateFtoC.addActionListener(
				new ActionListener() {
					public void actionPerformed(ActionEvent e) {
						//convert f to c
						String fText=textFahrenheit.getText();
						double f = Double.parseDouble(fText);
						double c = (f-32)*5/9;
						textCelsius.setText(String.valueOf(c));
					}
				}
		);
		
		btnCalculateCtoF = new JButton("Convert C to F");
		// add ActionListener
		btnCalculateCtoF.addActionListener(
				new ActionListener() {
					public void actionPerformed(ActionEvent e) {
						//convert c to f
						String cText=textCelsius.getText();
						double c = Double.parseDouble(cText);
						double f = (c * 9/5+32);
						textFahrenheit.setText(String.valueOf(f));
					}
				}
		);


		
		
	// add elements to the frame
		frmMain.add(lblCelsius);
		frmMain.add(textCelsius);
		frmMain.add(lblFahrenheit);
		frmMain.add(textFahrenheit);
		frmMain.add(btnCalculateFtoC);
		frmMain.add(btnCalculateCtoF);
		
	// make the frame visible
		frmMain.setVisible(true);
	}
	
}
