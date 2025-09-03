# Write your MySQL query statement below
select
    sample_id, 
    dna_sequence, 
    species,
        (LEFT(dna_sequence, 3) = 'ATG') AS has_start,
        (RIGHT(dna_sequence, 3) IN ('TAA','TAG','TGA')) AS has_stop,
        (dna_sequence LIKE '%ATAT%') AS has_atat,
        (dna_sequence LIKE '%GGG%') AS has_ggg
    from samples order by sample_id;
