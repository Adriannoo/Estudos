package org.example.repositories;

import jakarta.persistence.EntityManager;
import org.example.models.Produto;

import java.util.List;

public class ProdutoRepository {

    private EntityManager em;

    public ProdutoRepository (EntityManager em){
        this.em = em;
    }

    public Produto findById(Long id){
        return em.find(Produto.class, id);
    }

    public void create(Produto produto) {
        em.getTransaction().begin();
        em.persist(produto);
        em.getTransaction().commit();
    }

    public void update(Produto produto) {
        em.getTransaction().begin();
        em.persist(produto);
        em.getTransaction().commit();
    }

    public void delete(Produto produto) {
        em.getTransaction().begin();
        em.remove(em.contains(produto) ? produto : em.merge(produto));
        em.getTransaction().commit();
    }
    
    public List<Produto> findAll() {
        return em.createQuery("select p from produtos p", Produto.class).getResultList();
    }

    public List<Produto> findByName(String prefixo) {
        return em.createQuery("select p from produtos p where p.nome like :prefixo", Produto.class)
                .setParameter("prefixo", prefixo + "%")
                .getResultList();
    }
}
