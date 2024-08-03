int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    int intersection_start = max(start1, start2);
    int intersection_end = min(end1, end2);
    
    if (intersection_start > intersection_end) {
        return "NO";
    }
    
    int intersection_length = intersection_end - intersection_start + 1;
    
    if (is_prime(intersection_length)) {
        return "YES";
    } else {
        return "NO";
    }
}