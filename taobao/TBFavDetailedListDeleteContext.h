//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface TBFavDetailedListDeleteContext : NSObject
{
    NSString *_appName;
    NSMutableSet *_listIDs;
    long long _type;
    CDUnknownBlockType _completion;
}

+ (id)defaultContext;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableSet *listIDs; // @synthesize listIDs=_listIDs;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)init;

@end

