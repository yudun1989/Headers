//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class EIMColleague, NSString, QQAvatarView, UIImageView, UILabel;
@protocol EIMUserSummaryHeaderViewDelegate;

@interface EIMUserSummaryHeadView : UIView <UIActionSheetDelegate>
{
    UIImageView *_imgvBackground;
    UILabel *_displayNameLabel;
    UILabel *_subNameLabel;
    UIImageView *_flagVerify;
    UILabel *_signLabel;
    QQAvatarView *_vHead;
    UIImageView *headbackimgView;
    UIView *_paddingView;
    _Bool isSignLabelClick;
    NSString *_strUin;
    id <EIMUserSummaryHeaderViewDelegate> _delegate;
    EIMColleague *_datasource;
}

@property(retain, nonatomic) EIMColleague *datasource; // @synthesize datasource=_datasource;
@property(nonatomic) id <EIMUserSummaryHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *strUin; // @synthesize strUin=_strUin;
- (void)onSignLabelClick:(id)arg1;
- (double)getHeadMinY;
- (void)onHeadViewTap:(id)arg1;
- (double)heightInitValueForVisibile;
- (struct CGRect)headViewFrame;
- (void)updateHeadImage;
- (id)subTitle;
- (double)marginBottomForHeadImage;
- (void)resetUI;
- (void)layoutSubviews;
- (void)initUI;
- (void)dealloc;
- (id)initWithUin:(id)arg1 datasource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

