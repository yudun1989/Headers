//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class FRCommonUserStructModel, FRThreadFooterDigCellLayout, FRThreadFooterDigItem, SSThemedLabel, SSThemedView, TTAsyncCornerImageView, TTUserInfoView;

@interface FRThreadFooterDigTableViewCell : SSThemedTableViewCell
{
    TTUserInfoView *_nameView;
    SSThemedLabel *_descLabel;
    TTAsyncCornerImageView *_avatarView;
    SSThemedView *_bottomLine;
    FRThreadFooterDigItem *_diggItem;
    FRCommonUserStructModel *_userModel;
    FRThreadFooterDigCellLayout *_diggLayout;
}

@property(retain, nonatomic) FRThreadFooterDigCellLayout *diggLayout; // @synthesize diggLayout=_diggLayout;
@property(retain, nonatomic) FRCommonUserStructModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) FRThreadFooterDigItem *diggItem; // @synthesize diggItem=_diggItem;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) TTAsyncCornerImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) SSThemedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) TTUserInfoView *nameView; // @synthesize nameView=_nameView;
- (void).cxx_destruct;
- (id)getRelationStr:(id)arg1;
- (void)refreshWithDiggItem:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)_separatorLineFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

