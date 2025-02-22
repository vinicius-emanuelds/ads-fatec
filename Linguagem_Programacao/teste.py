from typing import List

def find_snake_on_grid(grid: List[str]) -> List[List[int]]:
    # Função para encontrar a cabeça da cobra
    def encontrar_cabeca(grid):
        for y, linha in enumerate(grid):
            for x, caractere in enumerate(linha):
                if caractere == 'h':
                    return (x, y)
        return None

    # Função para rastrear a cobra
    def rastrear_cobra(grid):
        cabeca = encontrar_cabeca(grid)
        if not cabeca:
            return []

        x, y = cabeca
        coordenadas = [[x, y]]
        
        # Mapeamento das direções
        direcoes = {
            '>': (1, 0),
            '<': (-1, 0),
            'v': (0, 1),
            '^': (0, -1)
        }

        # Rastrear a cobra a partir da cabeça
        while True:
            direcao = grid[y][x]
            if direcao not in direcoes:
                break  # Se a direção não for uma seta, pare

            dx, dy = direcoes[direcao]
            x += dx
            y += dy
            
            # Verifique se a nova posição está dentro dos limites
            if 0 <= x < len(grid[0]) and 0 <= y < len(grid):
                coordenadas.append([x, y])
            else:
                break  # Se sair dos limites, pare

        return coordenadas

    return rastrear_cobra(grid)

from unittest import TestCase

TestCase.maxDiff = None

class TestBasicFunctionality(TestCase):
    def test_should_work_on_a_snake_with_just_a_head(self):
        "should work on a snake with just a head"
        grid = [
            "   ",
            " h ",
            "   ",
        ]
        expected = [[1, 1]]
        self.assertEqual(find_snake_on_grid(grid), expected)

    def test_should_work_on_a_snake_with_a_head_and_one_tail_segment(self):
        "should work on a snake with a head and one tail segment"
        grid = [
            "   ",
            " h<",
            "   ",
        ]
        expected = [[1, 1], [2, 1]]
        self.assertEqual(find_snake_on_grid(grid), expected)

    def test_should_work_on_a_snake_with_a_head_and_two_tail_segments(self):
        "should work on a snake with a head and two tail segments"
        grid = [
            "   ",
            " h<",
            "  ^",
        ]
        expected = [[1, 1], [2, 1], [2, 2]]
        self.assertEqual(find_snake_on_grid(grid), expected)

    def test_should_work_on_a_snake_with_a_head_and_three_tail_segments(self):
        "should work on a snake with a head and three tail segments"
        grid = [
            "   ",
            " h<",
            " >^",
        ]
        expected = [[1, 1], [2, 1], [2, 2], [1, 2]]
        self.assertEqual(find_snake_on_grid(grid), expected)

    def test_should_work_on_a_snake_that_encircles_the_head(self):
        "should work on a snake that encircles the head"
        grid = [
            "v<<",
            "vh<",
            ">>^",
        ]
        expected = [
            [1, 1],
            [2, 1],
            [2, 2],
            [1, 2],
            [0, 2],
            [0, 1],
            [0, 0],
            [1, 0],
            [2, 0]
        ]
        self.assertEqual(find_snake_on_grid(grid), expected)

    def test_should_work_on_a_snake_that_encircles_the_head_counterclockwise(self):
        "should work on a snake that encircles the head counterclockwise"
        grid = [
            ">>v",
            "^h<",
            "^<<",
        ]
        expected = [
            [1, 1],
            [2, 1],
            [2, 0],
            [1, 0],
            [0, 0],
            [0, 1],
            [0, 2],
            [1, 2],
            [2, 2]
        ]
        self.assertEqual(find_snake_on_grid(grid), expected)

    def test_should_work_on_a_slightly_complex_snake(self):
        "should work on a slightly complex snake"
        grid = [
            " >>h   ",
            " ^   v ",
            " ^<<<< ",
        ]
        expected = [
            [3, 0],
            [2, 0],
            [1, 0],
            [1, 1],
            [1, 2],
            [2, 2],
            [3, 2],
            [4, 2],
            [5, 2],
            [5, 1]
        ]
        self.assertEqual(find_snake_on_grid(grid), expected)

    def test_should_work_on_a_more_complex_snake(self):
        "should work on a more complex snake"
        grid = [
            "           ",
            " >>v  >>>h ",
            " ^ >>>^ v  ",
            " ^<<<<<<<  ",
            "           ",
        ]
        expected = [
            [9, 1],
            [8, 1],
            [7, 1],
            [6, 1],
            [6, 2],
            [5, 2],
            [4, 2],
            [3, 2],
            [3, 1],
            [2, 1],
            [1, 1],
            [1, 2],
            [1, 3],
            [2, 3],
            [3, 3],
            [4, 3],
            [5, 3],
            [6, 3],
            [7, 3],
            [8, 3],
            [8, 2]
        ]
        self.assertEqual(find_snake_on_grid(grid), expected)
