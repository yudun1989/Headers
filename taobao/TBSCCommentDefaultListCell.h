//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TBSCCellDelegate-Protocol.h"

@class NSString, TBSCCommentCellHeadView, TBSCCommentContentsView, TBSCCommentItem, UIImageView;

@interface TBSCCommentDefaultListCell : UITableViewCell <TBSCCellDelegate>
{
    _Bool _enableClick;
    TBSCCommentContentsView *_commentContentView;
    TBSCCommentCellHeadView *_headView;
    UIImageView *_accountIcon;
    TBSCCommentItem *_item;
}

+ (double)heightForCellOfItem:(id)arg1;
+ (id)reuseIdentifier;
+ (id)cellIdentifier;
@property(retain, nonatomic) TBSCCommentItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIImageView *accountIcon; // @synthesize accountIcon=_accountIcon;
@property(retain, nonatomic) TBSCCommentCellHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) TBSCCommentContentsView *commentContentView; // @synthesize commentContentView=_commentContentView;
@property(nonatomic) _Bool enableClick; // @synthesize enableClick=_enableClick;
- (void).cxx_destruct;
- (void)accountIconOnClick:(id)arg1;
- (void)setAccountImage:(id)arg1;
- (void)setItemData:(id)arg1;
- (void)setContentViewSize:(struct CGRect)arg1;
- (void)setUpCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

