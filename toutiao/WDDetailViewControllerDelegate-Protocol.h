//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIScrollView;
@protocol TTCommentViewControllerProtocol;

@protocol WDDetailViewControllerDelegate <NSObject>
- (void)wd_commentViewController:(id <TTCommentViewControllerProtocol>)arg1 didSelectWithInfo:(NSDictionary *)arg2;
- (void)wd_detailViewControllerWriteCommentWithCondition:(NSDictionary *)arg1;
- (void)wd_detailViewControllerWriteCommentWithReservedText:(NSString *)arg1;
- (void)wd_detailViewControllerDidScroll:(UIScrollView *)arg1 index:(long long)arg2;
- (void)wd_detailViewControllerShowIndicatorPolicyView;
- (void)wd_detailViewControllerShowSlideHelperView;
- (void)wd_detailViewControllerAfterDeleteAnswer;
@end

