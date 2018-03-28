//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedScrollView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView, _TTHeaderScrollViewDelegateForwarder;
@protocol TTHeaderScrollViewDelegate, TTHeaderViewProtocol;

@interface TTHeaderScrollView : SSThemedScrollView <UIGestureRecognizerDelegate>
{
    _Bool _isObserving;
    _Bool _lock;
    _Bool _animationEnable;
    id <TTHeaderScrollViewDelegate> _delegate;
    UIView<TTHeaderViewProtocol> *_headerView;
    UIView *_contentView;
    _TTHeaderScrollViewDelegateForwarder *_delegateForwarder;
    NSMutableArray *_observedScrollViews;
}

@property(retain, nonatomic) NSMutableArray *observedScrollViews; // @synthesize observedScrollViews=_observedScrollViews;
@property(retain, nonatomic) _TTHeaderScrollViewDelegateForwarder *delegateForwarder; // @synthesize delegateForwarder=_delegateForwarder;
@property(nonatomic) _Bool animationEnable; // @synthesize animationEnable=_animationEnable;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView<TTHeaderViewProtocol> *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)switchScrollViewObserverOn:(_Bool)arg1;
- (void)scrollDown;
- (void)scrollUp;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)changeContentOffssetWithAnimation;
- (void)scrollView:(id)arg1 setContentOffset:(struct CGPoint)arg2;
- (void)removeObservedViews;
- (void)addObservedView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverFromView:(id)arg1;
- (void)addObserverToView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak id <TTHeaderScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)initialize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

