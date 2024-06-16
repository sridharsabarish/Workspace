func twoSum(nums []int, target int) []int {
    for i, s := range nums {
	for j,p := range(nums){
        if(i!=j){
            if(s+p==target){
                out := []int{i,j}
                return out
            }
        }

    }
}
out := []int{-1,-1}
return out
}
