//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSString, SGTSearchField;

@protocol SGTSearchFieldQueryScopeDelegate <NSObject>
- (NSString *)searchFieldWidenScopeMenuSpinnerTitleString:(SGTSearchField *)arg1;
- (NSString *)searchFieldWidenScopeMenuItemTitleString:(SGTSearchField *)arg1;
- (NSString *)searchFieldWidenScopeMenuTitleString:(SGTSearchField *)arg1;
- (void)searchFieldWidenQueryScope:(SGTSearchField *)arg1;
- (BOOL)searchField:(SGTSearchField *)arg1 hasResultsForQuery:(NSString *)arg2;
- (BOOL)searchFieldUsesRestrictedQueryScope:(SGTSearchField *)arg1;
@end

