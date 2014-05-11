import javax.swing.*
import java.awt.*
import groovy.swing.SwingBuilder

def sB = new SwingBuilder()

def frame = sB.frame(title: "Frame with Panel", 
size : [170,170]){
    sB.panel(background: Color.BLUE)
}

frame.setVisible(true)