//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_TPBaseEngine.h>

#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>

@class CFT_UILoadingView, NSString, UINavigationController;

@interface CFT_TPSelectFriendForPayEngine : CFT_TPBaseEngine <QQFriendSelectedViewControllerDelegate>
{
    CFT_UILoadingView *_loadingView;
    int _scene;
    NSString *_goodsName;
    NSString *_goodsPrice;
    NSString *_friendUin;
    UINavigationController *_naviController;
}

@property(nonatomic) UINavigationController *naviController; // @synthesize naviController=_naviController;
@property(nonatomic) NSString *friendUin; // @synthesize friendUin=_friendUin;
@property(retain, nonatomic) NSString *goodsPrice; // @synthesize goodsPrice=_goodsPrice;
@property(retain, nonatomic) NSString *goodsName; // @synthesize goodsName=_goodsName;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)dealloc;
- (void)dialogSendBtnClick:(int)arg1 exInfo:(id)arg2;
- (_Bool)friendSelectedViewController:(id)arg1 didClickButtonAtIndex:(long long)arg2 withSelectedFriend:(id)arg3 type:(int)arg4;
- (void)qpay_pfa_apply;
- (void)goToFriendSelectVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

