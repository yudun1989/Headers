//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class AWEStoryData, NSMutableArray, NSString;

@interface AWEStoryDataCollection : NSObject <AWEUserMessage>
{
    NSMutableArray *_storyArray;
    AWEStoryData *_currentUserStoryData;
    unsigned long long _index;
}

+ (id)instanceWithAwemeModel:(id)arg1;
+ (id)instanceWithCurrentUser;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) AWEStoryData *currentUserStoryData; // @synthesize currentUserStoryData=_currentUserStoryData;
@property(retain, nonatomic) NSMutableArray *storyArray; // @synthesize storyArray=_storyArray;
- (void).cxx_destruct;
- (void)didFinishLogin;
- (_Bool)hasLive;
- (_Bool)hasNewConcernVideo;
- (_Bool)hasFreshStory;
- (_Bool)isEmpty;
- (void)resetIndexes;
- (void)removeStoryAtIndex:(unsigned long long)arg1;
- (void)removeStoryForCurrentUserAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfStoryData:(id)arg1;
- (void)removeStory:(id)arg1;
- (id)storyDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)removeAll;
- (void)updateStoryForCurrentUser:(id)arg1;
- (id)updateStory:(id)arg1 forUser:(id)arg2;
- (id)goToIndex:(unsigned long long)arg1;
- (id)goToNextData;
- (id)goToPreviousData;
- (void)addFeed:(id)arg1;
- (id)currentData;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

