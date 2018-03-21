//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/VRBGoToShareViewDelegate-Protocol.h>

@class NSString, UIViewController, VRBGoToShareView, VRBShareViewModel;
@protocol VRBGoToShareViewControllerDelegate;

@interface VRBGoToShareViewController : QQViewController <VRBGoToShareViewDelegate>
{
    _Bool _isNavBarHiddenPrevious;
    VRBGoToShareView *_goToShareView;
    NSString *_uin;
    NSString *_nick;
    _Bool _isBqd;
    VRBShareViewModel *_shareModel;
    UIViewController *_parentVC;
    NSString *_roomId;
    id <VRBGoToShareViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <VRBGoToShareViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)vrbGotoShareCloseBtnClicked;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadView;
- (id)initWithUin:(id)arg1 nick:(id)arg2 isBqd:(_Bool)arg3 shareModel:(id)arg4 roomId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

