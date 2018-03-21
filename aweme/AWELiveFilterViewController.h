//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEFilterModel, AWELiveRoomModel, NSArray, NSString, UICollectionView, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol AWELiveFilterViewControllerDelegate;

@interface AWELiveFilterViewController : UIViewController <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isShowing;
    _Bool _isAnimating;
    id <AWELiveFilterViewControllerDelegate> _delegate;
    NSArray *_filterArray;
    UIView *_baseView;
    UIImageView *_markImageView;
    UICollectionView *_collectionView;
    AWEFilterModel *_selectedFilter;
    UITapGestureRecognizer *_tapGes;
    UIPanGestureRecognizer *_panGes;
    AWELiveRoomModel *_room;
    AWEFilterModel *_initialFilter;
    struct CGPoint _lastLocation;
}

@property(retain, nonatomic) AWEFilterModel *initialFilter; // @synthesize initialFilter=_initialFilter;
@property(retain, nonatomic) AWELiveRoomModel *room; // @synthesize room=_room;
@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) UITapGestureRecognizer *tapGes; // @synthesize tapGes=_tapGes;
@property(nonatomic) AWEFilterModel *selectedFilter; // @synthesize selectedFilter=_selectedFilter;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *markImageView; // @synthesize markImageView=_markImageView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) NSArray *filterArray; // @synthesize filterArray=_filterArray;
@property(nonatomic) __weak id <AWELiveFilterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesuture:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_switchToInitialItem;
- (void)_dismissAnimated:(_Bool)arg1;
- (void)switchToItem:(id)arg1;
- (void)showOnView:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (id)initWithRoom:(id)arg1 initialFilter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

