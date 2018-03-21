//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupFileTask.h>

@class NSData, NSString, QQGroupFileInfo;

@interface QQGroupFileUploadTask : QQGroupFileTask
{
    QQGroupFileInfo *_fileInfo;
    _Bool _resumedFormServer;
    unsigned int _businessType;
    NSString *_folderId;
    unsigned long long _messageRandom;
    unsigned long long _scanCompletedSize;
    double _videoDuration;
    NSData *_sha;
    NSData *_sha3;
    NSData *_md5;
    struct CGSize _imageSize;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSData *sha3; // @synthesize sha3=_sha3;
@property(retain, nonatomic) NSData *sha; // @synthesize sha=_sha;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) unsigned long long scanCompletedSize; // @synthesize scanCompletedSize=_scanCompletedSize;
@property(nonatomic, getter=isResumedFromServer) _Bool resumedFormServer; // @synthesize resumedFormServer=_resumedFormServer;
@property(nonatomic) unsigned long long messageRandom; // @synthesize messageRandom=_messageRandom;
@property(readonly, nonatomic) NSString *folderId; // @synthesize folderId=_folderId;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
- (void).cxx_destruct;
- (id)description;
- (id)extraInfo;
@property(retain, nonatomic) QQGroupFileInfo *fileInfo;
@property(readonly, nonatomic) NSString *fileName;
- (id)initWithLocalFilePath:(id)arg1 groupCode:(unsigned long long)arg2 toBusinessType:(unsigned int)arg3 folderId:(id)arg4 remoteUUID:(id)arg5 remoteName:(id)arg6;
- (id)initWithLocalFilePath:(id)arg1 groupCode:(unsigned long long)arg2 toBusinessType:(unsigned int)arg3 folderId:(id)arg4;
- (id)initWithDataBaseRecordInfo:(id)arg1;
- (id)init;

@end

