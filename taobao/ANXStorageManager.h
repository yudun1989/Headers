//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ANXStorageManager : NSObject
{
    NSMutableDictionary *_userDefaults;
    NSMutableDictionary *_files;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *files; // @synthesize files=_files;
@property(retain, nonatomic) NSMutableDictionary *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (id)storageWithType:(unsigned long long)arg1 namespace:(id)arg2;

@end

