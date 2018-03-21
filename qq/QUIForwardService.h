//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IUIForwardService-Protocol.h>
#import <QQMainProject/QQImagePickerControllerDelegate-Protocol.h>

@class NSString;

@interface QUIForwardService : NSObject <QQImagePickerControllerDelegate, IUIForwardService>
{
}

+ (id)GetInstance;
- (void)doForwardAIO:(id)arg1;
- (void)doForwardCommonVC:(id)arg1;
- (void)ActionOpenPublicAccountAdMsgView:(id)arg1;
- (void)ActionOpenContactsView:(id)arg1;
- (void)ActionOpenGroupChooseNoStorageView:(id)arg1;
- (void)ActionOpenGroupChooseView:(id)arg1;
- (void)ActionOpenDoodleView:(id)arg1;
- (void)ActionOpenFileReceivingViewController:(id)arg1;
- (void)removeCurrentMaskWindow;
- (id)getMaxSubString:(id)arg1 maxLength:(int)arg2;
- (void)ActionShowPslCard:(id)arg1;
- (void)processActionChatEncounter:(id)arg1;
- (void)processActionChatRobot:(id)arg1;
- (void)processActionChatGroup:(id)arg1;
- (void)processActionChatC2C:(id)arg1;
- (void)processActionQDPublicAccountWPA:(id)arg1;
- (void)ActionImChat:(id)arg1;
- (void)ActionDiscussGroup:(id)arg1;
- (void)ActionGroupAlbum:(id)arg1;
- (void)ActionOpenUrl:(id)arg1;
- (void)processActCmd:(id)arg1;
- (void)forward:(int)arg1 Info:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

