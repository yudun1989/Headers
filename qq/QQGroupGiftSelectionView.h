//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>
#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, QQMessageReadTagView, QZCImageView, UIAlertView, UIButton, UICollectionView, UIImageView, UILabel, UIPageControl, UITextField, UIViewController;
@protocol QQGroupGiftSelectionViewDelegate;

@interface QQGroupGiftSelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIAlertViewDelegate, UITextFieldDelegate>
{
    unsigned long long _uin;
    UICollectionView *_personalGiftGridView;
    UICollectionView *_publicGiftGridView;
    unsigned long long _personalGiftCount;
    unsigned long long _publicGiftCount;
    UIView *_catagroryIndicatorView;
    UIButton *_personalButton;
    UIButton *_publicButton;
    QZCImageView *_currencyIconView;
    long long _flowerCount;
    UIAlertView *_payAlertView;
    NSDictionary *_coinInfo;
    NSDictionary *_operatonInfo;
    UIImageView *_payArrowView;
    _Bool _isAnonymous;
    int _giveGift;
    NSArray *_rewardStocks;
    UIView *_loadingView;
    QQMessageReadTagView *_redTagView;
    _Bool _needHidePublicGifts;
    long long _giftCurrentPage;
    int _giftViewType;
    UITextField *_numberTextField;
    id <QQGroupGiftSelectionViewDelegate> _delegate;
    UIViewController *_viewController;
    unsigned long long _businessType;
    UIButton *_actionButton;
    UIPageControl *_pageControll;
    UIButton *_numberButton;
    UILabel *_flowerCountLabel;
    NSArray *_personalGifts;
    NSArray *_publicGifts;
}

@property(retain, nonatomic) NSArray *publicGifts; // @synthesize publicGifts=_publicGifts;
@property(retain, nonatomic) NSArray *personalGifts; // @synthesize personalGifts=_personalGifts;
@property(retain, nonatomic) UILabel *flowerCountLabel; // @synthesize flowerCountLabel=_flowerCountLabel;
@property(nonatomic) int giftViewType; // @synthesize giftViewType=_giftViewType;
@property(retain, nonatomic) UIButton *numberButton; // @synthesize numberButton=_numberButton;
@property(retain, nonatomic) UIPageControl *pageControll; // @synthesize pageControll=_pageControll;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <QQGroupGiftSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITextField *numberTextField; // @synthesize numberTextField=_numberTextField;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isShowRedDotOutDate:(id)arg1;
- (void)operationAction;
- (void)gotoPay;
- (id)formatURLString:(id)arg1;
- (void)gotoPayAction;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)giftSelectionPageChange;
- (void)adjustPage:(long long)arg1;
- (void)refreshFooterStatus;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)hideInputNumber;
- (void)cancelInputNumber;
- (void)conformInputNumber;
- (void)checkInventory:(unsigned long long)arg1 isUseReward:(_Bool)arg2;
- (void)pickPersionAction;
- (void)textFieldClicked:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)inputNumberAction;
@property(readonly, nonatomic) NSDictionary *selectedGiftInfo;
- (id)groupCode;
@property(readonly, nonatomic) unsigned long long giftCount;
- (_Bool)isPublic;
- (void)showPublic;
- (void)showPersonal;
- (void)showRetryView;
- (void)setFlowerCountHighlight;
- (void)reloadStock;
- (void)loadGiftConfigData;
- (void)loadData;
- (id)addRedTagViewAtParentView:(id)arg1;
- (id)addSectionButtonWithIndex:(long long)arg1 title:(id)arg2;
- (id)addGiftCollectionViewWithOffsetX:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 businessType:(unsigned long long)arg2 uin:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

