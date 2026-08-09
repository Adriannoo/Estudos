package com.swing.view.screens;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class CadastroPessoa extends JInternalFrame {
    public CadastroPessoa(){

        setSize(800, 600);
        setLayout(null);

        // ---------------- nome ----------------
        JLabel lblName = new JLabel("Nome: ");
        lblName.setBounds(10, 10, 80, 25);
        add(lblName);

        JTextField txtName = new JTextField("Ex: Joao");
        txtName.setBounds(50, 10, 80, 25);
        add(txtName);

        // ---------------- cpf --------------------
        JLabel lblCpf = new JLabel("Cpf: ");
        lblCpf.setBounds(10, 50, 80, 25);
        add(lblCpf);

        JTextField txtCpf = new JTextField("Ex: 123.456.789-00");
        txtCpf.setBounds(50, 50, 80, 25);
        add(txtCpf);

        // --------------- button -------------------
        JButton btnCadastrar = new JButton("Cadastrar");
        btnCadastrar.setBounds(10, 80, 100, 25);
        add(btnCadastrar);

        JTable tablePessoa = new JTable();

        var tableModel = new DefaultTableModel(new Object[]{"Nome", "Cpf"}, 0);
        tablePessoa.setModel(tableModel);
        add(tablePessoa);


        JScrollPane scroll = new JScrollPane(tablePessoa);
        scroll.setBounds(200, 10, 300, 300);
        add(scroll);

        // --------- event-listener----------

        btnCadastrar.addActionListener(e->{

            String nome = txtName.getText();
            String cpf = txtCpf.getText();

            String[] rowData = {nome, cpf};

            tableModel.addRow(rowData);

        });
    }
}
