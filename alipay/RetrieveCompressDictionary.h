//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSData, NSString;

@interface RetrieveCompressDictionary : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasZipType;
    _Bool _hasDirect;
    _Bool _hasDictionaryId;
    _Bool _hasSha256Digest;
    _Bool _hasServerResponseTime;
    _Bool _hasExpireTime;
    _Bool _hasGzipedDictionary;
    int _zipType;
    unsigned int _direct;
    NSString *_dictionaryId;
    NSString *_sha256Digest;
    NSString *_serverResponseTime;
    NSString *_expireTime;
    NSData *_gzipedDictionary;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSData *gzipedDictionary; // @synthesize gzipedDictionary=_gzipedDictionary;
@property(retain, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *serverResponseTime; // @synthesize serverResponseTime=_serverResponseTime;
@property(retain, nonatomic) NSString *sha256Digest; // @synthesize sha256Digest=_sha256Digest;
@property(retain, nonatomic) NSString *dictionaryId; // @synthesize dictionaryId=_dictionaryId;
@property(nonatomic) unsigned int direct; // @synthesize direct=_direct;
@property(nonatomic) int zipType; // @synthesize zipType=_zipType;
@property(readonly) _Bool hasGzipedDictionary; // @synthesize hasGzipedDictionary=_hasGzipedDictionary;
@property(readonly) _Bool hasExpireTime; // @synthesize hasExpireTime=_hasExpireTime;
@property(readonly) _Bool hasServerResponseTime; // @synthesize hasServerResponseTime=_hasServerResponseTime;
@property(readonly) _Bool hasSha256Digest; // @synthesize hasSha256Digest=_hasSha256Digest;
@property(readonly) _Bool hasDictionaryId; // @synthesize hasDictionaryId=_hasDictionaryId;
@property(readonly) _Bool hasDirect; // @synthesize hasDirect=_hasDirect;
@property(readonly) _Bool hasZipType; // @synthesize hasZipType=_hasZipType;
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

