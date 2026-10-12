package com.swing.view.screens;

import javax.swing.*;

public class MenuPrincipal extends JFrame {

    private JDesktopPane jDesktopPane;

    public MenuPrincipal(){

        setSize(800, 600);
        setLayout(null);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(EXIT_ON_CLOSE);

        jDesktopPane = new JDesktopPane();
        add(jDesktopPane);
        jDesktopPane.setBounds(0, 0, 800, 600);

        // ---------------menus---------------
        JMenu menuPessoas = new JMenu("Pessoa");
        JMenuItem cadastroPessoas = new JMenuItem("Cadastro");
        JMenuItem buscarPessoas = new JMenuItem("Buscar");
        menuPessoas.add(cadastroPessoas);
        menuPessoas.add(buscarPessoas);

        JMenu menuSistemas = new JMenu("Sistema");
        JMenuItem sairSistema = new JMenuItem("Sair");
        menuSistemas.add(sairSistema);

        JMenuBar menuBar = new JMenuBar();
        menuBar.add(menuPessoas);
        menuBar.add(menuSistemas);

        setJMenuBar(menuBar);

        sairSistema.addActionListener(e -> {
            JOptionPane.showMessageDialog(null, "Sair");
            dispose();
        });

        cadastroPessoas.addActionListener(e -> {
            CadastroPessoa cadastroPessoa = new CadastroPessoa();
            jDesktopPane.add(cadastroPessoa);
            cadastroPessoa.setVisible(true);
        });

        setVisible(true);

    }
}
