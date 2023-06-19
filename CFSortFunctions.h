#ifndef CF_SORT_FUNCTIONS_H
#define CF_SORT_FUNCTIONS_H

void CFSortIndexes(CFIndex *indexBuffer, CFIndex count, CFOptionFlags opts, CFComparisonResult (^cmp)(CFIndex, CFIndex));

#endif // CF_SORT_FUNCTIONS_H