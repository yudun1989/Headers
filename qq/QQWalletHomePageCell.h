//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>
#import <QQMainProject/QQWalletServiceGridCellDelegate-Protocol.h>

@class NSMutableArray, NSString, UITapGestureRecognizer;
@protocol QQWalletHomePageCellDelegate;

@interface QQWalletHomePageCell : UITableViewCell <QQWalletServiceGridCellDelegate, CAAnimationDelegate>
{
    NSMutableArray *_gridCells;
    NSMutableArray *_cellFrames;
    int _aniTimes;
    UITapGestureRecognizer *_tapGuester;
    id <QQWalletHomePageCellDelegate> _delegate;
    unsigned long long _drawBorder;
}

+ (long long)indexShouldShowRedPointOfAppList:(id)arg1 redPointId:(long long)arg2 redPointSubId:(long long)arg3 redPointTypeChecker:(CDUnknownBlockType)arg4;
@property(nonatomic) unsigned long long drawBorder; // @synthesize drawBorder=_drawBorder;
@property(nonatomic) __weak id <QQWalletHomePageCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupStateForGridCell:(id)arg1 app:(id)arg2;
- (void)clearUselessGridCells:(unsigned long long)arg1;
- (id)createGridCellForIndex:(long long)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)didDownloadZipImages;
- (void)cellsStartAnimating;
- (void)setAppList:(id)arg1 forType:(int)arg2;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

