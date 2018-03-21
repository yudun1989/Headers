//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, QIMInteractBorderView;
@protocol TBInteractiveElementViewDelegate;

@interface TBInteractiveElementView : UIView
{
    _Bool _ignoreAllGestures;
    _Bool _deletable;
    _Bool _hierarchyChange;
    _Bool _isInEditMode;
    _Bool _isInitWithSelectMode;
    _Bool _startOneFingureRotateScale;
    unsigned long long _baceIndex;
    unsigned long long _zIndex;
    unsigned long long _gesturePriority;
    id <TBInteractiveElementViewDelegate> _elementDelegate;
    NSMutableSet *_gestureRecognizers;
    QIMInteractBorderView *_interactBorderView;
    double _initAngle;
    double _initalDistance;
    struct CGPoint _touchLocation;
    struct UIEdgeInsets _gestureRecognizerInsets;
}

@property(nonatomic) double initalDistance; // @synthesize initalDistance=_initalDistance;
@property(nonatomic) double initAngle; // @synthesize initAngle=_initAngle;
@property(nonatomic) _Bool startOneFingureRotateScale; // @synthesize startOneFingureRotateScale=_startOneFingureRotateScale;
@property(nonatomic) _Bool isInitWithSelectMode; // @synthesize isInitWithSelectMode=_isInitWithSelectMode;
@property(nonatomic) _Bool isInEditMode; // @synthesize isInEditMode=_isInEditMode;
@property(retain, nonatomic) QIMInteractBorderView *interactBorderView; // @synthesize interactBorderView=_interactBorderView;
@property(nonatomic) _Bool hierarchyChange; // @synthesize hierarchyChange=_hierarchyChange;
@property(retain, nonatomic) NSMutableSet *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(nonatomic) struct CGPoint touchLocation; // @synthesize touchLocation=_touchLocation;
@property(nonatomic) __weak id <TBInteractiveElementViewDelegate> elementDelegate; // @synthesize elementDelegate=_elementDelegate;
@property(nonatomic) struct UIEdgeInsets gestureRecognizerInsets; // @synthesize gestureRecognizerInsets=_gestureRecognizerInsets;
@property(nonatomic, getter=isDeletable) _Bool deletable; // @synthesize deletable=_deletable;
@property(nonatomic, getter=isIgnoreAllGestures) _Bool ignoreAllGestures; // @synthesize ignoreAllGestures=_ignoreAllGestures;
@property(nonatomic) unsigned long long gesturePriority; // @synthesize gesturePriority=_gesturePriority;
@property(nonatomic) unsigned long long zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) unsigned long long baceIndex; // @synthesize baceIndex=_baceIndex;
- (void).cxx_destruct;
- (void)onBorderViewFunction4Click;
- (void)onBorderViewFunction2Click;
- (void)onBorderViewFunction1Click;
- (struct CGRect)getRealBorderFrame;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (_Bool)checkPoint:(struct CGPoint)arg1 inView:(id)arg2 withInsets:(struct UIEdgeInsets)arg3;
- (void)exitEditMode;
- (void)enterEditMode;
- (id)createInteractBoundViewWithTransform:(struct CGAffineTransform)arg1;
- (void)move2Trash;
- (void)handleGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBeginByDefault:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerDidEnd:(id)arg1;
- (void)gestureRecognizerWillBegin:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

