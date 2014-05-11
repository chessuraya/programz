import javax.swing.*
import java.awt.*
import groovy.swing.SwingBuilder

def sB = new SwingBuilder()

def frame = sB.frame(title: "Hello Out There!", 
size : [170,170]){
    sB.panel(background: Color.BLUE)
}

frame.setVisible(true)