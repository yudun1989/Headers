//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSIndexPath, TBFavoriteDoubleGoodsView;

@interface TBFavoriteDoubleGoodsCell : UITableViewCell
{
    _Bool _isEditing;
    _Bool _isSelectAll;
    NSArray *_items;
    NSIndexPath *_indexPath;
    CDUnknownBlockType _didSelectGoodBlock;
    CDUnknownBlockType _similarButtonClickedBlock;
    CDUnknownBlockType _favorButtonClickedBlock;
    CDUnknownBlockType _shareButtonClickedBlock;
    CDUnknownBlockType _addCategoryButtonClickedBlock;
    CDUnknownBlockType _longPressBlock;
    CDUnknownBlockType _selectItemBlock;
    long long _isPressedNum;
    TBFavoriteDoubleGoodsView *_leftContent;
    TBFavoriteDoubleGoodsView *_rightContent;
}

@property(retain, nonatomic) TBFavoriteDoubleGoodsView *rightContent; // @synthesize rightContent=_rightContent;
@property(retain, nonatomic) TBFavoriteDoubleGoodsView *leftContent; // @synthesize leftContent=_leftContent;
@property(nonatomic) _Bool isSelectAll; // @synthesize isSelectAll=_isSelectAll;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) long long isPressedNum; // @synthesize isPressedNum=_isPressedNum;
@property(copy, nonatomic) CDUnknownBlockType selectItemBlock; // @synthesize selectItemBlock=_selectItemBlock;
@property(copy, nonatomic) CDUnknownBlockType longPressBlock; // @synthesize longPressBlock=_longPressBlock;
@property(copy, nonatomic) CDUnknownBlockType addCategoryButtonClickedBlock; // @synthesize addCategoryButtonClickedBlock=_addCategoryButtonClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType shareButtonClickedBlock; // @synthesize shareButtonClickedBlock=_shareButtonClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType favorButtonClickedBlock; // @synthesize favorButtonClickedBlock=_favorButtonClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType similarButtonClickedBlock; // @synthesize similarButtonClickedBlock=_similarButtonClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectGoodBlock; // @synthesize didSelectGoodBlock=_didSelectGoodBlock;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)hideMoreView:(long long)arg1;
- (void)longPressRightContenet:(id)arg1;
- (void)longPressLeftContenet:(id)arg1;
- (void)tapRrightContent:(id *)arg1;
- (void)tapLeftContent:(id *)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

