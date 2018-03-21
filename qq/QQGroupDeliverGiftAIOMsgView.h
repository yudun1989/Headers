//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/FaceWallImageDelegate-Protocol.h>

@class FaceWallImageView, NSString, QQChatViewTable, QQGroupDeliverGiftAIOModel, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface QQGroupDeliverGiftAIOMsgView : UIView <FaceWallImageDelegate>
{
    _Bool _isZhuanJuHua;
    QQGroupDeliverGiftAIOModel *_groupDeliverGiftAIOModel;
    UIView *_btnView;
    UILabel *_title;
    UILabel *_subTitle;
    UILabel *_scoreLabel;
    UIImageView *_backgroudView;
    FaceWallImageView *_icon;
    UIButton *_playButton;
    UIImageView *_comeFromBgView;
    UILabel *_comeFrom;
    UIView *_wordingView;
    QQChatViewTable *_chatViewTable;
    double _nickNameHeight;
    UIActivityIndicatorView *_juHuaView;
    UIView *_addBgColorView;
    UIButton *_wantGBtn;
    UIButton *_thxBtn;
    UIButton *_backGBtn;
    UIView *_splitLine;
}

+ (id)labelWithFontSize:(double)arg1 color:(id)arg2;
+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIButton *backGBtn; // @synthesize backGBtn=_backGBtn;
@property(retain, nonatomic) UIButton *thxBtn; // @synthesize thxBtn=_thxBtn;
@property(retain, nonatomic) UIButton *wantGBtn; // @synthesize wantGBtn=_wantGBtn;
@property(retain, nonatomic) UIView *addBgColorView; // @synthesize addBgColorView=_addBgColorView;
@property(nonatomic) _Bool isZhuanJuHua; // @synthesize isZhuanJuHua=_isZhuanJuHua;
@property(retain, nonatomic) UIActivityIndicatorView *juHuaView; // @synthesize juHuaView=_juHuaView;
@property(nonatomic) double nickNameHeight; // @synthesize nickNameHeight=_nickNameHeight;
@property(nonatomic) __weak QQChatViewTable *chatViewTable; // @synthesize chatViewTable=_chatViewTable;
@property(retain, nonatomic) UIView *wordingView; // @synthesize wordingView=_wordingView;
@property(retain, nonatomic) UILabel *comeFrom; // @synthesize comeFrom=_comeFrom;
@property(retain, nonatomic) UIImageView *comeFromBgView; // @synthesize comeFromBgView=_comeFromBgView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) FaceWallImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIImageView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *btnView; // @synthesize btnView=_btnView;
@property(retain, nonatomic) QQGroupDeliverGiftAIOModel *groupDeliverGiftAIOModel; // @synthesize groupDeliverGiftAIOModel=_groupDeliverGiftAIOModel;
- (void).cxx_destruct;
- (void)voiceOverSupport;
- (void)notifyNetWorkError:(id)arg1;
- (void)notifyDownloadFail:(id)arg1;
- (void)notifyDownloadSuccess:(id)arg1;
- (void)onBntClick:(id)arg1;
- (struct CGRect)bubleFrame;
- (struct CGRect)playBntFrame;
- (struct CGRect)comeFormFrame;
- (struct CGRect)backGBtnFrame;
- (struct CGRect)thxBtnFrame;
- (struct CGRect)wantBtnFrame;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (void)drawBubbleMsgViewMask:(id)arg1;
- (void)juHuaZhuan:(id)arg1;
- (void)checkjuHua;
- (void)commonInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithChatViewTable:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

