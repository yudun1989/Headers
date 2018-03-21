//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSMutableArray, NSString, UICollectionView, UIView;
@protocol KSSlideActionSectionControllerDelegate;

@interface KSSlideActionSectionController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isFirstRow;
    NSArray *_actionItems;
    id <KSSlideActionSectionControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    UIView *_separator;
    NSMutableArray *_registeredCellIdentifiers;
}

@property(nonatomic) _Bool isFirstRow; // @synthesize isFirstRow=_isFirstRow;
@property(retain, nonatomic) NSMutableArray *registeredCellIdentifiers; // @synthesize registeredCellIdentifiers=_registeredCellIdentifiers;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <KSSlideActionSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) _Bool separatorHidden; // @dynamic separatorHidden;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

