//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImage, UIImageView;
@protocol TBPHPasterItemViewDelegate;

@interface TBPHPasterItemView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _onFirst;
    id <TBPHPasterItemViewDelegate> _delegate;
    long long _pasterId;
    UIImage *_pasterItemImage;
    double _minWidth;
    double _minHeight;
    double _deltaAngle;
    UIImageView *_imageContentView;
    UIImageView *_deleteImageView;
    UIImageView *_sizeCtrlView;
    struct CGPoint _prevPoint;
    struct CGPoint _startPoint;
    struct CGPoint _touchStart;
    struct CGRect _stageRect;
}

@property(retain, nonatomic) UIImageView *sizeCtrlView; // @synthesize sizeCtrlView=_sizeCtrlView;
@property(retain, nonatomic) UIImageView *deleteImageView; // @synthesize deleteImageView=_deleteImageView;
@property(retain, nonatomic) UIImageView *imageContentView; // @synthesize imageContentView=_imageContentView;
@property(nonatomic) struct CGPoint touchStart; // @synthesize touchStart=_touchStart;
@property(nonatomic) double deltaAngle; // @synthesize deltaAngle=_deltaAngle;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) struct CGPoint prevPoint; // @synthesize prevPoint=_prevPoint;
@property(nonatomic) struct CGRect stageRect; // @synthesize stageRect=_stageRect;
@property(retain, nonatomic) UIImage *pasterItemImage; // @synthesize pasterItemImage=_pasterItemImage;
@property(nonatomic, getter=isOnFirst) _Bool onFirst; // @synthesize onFirst=_onFirst;
@property(nonatomic) long long pasterId; // @synthesize pasterId=_pasterId;
@property(nonatomic) __weak id <TBPHPasterItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panGestureRecognizer:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tapGestureRecognizer:(id)arg1;
- (void)deleteClicked;
- (void)becomeOnFirst;
- (void)resetImageViewFrame;
- (void)setupImageViewWithImage:(id)arg1;
- (id)initWithStageView:(id)arg1 image:(id)arg2 pasterId:(long long)arg3;
- (void)remove;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

