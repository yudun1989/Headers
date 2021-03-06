//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSAtlasUploadResource-Protocol.h"

@class NSData, NSString;

@interface KSAtlasUploadBaseResource : NSObject <KSAtlasUploadResource>
{
    NSString *_localPath;
    unsigned long long _index;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
- (void).cxx_destruct;
- (id)addictionalParams;
- (id)fileName;
- (id)name;
- (id)mimeType;
@property(readonly, nonatomic) NSString *remotePath;
- (id)initWithFilePath:(id)arg1 index:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

