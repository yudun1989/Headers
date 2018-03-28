//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "TTFeedCollectionCell-Protocol.h"

@class NSString, UIViewController;
@protocol TTFeedCollectionCellDelegate;

@interface TTFeedCollectionCell : UICollectionViewCell <TTFeedCollectionCell>
{
    id <TTFeedCollectionCellDelegate> _delegate;
}

@property(nonatomic) __weak id <TTFeedCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)IsEmptySubscribeList;
- (_Bool)shouldHideRefreshView;
- (_Bool)shouldAnimateRefreshView;
- (void)cellWillEnterBackground;
- (void)cellWillEnterForground;
- (void)didDisappear;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)refreshIfNeeded;
- (void)refreshDataWithType:(int)arg1;
- (id)categoryModel;
- (void)setupCellModel:(id)arg1 isDisplay:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIViewController *sourceViewController;
@property(readonly) Class superclass;

@end

