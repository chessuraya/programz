import groovy.swing.SwingBuilder
import java.awt.*
import javax.swing.*

def sB = new SwingBuilder()
def Buttons = {
    sB.panel(layout: new GridLayout(3,2)){
        button(text : '1')
        button(text : '2')
        button(text : '3')
        button(text : '4')
        button(text : '5')
        button(text : '6')   
    }
}

def Frame = sB.frame(title: 'Grid Example',defaultCloseOperation: WindowConstants.EXIT_ON_CLOSE){
    Buttons()
}

Frame.pack()
Frame.setVisible(true)