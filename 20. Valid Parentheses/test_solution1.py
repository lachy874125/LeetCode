import unittest
from solution1 import Solution

class TestSolution(unittest.TestCase):
	def setUp(self):
		"""Create Solution object and some test inputs"""
		self.test_solution = Solution()
		self.inputs = {
			"()" : True,
			"()[]{}" : True,
			"(]" : False,
			"([)]" : False,
			"{()}" : True,
			"{([]{})[]}" : True,
			"(" : False,
			"]" : False,
			"(){}}{" : False
		}

	def test_inputs(self):
		"""Test that function returns correct output for each input"""
		for input, result in self.inputs.items():
			self.assertEqual(self.test_solution.isValid(input),result,f"Input \"{input}\" failed")

if __name__ == '__main__':
	unittest.main()