//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class CADisplayLink, NSIndexPath, UILongPressGestureRecognizer, UIView;
@protocol ChannelsCellCollectionViewDataSource, ChannelsCellCollectionViewDelegate;

@interface WBChannelsCollectionView : UICollectionView
{
    _Bool _didChange;
    _Bool _enablePressGesture;
    _Bool _edgeScrollEable;
    _Bool _editing;
    _Bool _acrossDrag;
    id <ChannelsCellCollectionViewDelegate> _m_delegate;
    id <ChannelsCellCollectionViewDataSource> _m_dataSource;
    double _minimumPressDuration;
    unsigned long long _state;
    NSIndexPath *_originalIndexPath;
    NSIndexPath *_moveIndexPath;
    UIView *_tempMoveCell;
    UILongPressGestureRecognizer *_longPressGesture;
    CADisplayLink *_edgeTimer;
    unsigned long long _scrollDirection;
    double _oldMinimumPressDuration;
    struct CGPoint _lastPoint;
}

@property(nonatomic) double oldMinimumPressDuration; // @synthesize oldMinimumPressDuration=_oldMinimumPressDuration;
@property(nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(retain, nonatomic) CADisplayLink *edgeTimer; // @synthesize edgeTimer=_edgeTimer;
@property(nonatomic) __weak UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) __weak UIView *tempMoveCell; // @synthesize tempMoveCell=_tempMoveCell;
@property(retain, nonatomic) NSIndexPath *moveIndexPath; // @synthesize moveIndexPath=_moveIndexPath;
@property(retain, nonatomic) NSIndexPath *originalIndexPath; // @synthesize originalIndexPath=_originalIndexPath;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool acrossDrag; // @synthesize acrossDrag=_acrossDrag;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool edgeScrollEable; // @synthesize edgeScrollEable=_edgeScrollEable;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(nonatomic) _Bool enablePressGesture; // @synthesize enablePressGesture=_enablePressGesture;
@property(readonly, nonatomic) _Bool didChange; // @synthesize didChange=_didChange;
@property(nonatomic) __weak id <ChannelsCellCollectionViewDataSource> m_dataSource; // @synthesize m_dataSource=_m_dataSource;
@property(nonatomic) __weak id <ChannelsCellCollectionViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)stopEditingModel;
- (void)enterEditingModel;
- (void)setScrollDirection;
- (void)edgeScroll;
- (void)updateDataSource;
- (void)moveCell;
- (void)stopEdgeTimer;
- (void)setEdgeTimer;
- (void)gestureEndOrCancle:(id)arg1;
- (void)gestureChange:(id)arg1;
- (id)imageFromView:(id)arg1;
- (void)gestureBegan:(id)arg1;
- (void)longPressed:(id)arg1;
- (void)addGesture;
- (void)initializeProperty;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

