package com.example.demo.repository;

import com.example.demo.entity.EntityCarro;
import org.springframework.data.jpa.repository.JpaRepository;

public interface CarroRepository extends JpaRepository <EntityCarro, Long> {

}
