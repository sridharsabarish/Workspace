// Source : https://leetcode.com/problems/water-bottles/
func numWaterBottles(numBottles int, numExchange int) int {
	totalDrinkable:=numBottles;
	remainder:=0;
	newlyReclaimed:=0
	for numBottles > 0 {
		newlyReclaimed=(int) ((numBottles+remainder)/numExchange)
		totalDrinkable=totalDrinkable + newlyReclaimed
		remainder=((numBottles+remainder)%numExchange)
		numBottles=newlyReclaimed
		}
	return totalDrinkable
	}