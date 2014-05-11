import groovy.swing.SwingBuilder
import java.awt.*
import javax.swing.*

def sB = new SwingBuilder()

def buttons = {
    sB.panel(layout : new BorderLayout()){
    button(text : 'B1', constraints : BorderLayout.NORTH)
    button(text : 'B2', constraints : BorderLayout.SOUTH)
    button(text : 'B3', constraints : BorderLayout.WEST)
    button(text : 'B4', constraints : BorderLayout.EAST)
    button(text : 'B5', constraints : BorderLayout.CENTER)
    }
}

def frame = sB.frame(
    title: 'BorderExample.java', location : [100,100], size : [600,600], 
     defaultCloseOperation: WindowConstants.EXIT_ON_CLOSE){
   buttons()
}

frame.pack()
frame.setVisible(true)