package org.example;

import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import org.example.models.Produto;
import org.example.repositories.CustomizerFactory;
import org.example.repositories.ProdutoRepository;

public class Main {

    public static void main(String[] args) {
        EntityManager em = CustomizerFactory.getEntityManager();
        ProdutoRepository produtoRepository = new ProdutoRepository(em);

//        Produto p1 = new Produto();
//        p1.setNome("Coca-cola");
//        p1.setDescricao("Refrigerante de cola");
//        p1.setPreco(100.0);
//
//        produtoRepository.create(p1);
//
//        var p2 = produtoRepository.findById(1L);
//        System.out.println(p2);

//        produtoRepository.findAll().stream().forEach(System.out::println);
//
//        var produto = produtoRepository.findById(1L);
//
//        produto.setNome("Atualizado");
//        produto.setDescricao("Atualizado");
//        produto.setPreco(10.50);
//
//        produtoRepository.update(produto);
//
//        produtoRepository.findAll().stream().forEach(System.out::println);

//        produtoRepository.findAll().stream().forEach(System.out::println);
//        var produto = produtoRepository.findById(2L);
//        produtoRepository.delete(produto);
//        produtoRepository.findAll().stream().forEach(System.out::println);


        em.close();
        CustomizerFactory.fechar();
    }
}