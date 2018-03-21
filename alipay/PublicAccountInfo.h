//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface PublicAccountInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPublicId;
    _Bool _hasPublicName;
    _Bool _hasPublicDesc;
    _Bool _hasDescUrl;
    _Bool _hasAlipaysUrl;
    _Bool _hasLogoUrl;
    _Bool _hasFollowed;
    _Bool _followed;
    NSString *_publicId;
    NSString *_publicName;
    NSString *_publicDesc;
    NSString *_descUrl;
    NSString *_alipaysUrl;
    NSString *_logoUrl;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *alipaysUrl; // @synthesize alipaysUrl=_alipaysUrl;
@property(retain, nonatomic) NSString *descUrl; // @synthesize descUrl=_descUrl;
@property(retain, nonatomic) NSString *publicDesc; // @synthesize publicDesc=_publicDesc;
@property(retain, nonatomic) NSString *publicName; // @synthesize publicName=_publicName;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(readonly) _Bool hasFollowed; // @synthesize hasFollowed=_hasFollowed;
@property(readonly) _Bool hasLogoUrl; // @synthesize hasLogoUrl=_hasLogoUrl;
@property(readonly) _Bool hasAlipaysUrl; // @synthesize hasAlipaysUrl=_hasAlipaysUrl;
@property(readonly) _Bool hasDescUrl; // @synthesize hasDescUrl=_hasDescUrl;
@property(readonly) _Bool hasPublicDesc; // @synthesize hasPublicDesc=_hasPublicDesc;
@property(readonly) _Bool hasPublicName; // @synthesize hasPublicName=_hasPublicName;
@property(readonly) _Bool hasPublicId; // @synthesize hasPublicId=_hasPublicId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

