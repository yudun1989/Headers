//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOCommonCellView.h>

#import <QQMainProject/IQQAIOGifImageProtocol-Protocol.h>
#import <QQMainProject/IQQAmrPlayerDelegate-Protocol.h>

@class MarketFaceInfo, NSString, PersonalityApprovalView, QQAIOModelMarketFace, QQChatImageViewMarketFace, QQGeneralAmrPlayer, UIActivityIndicatorView;

@interface QQAIOMarketFaceCellView : QQAIOCommonCellView <IQQAmrPlayerDelegate, IQQAIOGifImageProtocol>
{
    QQChatImageViewMarketFace *_cellImage;
    UIActivityIndicatorView *_faceStoreLoadingView;
    _Bool _bLayout;
    struct CGSize _sizeImage;
    _Bool _isHardwareEncoderAvailable;
    PersonalityApprovalView *_approvalView;
    _Bool _shouldPlay;
    _Bool _canAutoPlayMagic;
    _Bool _shouldPlayPNG;
    _Bool _isMagicFace;
    _Bool _isH5MagicFace;
    _Bool _shouldPlayFromDetail;
    _Bool _NoNeedDraw;
    _Bool _lock;
    MarketFaceInfo *_marketFaceInfo;
    _Bool _isZhudongPlay;
    QQGeneralAmrPlayer *_amrPlayer;
}

@property(retain, nonatomic) QQGeneralAmrPlayer *amrPlayer; // @synthesize amrPlayer=_amrPlayer;
- (void).cxx_destruct;
- (_Bool)hasTrailingButtons;
- (void)getFacePackageFeeType:(CDUnknownBlockType)arg1;
- (void)menuActionFollow:(id)arg1;
- (void)menuActionForwardTo:(id)arg1;
- (void)menuActionSaveMarketFace:(id)arg1;
- (id)getMenuItems;
- (void)showPopupMenu;
- (void)onPlayEnd:(id)arg1;
- (void)onPlayBegin:(id)arg1;
- (void)emojiClicked;
- (void)stopGifPlayer;
- (void)startGifPlayer;
- (void)stopMarketVoiceFacePlay;
- (void)stopMarketVoiceFace:(_Bool)arg1;
- (void)stopPlayingVoiceEmoji:(id)arg1;
- (void)setVoiceEmojiNeedsPlay;
- (void)playMarketVoiceFace;
- (void)loadVoiceGifView:(id)arg1 audioIndicatorview:(id)arg2 withStringPath:(id)arg3 bPlay:(_Bool)arg4;
- (void)loadMarketFaceView:(id)arg1 withPath:(id)arg2;
- (void)loadMarketVoiceFaceView:(id)arg1 audioIndicatorview:(id)arg2 withPath:(id)arg3 bPlay:(_Bool)arg4;
- (id)marketFaceInfo;
- (void)showMagicPlayIndicatorForMarketFace;
- (void)showVoiceFaceIndicatorForMarketFace:(id)arg1;
- (_Bool)isLastMsgModelIndex;
- (void)emojiFollowShow;
- (void)showGifTagForMarketFace:(id)arg1;
- (void)updateMarketFaceState;
- (_Bool)playMagicFace:(id)arg1;
- (void)tryPlayMagicFace:(id)arg1;
- (void)emojiDownloaded:(id)arg1 success:(_Bool)arg2 local:(_Bool)arg3 path:(id)arg4 status:(int)arg5;
- (void)loadMarketFaceWithPackageID:(unsigned int)arg1 withEmojiID:(id)arg2 withKey:(id)arg3 withType:(int)arg4;
- (void)downloadMarketFace:(id)arg1;
- (void)setPNGImages;
- (void)loadGifView:(id)arg1 withStringPath:(id)arg2;
- (void)showEmojiFollowIndicator;
- (id)leftTextWithDiversionType:(long long)arg1;
- (void)showDiversionView:(id)arg1;
- (void)willDrawBubble;
- (void)preparePaopao:(id)arg1;
- (id)touchableAreas;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)didTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)startAioAllGifPlay;
- (void)lockGifPlayer;
- (void)stopAioAllGifPlay;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
@property(nonatomic) QQAIOModelMarketFace *aioModel;
- (void)handleGifDecodeNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (_Bool)isMagicFace;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

