//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPTableViewBaseCell.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;
@protocol RecomCellProtocol;

@interface PublicReComCell : PPTableViewBaseCell
{
    _Bool _newFlagsShow;
    _Bool _isFollowed;
    NSString *_ppId;
    long long _cellIndex;
    UIButton *_addButton;
    UILabel *_enterLabel;
    id <RecomCellProtocol> _target;
    SEL _action;
    UIImageView *_cellNewImageView;
    UIActivityIndicatorView *_waittingView;
    UIView *_innerSeperator;
    UILabel *_descriptionLabel;
    struct CGSize _rightBtnSize;
    struct CGSize _newLogoSize;
}

+ (double)heightByDescription:(id)arg1;
+ (float)cellHeightWithDescription:(id)arg1;
+ (float)cellHeight;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *innerSeperator; // @synthesize innerSeperator=_innerSeperator;
@property(retain, nonatomic) UIActivityIndicatorView *waittingView; // @synthesize waittingView=_waittingView;
@property(retain, nonatomic) UIImageView *cellNewImageView; // @synthesize cellNewImageView=_cellNewImageView;
@property(nonatomic) struct CGSize newLogoSize; // @synthesize newLogoSize=_newLogoSize;
@property(nonatomic) struct CGSize rightBtnSize; // @synthesize rightBtnSize=_rightBtnSize;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) _Bool newFlagsShow; // @synthesize newFlagsShow=_newFlagsShow;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id <RecomCellProtocol> target; // @synthesize target=_target;
@property(retain, nonatomic) UILabel *enterLabel; // @synthesize enterLabel=_enterLabel;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(copy, nonatomic) NSString *ppId; // @synthesize ppId=_ppId;
- (void).cxx_destruct;
- (void)showWaitView:(_Bool)arg1 setPPId:(id)arg2;
- (void)hideAddButton:(_Bool)arg1;
- (void)dealloc;
- (void)addButtonClicked;
- (void)addTarget:(id)arg1 addAction:(SEL)arg2 setId:(id)arg3;
- (void)showNewFlags:(_Bool)arg1;
- (void)setLogoImageUrl:(id)arg1 defaultImage:(id)arg2;
- (void)layoutSubviews;
- (void)setDescriptionText:(id)arg1;
- (void)reset;
- (void)config;

@end

