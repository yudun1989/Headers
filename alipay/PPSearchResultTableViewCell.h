//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPTableViewBaseCell.h"

@class PPAttrubteLabel, UIActivityIndicatorView, UIButton, UIImageView, UILabel;
@protocol PPSearchCellAddProtocol;

@interface PPSearchResultTableViewCell : PPTableViewBaseCell
{
    _Bool _isFollowed;
    PPAttrubteLabel *_attTitleLabel;
    UILabel *_publicDescLabel;
    UILabel *_serviceLabel;
    UILabel *_topMenusLabel;
    UIImageView *_dashLineImageView;
    double _maxY;
    id <PPSearchCellAddProtocol> _buttonTarget;
    SEL _actionSel;
    id _cellInformation;
    UIButton *_addButton;
    UILabel *_enterLabel;
    UIActivityIndicatorView *_waittingView;
    struct CGSize _rightBtnSize;
}

+ (double)cellHeightWithTitle:(id)arg1 detailTitle:(id)arg2 publicDesc:(id)arg3 topMenus:(id)arg4;
@property(retain, nonatomic) UIActivityIndicatorView *waittingView; // @synthesize waittingView=_waittingView;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) struct CGSize rightBtnSize; // @synthesize rightBtnSize=_rightBtnSize;
@property(retain, nonatomic) UILabel *enterLabel; // @synthesize enterLabel=_enterLabel;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak id cellInformation; // @synthesize cellInformation=_cellInformation;
@property(nonatomic) SEL actionSel; // @synthesize actionSel=_actionSel;
@property(nonatomic) __weak id <PPSearchCellAddProtocol> buttonTarget; // @synthesize buttonTarget=_buttonTarget;
@property(nonatomic) double maxY; // @synthesize maxY=_maxY;
@property(retain, nonatomic) UIImageView *dashLineImageView; // @synthesize dashLineImageView=_dashLineImageView;
@property(retain, nonatomic) UILabel *topMenusLabel; // @synthesize topMenusLabel=_topMenusLabel;
@property(retain, nonatomic) UILabel *serviceLabel; // @synthesize serviceLabel=_serviceLabel;
@property(retain, nonatomic) UILabel *publicDescLabel; // @synthesize publicDescLabel=_publicDescLabel;
@property(retain, nonatomic) PPAttrubteLabel *attTitleLabel; // @synthesize attTitleLabel=_attTitleLabel;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 searchWord:(id)arg2;
- (void)setPublicDesc:(id)arg1 topMenus:(id)arg2;
- (void)setLogoImageUrl:(id)arg1 defaultImage:(id)arg2;
- (void)showWaitView:(_Bool)arg1 setPPId:(id)arg2;
- (void)buttonClicked;
- (void)config;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;
- (void)hideAddButton:(_Bool)arg1;
- (void)addTarget:(id)arg1 addAction:(SEL)arg2 setInfo:(id)arg3;

@end

