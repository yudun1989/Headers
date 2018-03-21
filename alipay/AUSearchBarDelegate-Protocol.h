//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AUSearchBar, NSString;

@protocol AUSearchBarDelegate <NSObject>

@optional
- (void)searchBarOpenVoiceAssister:(AUSearchBar *)arg1;
- (void)searchBarBackButtonClicked:(AUSearchBar *)arg1;
- (void)searchBarCancelButtonClicked:(AUSearchBar *)arg1;
- (void)searchBarSearchButtonClicked:(AUSearchBar *)arg1;
- (_Bool)searchBarShouldClear:(AUSearchBar *)arg1;
- (_Bool)searchBar:(AUSearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(AUSearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarTextDidEndEditing:(AUSearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(AUSearchBar *)arg1;
- (_Bool)searchBarTextShouldEndEditing:(AUSearchBar *)arg1;
- (_Bool)searchBarTextShouldBeginEditing:(AUSearchBar *)arg1;
@end

