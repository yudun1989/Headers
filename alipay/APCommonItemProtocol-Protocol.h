//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSDictionary, NSString, UIImage;

@protocol APCommonItemProtocol <NSObject>

@optional
- (UIImage *)cornerSubIcon;
- (UIImage *)defaultImage;
- (NSDictionary *)extInfo;
- (NSString *)iconActionUrl;
- (NSString *)actionName;
- (NSString *)bizType;
- (NSString *)actionUrl;
- (NSString *)commonDetailTitle;
- (NSString *)commonTitleDescription;
- (_Bool)isActiveAccount;
- (NSString *)iconUrl;
- (_Bool)gSearchIsMatchTitle;
- (NSAttributedString *)gSearchMatchValueMultiString;
- (NSString *)gSearchMatchValue;
- (NSString *)gSearchMatchKey;
- (NSString *)secondarySearchData;
- (NSString *)primarySearchData;
- (NSString *)indexChar;
- (NSString *)pyString;
- (NSString *)commonSubTitle;
- (NSString *)commonType;
- (NSString *)commonTitle;
- (NSString *)commonID;
@end

