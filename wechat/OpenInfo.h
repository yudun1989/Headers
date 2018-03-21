//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class CMessageWrap, NSMutableDictionary, NSString;

@interface OpenInfo : NSObject <NSCoding>
{
    unsigned int m_uiLocalID;
    NSString *m_nsUsrName;
    unsigned int m_uiCreateTime;
    unsigned int m_uiScene;
    CMessageWrap *m_wrapMsg;
    unsigned int m_uiStartPos;
    unsigned int m_uiAddQueueTime;
    _Bool m_bCheckMd5;
    NSString *m_nsAttachId;
    NSString *m_nsAttachFileExt;
    unsigned int m_uiAttachDataSize;
    unsigned long long m_ui64StartTime;
    _Bool m_bUpload;
    int m_nRetCode;
    _Bool _m_bFileExistInSvr;
    _Bool _m_bSilent;
    NSString *m_nsShareOriginUrl;
    NSString *m_nsShareOpenUrl;
    NSString *m_nsJsAppId;
    NSMutableDictionary *m_dicStatParas;
    NSString *_m_nsMsgMd5;
}

@property(nonatomic) _Bool m_bSilent; // @synthesize m_bSilent=_m_bSilent;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @synthesize m_nsMsgMd5=_m_nsMsgMd5;
@property(nonatomic) _Bool m_bFileExistInSvr; // @synthesize m_bFileExistInSvr=_m_bFileExistInSvr;
@property(retain, nonatomic) NSMutableDictionary *m_dicStatParas; // @synthesize m_dicStatParas;
@property(retain, nonatomic) NSString *m_nsJsAppId; // @synthesize m_nsJsAppId;
@property(retain, nonatomic) NSString *m_nsShareOpenUrl; // @synthesize m_nsShareOpenUrl;
@property(retain, nonatomic) NSString *m_nsShareOriginUrl; // @synthesize m_nsShareOriginUrl;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) _Bool m_bUpload; // @synthesize m_bUpload;
@property(nonatomic) unsigned int m_uiAttachDataSize; // @synthesize m_uiAttachDataSize;
@property(retain, nonatomic) NSString *m_nsAttachFileExt; // @synthesize m_nsAttachFileExt;
@property(retain, nonatomic) NSString *m_nsAttachId; // @synthesize m_nsAttachId;
@property(nonatomic) _Bool m_bCheckMd5; // @synthesize m_bCheckMd5;
@property(nonatomic) unsigned int m_uiAddQueueTime; // @synthesize m_uiAddQueueTime;
@property(nonatomic) unsigned int m_uiStartPos; // @synthesize m_uiStartPos;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
- (void).cxx_destruct;
- (id)GetStatInfo;
- (void)SetStartTime;
- (void)SetStatus;
- (_Bool)IsCanDownload;
- (_Bool)IsCanUpload;
- (void)GetMsg;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

