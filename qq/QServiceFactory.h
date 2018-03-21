//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IServiceFactory-Protocol.h>

@class NSString;

@interface QServiceFactory : NSObject <IServiceFactory>
{
}

+ (id)sharedFactory;
- (id)getLTMultiAVService;
- (id)getP2PAVService;
- (id)getTeleHallService;
- (void)destroyMessageService;
- (id)getMessageService;
- (id)getGroupVerifyMsgService;
- (id)getClubInfoService;
- (id)getFriendsVerifyMsgService;
- (id)getMarketingAccountService;
- (void)destroyAlertService;
- (id)getAlertService;
- (void)destroyMusicPlayService;
- (id)getMusicPlayService;
- (id)getCoreMotionService;
- (id)getAlbumService;
- (void)destroyAlbumService;
- (id)createAlbumService;
- (void)destroyMessageListService;
- (id)createMessageListService;
- (id)getMessageListService;
- (id)getMsgSpliteMergeService;
- (id)getUrlImageService;
- (void)destroyUrlImageService;
- (id)createUrlImageService;
- (id)getContactsService;
- (void)destroyContactsService;
- (id)GroupDBServie;
- (id)createContactsService;
- (id)getNetworkFlowStatService;
- (void)destroyNetworkFlowStatService;
- (id)createNetworkFlowStatService;
- (id)getTransportationService;
- (id)getIMService;
- (void)destroyIMService;
- (id)createIMService;
- (id)getQQAVChatService;
- (id)getVideoChatService;
- (void)destroyVideoChatService;
- (id)createVideoChatService;
- (id)getUIForwardService;
- (void)destroyUIForwardService;
- (id)createUIForwardService;
- (id)getSynInfoService;
- (void)destroySynInfoService;
- (id)createSynInfoService;
- (id)getSearchConditionService;
- (void)destroySearchConditionService;
- (id)createSearchConditionService;
- (id)getRichStatusSignatureService;
- (void)destroyRichStatusSignatureService;
- (id)createRichStatusSignatureService;
- (_Bool)isRichStatusServiceAvailable;
- (id)getUserSummaryService;
- (id)getFriendListService;
- (id)getGroupAudioChatService;
- (void)destroyFriendListService;
- (id)createFriendListService;
- (id)getAccountService;
- (void)destroyAccountService;
- (id)createAccountService;
- (id)getMSFConnectService;
- (void)destroyMSFConnectService;
- (id)createMSFConnectService;
- (id)getPacketDispatchService;
- (void)destroyPacketDispatchService;
- (id)createPacketDispatchService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

