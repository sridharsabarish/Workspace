def mergeIntervals(intervals,n):
    intervals.sort(key=lambda x: x.start)
    index=0
    for i in range(1,n):
        if intervals[index].end >= intervals[i].start:
            intervals[index].end = max(intervals[index].end,intervals[i].end)
            intervals[index].start = min(intervals[index].start,intervals[i].start)
        else:
            index+=1
            intervals[index]=intervals[i]
    return index+1