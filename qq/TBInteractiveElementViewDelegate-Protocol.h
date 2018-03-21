//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class TBInteractiveElementView, UIGestureRecognizer;

@protocol TBInteractiveElementViewDelegate <NSObject>

@optional
- (void)elementGestureRecognizerDidEnd:(TBInteractiveElementView *)arg1 gesture:(UIGestureRecognizer *)arg2;
- (void)elementGestureRecognizerWillBegin:(TBInteractiveElementView *)arg1 gesture:(UIGestureRecognizer *)arg2;
- (void)elementEditIconClicked:(TBInteractiveElementView *)arg1;
- (void)elementMove2Trash:(TBInteractiveElementView *)arg1;
- (void)elementClicked:(TBInteractiveElementView *)arg1;
- (void)elementMoveEnded:(TBInteractiveElementView *)arg1;
- (void)elementMoving:(TBInteractiveElementView *)arg1;
- (void)elementLongPressEnded:(TBInteractiveElementView *)arg1;
- (void)elementLongPressBegan:(TBInteractiveElementView *)arg1;
@end

