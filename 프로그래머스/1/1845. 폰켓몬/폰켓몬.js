function solution(nums) {
   const poketmon = [...new Set(nums)];
    limit = nums.length/2;
    return poketmon.length>limit ? limit : poketmon.length;
}