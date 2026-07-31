1# Write your MySQL query statement below
2
3SELECT DISTINCT author_id AS id FROM Views
4WHERE author_id = viewer_id
5ORDER BY id ASC;