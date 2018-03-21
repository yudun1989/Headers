//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBSNSNetServiceContainerDelegate-Protocol.h"

@class CAGradientLayer, NSString, TBSNSNetServiceContainer, TBSNSShopTimeLineItem, TBSNSTopicSendMenu, UIButton, UIWindow;

@interface TBSNSTopicBar : UIView <TBSNSNetServiceContainerDelegate>
{
    double _lastFavTime;
    UIButton *_favBtn;
    UIButton *_shareButton;
    UIButton *_sendBtn;
    TBSNSShopTimeLineItem *_topicItem;
    TBSNSNetServiceContainer *_servicesContainer;
    TBSNSTopicSendMenu *_sendMenu;
    UIWindow *_menuWindow;
    NSString *_topicName;
    NSString *_accountId;
    CAGradientLayer *_gradient;
}

@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(retain, nonatomic) UIWindow *menuWindow; // @synthesize menuWindow=_menuWindow;
@property(retain, nonatomic) TBSNSTopicSendMenu *sendMenu; // @synthesize sendMenu=_sendMenu;
@property(retain, nonatomic) TBSNSNetServiceContainer *servicesContainer; // @synthesize servicesContainer=_servicesContainer;
@property(retain, nonatomic) TBSNSShopTimeLineItem *topicItem; // @synthesize topicItem=_topicItem;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *favBtn; // @synthesize favBtn=_favBtn;
- (void).cxx_destruct;
- (void)result:(_Bool)arg1 markT:(int)arg2 withData:(id)arg3;
- (void)shareBtnClicked:(id)arg1;
- (void)dealloc;
- (void)showFavAnimation;
- (void)showToast:(id)arg1;
- (void)favOperation;
- (void)favBtnClicked:(id)arg1;
- (void)sendOperation;
- (void)sendBtnClicked:(id)arg1;
- (id)utParam;
- (void)setupTBToolbarItems;
- (void)updateFavBtn;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 topicItem:(id)arg2 topicName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

