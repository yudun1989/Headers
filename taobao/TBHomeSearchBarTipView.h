//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TBHomeSearchBarTipView : UIView
{
}

+ (id)imageWithColor:(id)arg1 changeImage:(id)arg2;
+ (void)showFamilyTipOnView:(id)arg1 arrowPoint:(struct CGPoint)arg2 tipText:(id)arg3;
+ (void)showTipOnView:(id)arg1 arrowPoint:(struct CGPoint)arg2 tipText:(id)arg3;
- (id)roundedCornerImage:(id)arg1 WithCornerRadius:(double)arg2;
- (void)dismissFromSuperView;
- (id)initWithArrowPoint:(struct CGPoint)arg1 tipText:(id)arg2;
- (id)initFamilyTipWithArrowPoint:(struct CGPoint)arg1 tipText:(id)arg2;

@end

