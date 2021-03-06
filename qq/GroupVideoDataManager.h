//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface GroupVideoDataManager : NSObject
{
    NSMutableArray *_sortedOnlineArr;
    NSMutableArray *_sortedMemberArr;
}

- (void)sortOnlineArr;
- (unsigned long long)memberCountInOnlineArr;
- (id)memberInOnlineArrAtIndex:(unsigned long long)arg1;
- (void)removeMemberFromOnlineArr:(id)arg1;
- (void)addMemberToOnlineArr:(id)arg1;
- (void)sortData;
- (id)memberAtIndex:(unsigned long long)arg1;
- (unsigned long long)memberCount;
- (void)clearData;
- (void)insertMemberModel:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeMemberModel:(id)arg1;
- (void)addMemberModel:(id)arg1;
- (void)dealloc;
- (id)init;

@end

