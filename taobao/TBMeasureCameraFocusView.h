//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TBMeasureCameraFocusView : UIView
{
    _Bool _hideView;
    struct CGSize _originSize;
}

@property(nonatomic) _Bool hideView; // @synthesize hideView=_hideView;
@property(nonatomic) struct CGSize originSize; // @synthesize originSize=_originSize;
- (struct CGPoint)convertCenter:(struct CGPoint)arg1;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)showAnimAtPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (void)hide;
- (void)showAnimationAtPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

