//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface DownloadFileCache : NSObject
{
    NSString *_strContent;
    NSString *_strPreViewUrl;
    NSNumber *_numFileSize;
    NSNumber *_numDuation;
}

@property(copy, nonatomic) NSNumber *numDuation; // @synthesize numDuation=_numDuation;
@property(copy, nonatomic) NSNumber *numFileSize; // @synthesize numFileSize=_numFileSize;
@property(copy, nonatomic) NSString *strPreViewUrl; // @synthesize strPreViewUrl=_strPreViewUrl;
@property(copy, nonatomic) NSString *strContent; // @synthesize strContent=_strContent;
- (void).cxx_destruct;

@end

