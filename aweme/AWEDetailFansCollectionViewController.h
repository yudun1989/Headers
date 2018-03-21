//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class AWEDetailFansFlowLayout, AWEUserModel, NSArray;

@interface AWEDetailFansCollectionViewController : UICollectionViewController
{
    _Bool _isFansDetailView;
    AWEUserModel *_user;
    NSArray *_modelsArray;
    AWEDetailFansFlowLayout *_flowLayout;
}

@property(retain, nonatomic) AWEDetailFansFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(copy, nonatomic) NSArray *modelsArray; // @synthesize modelsArray=_modelsArray;
@property(nonatomic) _Bool isFansDetailView; // @synthesize isFansDetailView=_isFansDetailView;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)heightOnDetailView;
- (void)configWithUser:(id)arg1 isFansDetailView:(_Bool)arg2;
- (void)viewDidLoad;
- (id)init;

@end

