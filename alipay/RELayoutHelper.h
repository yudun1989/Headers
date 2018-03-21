//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RELayoutHelper : NSObject
{
}

+ (void)addExpiredStampToView:(id)arg1;
+ (id)crowdNoLabelWithCrowdNo:(id)arg1;
+ (double)remainingHeightInTableView:(id)arg1;
+ (id)buttonWithWechatStyle;
+ (id)buttonWithAlipayFriendsStyle;
+ (id)systemButtonWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)systemButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (void)appendToParentView:(id)arg1 subview:(id)arg2 prevView:(id)arg3 topInset:(double)arg4;
+ (void)appendAtBottomOfParentView:(id)arg1 subview:(id)arg2 topInset:(double)arg3;
+ (id)topFlapView;
+ (id)topFlapHeaderViewWithHeight:(double)arg1;
+ (void)adjustViewFrameWithDeltaHeight:(id)arg1 deltaHeight:(double)arg2;
+ (struct CGRect)rectWithRect:(struct CGRect)arg1 deltaHeight:(double)arg2;
+ (struct CGRect)rectWithRect:(struct CGRect)arg1 height:(double)arg2;
+ (id)wrapperViewWithViewsAndTopInsets:(id)arg1 bottomInset:(double)arg2 topInset:(double)arg3;
+ (id)wrapperViewWithViewsAndTopInsets:(id)arg1 bottomInset:(double)arg2;
+ (id)amountViewWithHeight:(double)arg1 amount:(id)arg2;
+ (id)labelWithHeight:(double)arg1 size:(double)arg2 color:(id)arg3 text:(id)arg4;
+ (id)avatarViewWithHeight:(double)arg1 displayInfo:(id)arg2;

@end

