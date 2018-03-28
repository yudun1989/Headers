//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TTLGiftListViewDataSource, TTLGiftModel, TTLPageControl, TTLWalletInfoModel, UIButton, UICollectionView, UILabel;
@protocol TTLGiftListViewDelegate;

@interface TTLGiftListView : UIView <UICollectionViewDelegate, UIGestureRecognizerDelegate>
{
    long long _comboTime;
    TTLGiftModel *_selectedGift;
    id <TTLGiftListViewDelegate> _delegate;
    TTLWalletInfoModel *_walletInfo;
    UIView *_contentView;
    UICollectionView *_listView;
    TTLPageControl *_pageControl;
    UILabel *_balanceLabel;
    UIButton *_sendBtn;
    UIButton *_comboBtn;
    TTLGiftListViewDataSource *_dataSource;
}

@property(retain, nonatomic) TTLGiftListViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIButton *comboBtn; // @synthesize comboBtn=_comboBtn;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) TTLPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TTLWalletInfoModel *walletInfo; // @synthesize walletInfo=_walletInfo;
@property(nonatomic) __weak id <TTLGiftListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TTLGiftModel *selectedGift; // @synthesize selectedGift=_selectedGift;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)_comboTitleWithNumber:(long long)arg1;
- (void)_comboGift;
- (void)_decreaseComboTime;
- (void)_sendGift;
- (void)_recharge;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateWalletInfo;
- (void)updateDataSource;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

