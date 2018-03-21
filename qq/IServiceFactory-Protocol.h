//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@protocol IAccountService, IAlbumService, IAlertService, IClubInfoService, IContactsService, ICoreMotionService, IFriendListService, IFriendsVerifyMsgService, IGroupAudioChatService, IGroupVerifyMsgService, IIMService, ILTMultiAVService, ILTP2PAVService, IMSFConnectService, IMarketingAccountService, IMessageAssitantService, IMessageListService, IMsgReliableTransportationService, IMsgSpliteMergeService, IMusicPlayService, INetworkFlowStatService, IPacketDispatchService, IQQAVChatService, IRichStatusSignatureService, ISearchConditionService, ISynInfoService, ITeleHallService, IUIForwardService, IUrlImageService, IUserSummaryService, IVideoChatService;

@protocol IServiceFactory <NSObject>
- (id <ILTMultiAVService>)getLTMultiAVService;
- (id <ILTP2PAVService>)getP2PAVService;
- (id <ITeleHallService>)getTeleHallService;
- (void)destroyMessageService;
- (id <IMessageAssitantService>)getMessageService;
- (id <IGroupVerifyMsgService>)getGroupVerifyMsgService;
- (id <IClubInfoService>)getClubInfoService;
- (id <IFriendsVerifyMsgService>)getFriendsVerifyMsgService;
- (id <IMarketingAccountService>)getMarketingAccountService;
- (void)destroyAlertService;
- (id <IAlertService>)getAlertService;
- (void)destroyMusicPlayService;
- (id <IMusicPlayService>)getMusicPlayService;
- (id <ICoreMotionService>)getCoreMotionService;
- (id <IAlbumService>)getAlbumService;
- (void)destroyAlbumService;
- (id <IAlbumService>)createAlbumService;
- (id <IMessageListService>)getMessageListService;
- (void)destroyMessageListService;
- (id <IMessageListService>)createMessageListService;
- (id <IUrlImageService>)getUrlImageService;
- (void)destroyUrlImageService;
- (id <IUrlImageService>)createUrlImageService;
- (id <IMsgSpliteMergeService>)getMsgSpliteMergeService;
- (id <IContactsService>)getContactsService;
- (void)destroyContactsService;
- (id <IContactsService>)createContactsService;
- (id <INetworkFlowStatService>)getNetworkFlowStatService;
- (void)destroyNetworkFlowStatService;
- (id <INetworkFlowStatService>)createNetworkFlowStatService;
- (id <IMsgReliableTransportationService>)getTransportationService;
- (id <IIMService>)getIMService;
- (void)destroyIMService;
- (id <IIMService>)createIMService;
- (id <IQQAVChatService>)getQQAVChatService;
- (id <IGroupAudioChatService>)getGroupAudioChatService;
- (id <IVideoChatService>)getVideoChatService;
- (void)destroyVideoChatService;
- (id <IVideoChatService>)createVideoChatService;
- (id <IUIForwardService>)getUIForwardService;
- (void)destroyUIForwardService;
- (id <IUIForwardService>)createUIForwardService;
- (id <ISynInfoService>)getSynInfoService;
- (void)destroySynInfoService;
- (id <ISynInfoService>)createSynInfoService;
- (id <ISearchConditionService>)getSearchConditionService;
- (void)destroySearchConditionService;
- (id <ISearchConditionService>)createSearchConditionService;
- (id <IRichStatusSignatureService>)getRichStatusSignatureService;
- (void)destroyRichStatusSignatureService;
- (id <IRichStatusSignatureService>)createRichStatusSignatureService;
- (_Bool)isRichStatusServiceAvailable;
- (id <IUserSummaryService>)getUserSummaryService;
- (id <IFriendListService>)getFriendListService;
- (void)destroyFriendListService;
- (id <IFriendListService>)createFriendListService;
- (id <IAccountService>)getAccountService;
- (void)destroyAccountService;
- (id <IAccountService>)createAccountService;
- (id <IMSFConnectService>)getMSFConnectService;
- (void)destroyMSFConnectService;
- (id <IMSFConnectService>)createMSFConnectService;
- (id <IPacketDispatchService>)getPacketDispatchService;
- (void)destroyPacketDispatchService;
- (id <IPacketDispatchService>)createPacketDispatchService;
@end

