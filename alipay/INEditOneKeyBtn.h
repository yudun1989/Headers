//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface INEditOneKeyBtn : UIView
{
    UIView *_logoView;
    UIButton *_oneKeyBtn;
    CDUnknownBlockType _actionBlock;
}

+ (id)onekeyBtn;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)actionForOnekey:(id)arg1;
- (void)didMoveToSuperview;
- (void)akeyPlayClickAnimation;
- (void)animationOnekeyBtn;
- (void)initialize;
- (id)init;

@end

