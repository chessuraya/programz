import javax.swing.*
import java.awt.*
import groovy.swing.SwingBuilder

def sB = new SwingBuilder()

def l1 = sB.label(text: "First: ")
def l2 = sB.label(text: "Second: ")
def l3 = sB.label(text: "Third: ")

def tf1 = sB.textField(text: "0.0", columns: 15)
def tf2 = sB.textField(text: "0.0", columns: 15)
def tf3 = sB.textField(text: "0.0", columns: 15)

def panel1 = {
    sB.panel(){
        label(l1)
        textField(tf1)
    }
}

def panel2 = {
    sB.panel(){
        label(l2)
        textField(tf2)
    }
}

def panel3 = {
    sB.panel(){
        label(l3)
        textField(tf3)
    }
}

def panel4 = {
    sB.panel(){
    button(text: '+')
    button(text: '-')
    button(text: '*')
    button(text: '/')
    button(text: 'C')
    }
}

def frame = sB.frame(title: "Simple Calculator", pack: true, layout: new GridLayout(4,1)){
    panel1()
    panel2()
    panel3()
    panel4()
}

frame.setVisible(true)