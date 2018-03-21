//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ZCacheAppInfoModel : NSObject
{
    unsigned long long _seq;
    NSString *_mappingUrl;
    NSArray *_addFolders;
    NSArray *_removedFolders;
    NSArray *_removedRes;
    long long _appMonitor;
}

@property(readonly, nonatomic) long long appMonitor; // @synthesize appMonitor=_appMonitor;
@property(readonly, copy, nonatomic) NSArray *removedRes; // @synthesize removedRes=_removedRes;
@property(readonly, copy, nonatomic) NSArray *removedFolders; // @synthesize removedFolders=_removedFolders;
@property(readonly, copy, nonatomic) NSArray *addFolders; // @synthesize addFolders=_addFolders;
@property(readonly, copy, nonatomic) NSString *mappingUrl; // @synthesize mappingUrl=_mappingUrl;
@property(readonly, nonatomic) unsigned long long seq; // @synthesize seq=_seq;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

