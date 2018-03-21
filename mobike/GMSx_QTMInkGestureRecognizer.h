//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface GMSx_QTMInkGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _touchStartLocation;
    struct CGPoint _touchCurrentLocation;
    _Bool _cancelOnDragOut;
    double _dragCancelDistance;
    struct CGRect _targetBounds;
}

@property(nonatomic) struct CGRect targetBounds; // @synthesize targetBounds=_targetBounds;
@property(nonatomic) _Bool cancelOnDragOut; // @synthesize cancelOnDragOut=_cancelOnDragOut;
@property(nonatomic) double dragCancelDistance; // @synthesize dragCancelDistance=_dragCancelDistance;
- (struct CGRect)effectiveTargetBounds;
- (_Bool)isTouchWithinTargetBounds;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)touchStartLocationInView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

