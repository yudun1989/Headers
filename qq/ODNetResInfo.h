//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ODNetResInfo : NSObject
{
    int _downloadTime;
    NSString *_url;
    NSString *_md5;
    NSArray *_unzipFiles;
    NSString *_zipSavePath;
    NSString *_unZipDirPath;
}

@property(nonatomic) int downloadTime; // @synthesize downloadTime=_downloadTime;
@property(copy, nonatomic) NSString *unZipDirPath; // @synthesize unZipDirPath=_unZipDirPath;
@property(copy, nonatomic) NSString *zipSavePath; // @synthesize zipSavePath=_zipSavePath;
@property(readonly, retain, nonatomic) NSArray *unzipFiles; // @synthesize unzipFiles=_unzipFiles;
@property(readonly, copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

