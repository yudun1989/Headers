//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBSCAttributedLabelDelegate-Protocol.h"

@class NSString, TBSCAttributedLabel, TBSCCommdityDetailView, TBSCCommentCellHeadView, TBSCCommentItem, TBSCPhotoBrowserController, UIImageView;

@interface TBSCCommentContentsView : UIView <TBSCAttributedLabelDelegate>
{
    _Bool _isParentComment;
    _Bool _isParentNickShowAsMine;
    _Bool _nickNameClickenable;
    int _contentType;
    UIImageView *_contentPicture;
    TBSCCommdityDetailView *_contentCommdityDetail;
    TBSCAttributedLabel *_contentDetailLabel;
    TBSCPhotoBrowserController *_simpleBrower;
    unsigned long long _photoTag;
    SEL _praiseSelect;
    id _photoDelegate;
    TBSCCommentCellHeadView *_headView;
    TBSCCommentItem *_commentItem;
}

+ (struct CGSize)bubbleSizeWithText:(id)arg1 witFontWidth:(double)arg2;
+ (struct CGSize)bubbleSizeWithText:(id)arg1;
@property(retain, nonatomic) TBSCCommentItem *commentItem; // @synthesize commentItem=_commentItem;
@property(retain, nonatomic) TBSCCommentCellHeadView *headView; // @synthesize headView=_headView;
@property(nonatomic) _Bool nickNameClickenable; // @synthesize nickNameClickenable=_nickNameClickenable;
@property(nonatomic) id photoDelegate; // @synthesize photoDelegate=_photoDelegate;
@property(nonatomic) SEL praiseSelect; // @synthesize praiseSelect=_praiseSelect;
@property(nonatomic) unsigned long long photoTag; // @synthesize photoTag=_photoTag;
@property(retain, nonatomic) TBSCPhotoBrowserController *simpleBrower; // @synthesize simpleBrower=_simpleBrower;
@property(nonatomic) _Bool isParentNickShowAsMine; // @synthesize isParentNickShowAsMine=_isParentNickShowAsMine;
@property(retain, nonatomic) TBSCAttributedLabel *contentDetailLabel; // @synthesize contentDetailLabel=_contentDetailLabel;
@property(retain, nonatomic) TBSCCommdityDetailView *contentCommdityDetail; // @synthesize contentCommdityDetail=_contentCommdityDetail;
@property(retain, nonatomic) UIImageView *contentPicture; // @synthesize contentPicture=_contentPicture;
@property(nonatomic) _Bool isParentComment; // @synthesize isParentComment=_isParentComment;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)setDetailPicture:(id)arg1;
- (void)setDetailCommdity:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setContentViewData:(id)arg1;
- (void)clearContentView;
- (void)setPraseStatusWithPraised:(_Bool)arg1;
- (void)setSimpleBrowerFrame:(id)arg1;
- (void)contentPictureButtonClicked:(id)arg1;
- (void)dealloc;
- (void)initDetailView;
- (void)initImageView;
- (void)setUpView;
- (void)setFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

