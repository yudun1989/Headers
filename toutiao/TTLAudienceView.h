//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTLAudienceBottomBarDelegate-Protocol.h"
#import "TTLDanmakuShootViewDelegate-Protocol.h"
#import "TTLRoomUserListViewDelegate-Protocol.h"
#import "TTLUserInfoViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TTLAudienceBottomBar, TTLDanmakuShootView, TTLGiftPresentViewController, TTLMessageViewController, TTLPreserveButton, TTLPreserveImageView, TTLRoomModel, TTLRoomUserListView, TTLUserInfoView, UILabel, UIViewController;
@protocol TTLAudienceViewDelegate;

@interface TTLAudienceView : UIView <TTLRoomUserListViewDelegate, TTLUserInfoViewDelegate, TTLAudienceBottomBarDelegate, UIGestureRecognizerDelegate, TTLDanmakuShootViewDelegate>
{
    UIViewController<TTLAudienceViewDelegate> *_audienceVC;
    TTLPreserveButton *_closeBtn;
    TTLPreserveImageView *_topBgView;
    UILabel *_acLabel;
    TTLUserInfoView *_userInfoView;
    UILabel *_xgzLabel;
    TTLRoomUserListView *_userRankListView;
    TTLRoomModel *_room;
    TTLMessageViewController *_messageVC;
    TTLGiftPresentViewController *_giftVC;
    TTLAudienceBottomBar *_bottomBar;
    TTLDanmakuShootView *_danmakuShootView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TTLDanmakuShootView *danmakuShootView; // @synthesize danmakuShootView=_danmakuShootView;
@property(retain, nonatomic) TTLAudienceBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) TTLGiftPresentViewController *giftVC; // @synthesize giftVC=_giftVC;
@property(retain, nonatomic) TTLMessageViewController *messageVC; // @synthesize messageVC=_messageVC;
@property(retain, nonatomic) TTLRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) TTLRoomUserListView *userRankListView; // @synthesize userRankListView=_userRankListView;
@property(retain, nonatomic) UILabel *xgzLabel; // @synthesize xgzLabel=_xgzLabel;
@property(retain, nonatomic) TTLUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) UILabel *acLabel; // @synthesize acLabel=_acLabel;
@property(retain, nonatomic) TTLPreserveImageView *topBgView; // @synthesize topBgView=_topBgView;
@property(retain, nonatomic) TTLPreserveButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak UIViewController<TTLAudienceViewDelegate> *audienceVC; // @synthesize audienceVC=_audienceVC;
- (void).cxx_destruct;
- (void)danmakuShootView:(id)arg1 didSendText:(id)arg2 isDanmaku:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)audienceBottomBarDidClickShareButton:(id)arg1;
- (void)audienceBottomBarDidClickGiftButton:(id)arg1;
- (void)audienceBottomBarBeginInput:(id)arg1;
- (void)userInfoViewDidClickFollowButton:(id)arg1;
- (void)userInfoViewDidClickAvatarView:(id)arg1;
- (void)TTLUserListViewDidUpdateRoomUserListCount:(long long)arg1;
- (void)TTLUserListViewDidClickUserAvatar:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_invalidateGiftPresentViewController;
- (void)_buildGiftPresentViewController;
- (void)_tapXGZLabel;
- (void)beginInputMessage;
- (id)preserveViewsWhileClearScreen;
- (void)showMessage:(id)arg1;
- (void)updateAudienceCount:(long long)arg1;
- (void)updateTicketCount:(long long)arg1;
- (void)layoutSubviews;
- (void)invalidateGiftPresent;
- (void)starRefresh;
- (void)stopRefresh;
- (void)updateBroadcastInfo:(id)arg1;
- (void)refreshWithRoom:(id)arg1;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1 audienceViewController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

