//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface QQPublicAccountVideoChildChannelFollowDataMgr : NSObject
{
    NSString *_currentUin;
    NSMutableDictionary *_subsChannelDatas;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *subsChannelDatas; // @synthesize subsChannelDatas=_subsChannelDatas;
@property(copy, nonatomic) NSString *currentUin; // @synthesize currentUin=_currentUin;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)key:(unsigned long long)arg1;
- (_Bool)updateData:(id)arg1;
- (id)getChildChannelStatusByID:(int)arg1;
- (unsigned int)getSubscriptionCountByID:(int)arg1;
- (id)getHeaderImgUrlByID:(int)arg1;
- (_Bool)getFollowingByID:(unsigned long long)arg1;
- (_Bool)writeLikingInnerIDsToFile;
- (void)loadLikingInnerIDsFromFile;
- (id)getLikingInnerIDsCachePath;
- (void)dealloc;
- (id)init;

@end

