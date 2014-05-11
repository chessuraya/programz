import javax.swing.*
import java.awt.*
import groovy.swing.SwingBuilder

def sB = new SwingBuilder()

def Panel1= {
    sB.panel(){
    button(text: 'Ok')
    button(text: 'Open')
    button(text: 'Close')
    }
}

def frame = sB.frame(title: "Flow Layout", size: [100,100], layout: new FlowLayout()){
    Panel1()
}

frame.setVisible(true)