//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BCardListCollectionViewIndex, BCardListLineFlowLayout, UICollectionView;
@protocol BCardListCellDelegate, BCardListCollectionViewDelegate, BCardListCollectionViewIndexDelegate;

@interface BCardListCollectionView : UIView
{
    UICollectionView *_collectionView;
    BCardListLineFlowLayout *_cardFlowLayout;
    BCardListCollectionViewIndex *_collectionViewIndex;
    id <BCardListCollectionViewDelegate> _delegateDataSource;
    id <BCardListCollectionViewIndexDelegate> _delegateIndex;
    id <BCardListCellDelegate> _cardDelegate;
}

@property(nonatomic) __weak id <BCardListCellDelegate> cardDelegate; // @synthesize cardDelegate=_cardDelegate;
@property(nonatomic) __weak id <BCardListCollectionViewIndexDelegate> delegateIndex; // @synthesize delegateIndex=_delegateIndex;
@property(nonatomic) __weak id <BCardListCollectionViewDelegate> delegateDataSource; // @synthesize delegateDataSource=_delegateDataSource;
@property(retain, nonatomic) BCardListCollectionViewIndex *collectionViewIndex; // @synthesize collectionViewIndex=_collectionViewIndex;
@property(retain, nonatomic) BCardListLineFlowLayout *cardFlowLayout; // @synthesize cardFlowLayout=_cardFlowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)event:(id)arg1;
- (void)reloadData;
- (void)setDelegateSource:(id)arg1 indexDelegate:(id)arg2 cellClickDelegate:(id)arg3;
- (void)dealloc;
- (void)onForceOffLineNotify;
- (id)initWithFrame:(struct CGRect)arg1 withLayout:(id)arg2;

@end

