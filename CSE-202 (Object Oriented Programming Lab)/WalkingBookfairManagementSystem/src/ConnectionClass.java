/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author maruf
 */
import java.sql.*;

public class ConnectionClass {
    Connection con; // connection
    Statement stm; // statement
    
    ConnectionClass(){
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            con = DriverManager.getConnection("jdbc:mysql://localhost:33060/Library", "maruf", "maruf");
            stm = con.createStatement();
        }catch(Exception err){
            err.printStackTrace();
        }
    }
    
    public static void main(String[] args) {
        new ConnectionClass();
    }
}
