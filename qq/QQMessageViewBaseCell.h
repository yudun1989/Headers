//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQMoreOptionTableViewCell.h>

#import <QQMainProject/QQDynamicAvatarViewDelegate-Protocol.h>
#import <QQMainProject/QQMessageViewCellDetailProtocl-Protocol.h>
#import <QQMainProject/QQMessageViewCellLayoutProtocol-Protocol.h>
#import <QQMainProject/QQMessageViewCellMoreOptionProtocol-Protocol.h>
#import <QQMainProject/QQMessageViewCellSetDataProtocol-Protocol.h>
#import <QQMainProject/QQMoreOptionTableViewCellDelegate-Protocol.h>
#import <QQMainProject/QQPreviewActionDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class NSString, QQAvatarView, QQRecentLabel, QQRecentMessageModel, QQUnReadCountAnimationView, UIFont, UIImageView, UILabel;

@interface QQMessageViewBaseCell : QQMoreOptionTableViewCell <UIActionSheetDelegate, QQMoreOptionTableViewCellDelegate, QQMessageViewCellDetailProtocl, QQMessageViewCellSetDataProtocol, QQMessageViewCellLayoutProtocol, QQMessageViewCellMoreOptionProtocol, QQPreviewActionDelegate, QQDynamicAvatarViewDelegate>
{
    UILabel *_timeLabel;
    UILabel *_nickLabel;
    QQRecentLabel *_detailLabel;
    QQAvatarView *_headView;
    UILabel *_searchDetailLabel;
    UIImageView *_sendStateView;
    UIImageView *_draftIcon;
    QQUnReadCountAnimationView *_readTagView;
    NSString *_nickname;
    NSString *_uin;
    QQRecentMessageModel *_model;
    _Bool _lastEditState;
    _Bool _noTimeLabel;
    _Bool _sendState;
    _Bool _isDrafting;
    _Bool _simpleType;
    UIFont *_nickFont;
    UIFont *_detailFont;
    UIFont *_timeFont;
    struct CGRect _textRect;
    struct CGRect _detailTotalRect;
    _Bool _isDisplayed;
}

@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
- (void)setSkinIsSetDefault:(_Bool)arg1;
- (void)prepareForReuse;
@property(nonatomic) _Bool simpleType; // @dynamic simpleType;
- (void)layoutNickLabelText:(id)arg1 searchDetailText:(id)arg2;
- (id)getCurrentIndexPathInTable;
- (id)getRightBtnContext:(int)arg1 customContext:(id)arg2;
- (void)onRightButtonSelected:(int)arg1 context:(id)arg2;
- (int)getRightBtnCount;
- (id)getRightButtonTitle:(int)arg1;
- (void)onPreviewActionDidSelect:(int)arg1 actionItem:(id)arg2;
- (id)onPreviewActionItemCreate;
- (void)removeUnreadMarkState;
- (int)getUnreadMarkState;
- (id)tableView:(id)arg1 buttonContextForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 skinImageNormalForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 backgroundColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (double)tableView:(id)arg1 widthForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (void)tableView:(id)arg1 buttonPressedInRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3 context:(id)arg4;
- (int)tableView:(id)arg1 leftButtonNumInRowAtIndexPath:(id)arg2;
- (void)calculateDetailLableFrame;
- (void)setDetailLabelFrame:(double)arg1 width:(double)arg2;
- (double)getStartX:(double)arg1;
- (double)getC2CCellDetailStartX:(double)arg1;
- (double)getGroupDetailStartX:(double)arg1;
- (double)getBaseCellDetailStartX:(double)arg1;
- (void)layoutSubviews;
- (void)layoutForTencentIcon;
- (void)layoutForFriendSelector;
- (void)layoutForOtherViewWithNoStateView;
- (void)layoutForSendStateView;
- (void)layoutForDetailLabel;
- (void)layoutForNickAndHeadView;
- (void)layoutForUnreadCountView;
- (void)layoutForTimeLabel;
- (void)initBeforeLayout;
- (struct CGRect)getDetailRectWithIconSize:(struct CGSize)arg1;
- (struct CGRect)getDetailRect;
- (struct CGRect)getNickRect;
- (struct CGRect)getTextRect;
- (void)onFontScaleChanged;
- (void)setData:(id)arg1;
- (void)setTopView;
- (void)setDataForVoiceOver;
- (void)setDataForUnreadCountView;
- (void)setDataForDetailView;
- (void)setDataForTimeView;
- (void)setDataForNickView;
- (void)setDataForHeadView;
- (void)initBeforeSetData;
@property(retain, nonatomic) UIImageView *sendStateView; // @dynamic sendStateView;
@property(retain, nonatomic) UIImageView *draftIcon; // @dynamic draftIcon;
@property(retain, nonatomic) UILabel *timeLabel; // @dynamic timeLabel;
@property(retain, nonatomic) QQUnReadCountAnimationView *readTagView; // @dynamic readTagView;
@property(retain, nonatomic) QQRecentLabel *detailLabel; // @dynamic detailLabel;
@property(retain, nonatomic) UILabel *searchDetailLabel; // @dynamic searchDetailLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @dynamic nickLabel;
- (void)onDynamicAvatarReadyToPlayOnce:(id)arg1;
- (_Bool)shouldPlayOnceDynamicAvatar:(id)arg1;
@property(retain, nonatomic) QQAvatarView *headView; // @dynamic headView;
- (void)dealloc;
- (id)createMessageViewCellWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutResultFromLabel:(id)arg1;
- (id)createVoiceOverLocalizedStringNew:(id)arg1 unReadCount:(int)arg2 unReadText:(id)arg3 content:(id)arg4 time:(id)arg5 localizedKeyName:(id)arg6;
- (void)SetSendTab:(id)arg1;
- (void)CancelSendImag:(struct CGRect)arg1;
- (void)SetSendImag:(_Bool)arg1 Frame:(struct CGRect)arg2;
- (id)cutString:(id)arg1 maxWidth:(short)arg2;
- (id)getUnknownMsgTypeContent:(int)arg1 content:(id)arg2;
- (void)layoutModelResultFromSession:(id)arg1 label:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isDrafting; // @dynamic isDrafting;
@property(retain, nonatomic) QQRecentMessageModel *model; // @dynamic model;
@property(nonatomic) _Bool noTimeLabel; // @dynamic noTimeLabel;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;

@end

