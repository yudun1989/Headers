//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQRichTinyVideoPostureDetectingBadcaseReport : NSObject
{
    NSString *_badcaseFileFolder;
    NSString *_strIMEI;
    NSString *_strOS;
    NSString *_strModelName;
    NSString *_QQVersion;
}

+ (id)getInstance;
@property(retain, nonatomic) NSString *QQVersion; // @synthesize QQVersion=_QQVersion;
@property(retain, nonatomic) NSString *strModelName; // @synthesize strModelName=_strModelName;
@property(retain, nonatomic) NSString *strOS; // @synthesize strOS=_strOS;
@property(retain, nonatomic) NSString *strIMEI; // @synthesize strIMEI=_strIMEI;
@property(retain, nonatomic) NSString *badcaseFileFolder; // @synthesize badcaseFileFolder=_badcaseFileFolder;
- (void)cleanupReportFile;
- (void)doReport;
- (void)reportImpl:(id)arg1;
- (id)teaEncrypt:(id)arg1;
- (id)zipData:(id)arg1;
- (_Bool)startUpload:(id)arg1 fileName:(id)arg2 errorCode:(id)arg3;
- (id)createUploadRequest:(id)arg1 fileName:(id)arg2 errorCode:(id)arg3 fileData:(id)arg4;
- (id)getLoginUins;
- (id)init;

@end

