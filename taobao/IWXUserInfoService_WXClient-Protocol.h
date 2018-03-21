//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IWXUserInfoService_SDKExt-Protocol.h"

@class NSError, NSNumber, NSString, UIImage, WXPluginSettingItem, WXUserNoPushSetting, WXUserSizeData;
@protocol IWXUserInfoWXClientDelegate;

@protocol IWXUserInfoService_WXClient <IWXUserInfoService_SDKExt>
@property(retain, nonatomic) NSNumber *userIdentity;
- (NSString *)hintTextForError:(NSError *)arg1;
- (_Bool)isSellerAccountForIdentify:(int)arg1;
- (_Bool)isXiaoErOrSellerForChannal;
- (_Bool)isSellerAccount;
- (_Bool)updateWXConfigurationFileIfNeed;
- (void)modifyUserLoginPasswordWithOldPassword:(NSString *)arg1 andNewPasswor:(NSString *)arg2 delegate:(id <IWXUserInfoWXClientDelegate>)arg3;
- (void)removeDeviceTokenWithAppId:(int)arg1 andDelegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (void)uploadDeviceToken:(NSString *)arg1 andAppId:(int)arg2 andDelegate:(id <IWXUserInfoWXClientDelegate>)arg3;
- (void)syncUserBodySizeInfoIfNeed;
- (WXUserSizeData *)getUserBodySizeData;
- (void)updateUserBodySizeData:(WXUserSizeData *)arg1;
- (void)requestUserBodySizeDataWithDelegate:(id <IWXUserInfoWXClientDelegate>)arg1;
- (void)getSelfProfileWithDelegate:(id <IWXUserInfoWXClientDelegate>)arg1;
- (WXPluginSettingItem *)getSettingItemsForPlugin:(NSNumber *)arg1;
- (void)setPluginSettingItem:(WXPluginSettingItem *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setKeepOnLineInBackground:(_Bool)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (_Bool)getEnableAddressBook;
- (void)setEnableAddressBook:(_Bool)arg1;
- (_Bool)getAddMeValidation;
- (void)setAddMeValidation:(_Bool)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (int)logisticsFrequencyType;
- (void)setLogisticsFrequencyType:(int)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (void)setPushWhenPCOnline:(_Bool)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (_Bool)getRecvMsgWhenPCOnLine;
- (void)setRecvMsgWhenPCOnLine:(_Bool)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (_Bool)getEarListenerModel;
- (void)setEarListenerModel:(_Bool)arg1;
- (WXUserNoPushSetting *)noPushSetting;
- (void)setNoPushSetting:(WXUserNoPushSetting *)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (_Bool)getNightSilent;
- (void)setNightSilent:(_Bool)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (NSString *)getSelfBgImage;
- (void)setSelfBgImage:(NSString *)arg1;
- (void)modifyUserSelfAddress:(NSString *)arg1 province:(NSString *)arg2 delegate:(id <IWXUserInfoWXClientDelegate>)arg3;
- (void)modifyUserSelfBgImage:(UIImage *)arg1 imageUrl:(NSString *)arg2 delegate:(id <IWXUserInfoWXClientDelegate>)arg3;
- (void)modifyUserSelfAvatar:(UIImage *)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (void)modifyUserSelfGender:(int)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (void)modifyUserSelfName:(NSString *)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (void)modifyUserSelfDescription:(NSString *)arg1 delegate:(id <IWXUserInfoWXClientDelegate>)arg2;
- (_Bool)getVibrationPlay;
- (void)setVibrationPlay:(_Bool)arg1;
- (_Bool)getSoundPlay;
- (void)setSoundPlay:(_Bool)arg1;
- (void)setAudioCategory:(NSString *)arg1;
- (NSString *)getAudioCategory;
- (_Bool)needPushMessage;
- (void)syncUserProfileInfoIfNeed;
@end

