//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBaseContentEditingViewController.h"

#import "AUDialogDelegate-Protocol.h"

@class APChatRoomInfo, NSString;

@interface APChatRoomAnnouncementViewController : APBaseContentEditingViewController <AUDialogDelegate>
{
    _Bool _sendingAnnouncement;
    APChatRoomInfo *_chatRoomInfo;
    NSString *_tempAnnouncement;
}

@property(retain, nonatomic) NSString *tempAnnouncement; // @synthesize tempAnnouncement=_tempAnnouncement;
@property(retain, nonatomic) APChatRoomInfo *chatRoomInfo; // @synthesize chatRoomInfo=_chatRoomInfo;
@property(nonatomic) _Bool sendingAnnouncement; // @synthesize sendingAnnouncement=_sendingAnnouncement;
- (void).cxx_destruct;
- (void)postUpdateChatRoomAnnouncement:(id)arg1;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)submitAnnouncementSuccess;
- (void)submitAnouncementFail:(id)arg1;
- (void)cleanFroSubmit;
- (void)sendAnnouncement:(id)arg1;
- (void)cleanForCancel;
- (void)cancelSubmitAnnouncementIfNeed;
- (void)handleSubmitAnnouncement:(id)arg1;
- (id)initWithParameters:(id)arg1 back:(CDUnknownBlockType)arg2 submit:(CDUnknownBlockType)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

