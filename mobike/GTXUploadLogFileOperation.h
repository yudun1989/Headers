//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTXUploadOperation.h"

@class GTXLogFileMeta, NSString;

@interface GTXUploadLogFileOperation : GTXUploadOperation
{
    GTXLogFileMeta *_meta;
    NSString *_layoutJson;
    NSString *_filePath;
}

+ (id)create:(id)arg1;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *layoutJson; // @synthesize layoutJson=_layoutJson;
@property(retain, nonatomic) GTXLogFileMeta *meta; // @synthesize meta=_meta;
- (void).cxx_destruct;
- (void)failure;
- (void)success;
- (id)url;
- (id)bodyStream;
- (id)identifier;
- (void)setMsgLayoutParam:(id)arg1;
- (id)initWithLogFileMeta:(id)arg1;

@end

